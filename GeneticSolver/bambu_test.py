import subprocess as s
import numpy as np

optimization_flags = dict()

with open("cobayn.txt", "r") as file:
    text = file.readlines()
    for i, line in enumerate(text):
        optimization_flags[i] = line.strip()


def run_bambu_cmd(individual, program_name="mips.c"):
    command = "bambu --simulate"
    flags_idx = np.where(individual == 1)[0]
    for i in flags_idx:
        command += " " + optimization_flags[i] + " "
    command += " " + program_name + " "
    out = s.getoutput(command)
    return parse_performances_cmd(out)


def parse_performances_cmd(output):
    hls_pattern = "cycles"
    number_cycles_string = ""
    output = output.splitlines()
    for l in output:
        if l.find(hls_pattern) != -1:
            number_cycles_string = l
    print(l)
    number_cycles = number_cycles_string.split(":")[-1].strip().split()[0]
    return int(number_cycles)


print(run_bambu_cmd(np.array([0, 0, 0, 1, 1, 0, 1])))
