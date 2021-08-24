import subprocess
import numpy as np
import xml.etree.ElementTree as ET


class Bambu:

    def __init__(self, program_name="blowfish/bf.c"):
        self.optimization_flags = dict()
        self.program_name = program_name
        self.get_flags()

    def run(self, gene, xml=False, cmd=True):

        command = "bambu --simulate"
        flags_idx = np.where(gene == 1)[0]
        for i in flags_idx:
            command += " " + self.optimization_flags[i] + " "
        command += " " + self.program_name + " "
        out = subprocess.getoutput(command)
        return self.parse_performances_cmd(out)

    def run_bambu_xml(self, individual):
        directory = "result_" + str()
        subprocess.getoutput("mkdir " + directory)
        command = ["bambu", "--simulate"]
        flags_idx = np.where(individual == 1)[0]
        for i in flags_idx:
            command.append(self.optimization_flags[i])
        command.append(self.program_name)
        out = subprocess.check_output(command, cwd=directory)
        return self.parse_performances_xml()

    def run_bambu_cmd(self, individual, program_name):
        command = "bambu --simulate"
        flags_idx = np.where(individual == 1)[0]
        for i in flags_idx:
            command += " " + self.optimization_flags[i] + " "
        command += " " + program_name + " "
        out = subprocess.getoutput(command)
        return self.parse_performances_cmd(out)

    def parse_performances_xml(self):
        xml_file = "\bambu_results_0.xml"
        tree = ET.parse(xml_file)
        root = tree.getroot()
        perf = {}
        for child in root:
            perf['value'] = child.attrib['value']

        return perf

    def parse_performances_cmd(self, output):
        hls_pattern = "Total cycles"
        number_cycles_string = ""
        output = output.splitlines()
        for l in output:
            if l.find(hls_pattern) != -1:
                number_cycles_string = l
                break
        print(l)
        number_cycles = number_cycles_string.split(":")[-1].strip().split()[0]
        return -int(number_cycles)

    def get_flags(self):

        if not self.optimization_flags:
            with open("cobayn.txt", "r") as file:
                text = file.readlines()
                for i, line in enumerate(text):
                    self.optimization_flags[i] = line.strip()
        else:
            return self.optimization_flags
