from GeneticSolver import GeneticSolver
# from MultiprocessGeneticSolver import MPGeneticSolver


def main():
    solver = GeneticSolver(verbosity=2)
    solution = solver.solve(n_generations=20)
    print(solution)


if __name__ == '__main__':
    main()
