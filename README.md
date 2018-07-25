# Shortest-Path-of-Graphs
This program Takes a file in the form 

6  
1 2  
1 3  
2 4  
2 5  
2 6  
3 4  
4 5  
5 6  
0 0  
1 5  
3 6  
2 3  
4 4  
0 0  
  
where the first integer represents the number of vertices,
the following pairs up to the first set of 0 0 represents
the edge connections, and the final set of pairs up to the last
set of 0 0 represents what vertices will have their distance and
shortest path calculated from the result of Breadth First Search.

The output file will present the adjacency list representation of
the created graph and print the distance and shortest paths of the
specified vertices given in the input file.

Files Included
1) List.h		- List header file
2) List.c		- Doubly Linked List ADT
3) Graph.h		- Graph Header file
4) Graph.c 		- Graph ADT
5) GraphTest.c		- Graph Tester file
6) Findpath.c		- Program's main. Takes file input and prints to output the
			- adjaceny list representatio, the distance
			- and shortest paths of vertices from specified input
7) Makefile		- Makefile to compile all source files
8) README 		- Program desription and list of included files


