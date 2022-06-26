# Sorting Algorithm Benchmark

This is a bundle of two C programs. One constructs a quad tree, and the other compares the time complexity of various sorting algorithms on a given dataset defined via the user from the CLI.

To run either program change directory to `project_X` and run `make`. This will compile the C and header files to make an executable that can then be ran with `./quadTree` for project_1 or `./compiled` for project_2.

# Project 1
Constructs a quadtree that can visually be seen at `project_1/quad.jpeg`. This project essentually just creates a visualisation of a consturucted quadtree over a two-dimensional space by recursively subdividing it into four quadrants or regions. The output at each stage is written to `project_1/quad.out

# Project 2
This takes in some parameters from the user for array_size, min_range, max_range and runs a performance output against a selection of the below sorting algorithms.

* BubbleSort -> __O(n²)__
* QuickSort ->  __O(n*log n)__
* ShellSort -> __O(n*log n)__
* InsertionSort -> __O(n)__

_The time complexity of the above is calculated as best-case*_
