/*
 *  * Name         : Andrew Hartwell
 *  * CruzID       : arhartwe
 *  * Assignment   : pa4
*/


#include<stdio.h>
#include<stdlib.h>
#include"Graph.h"

int main(int argc, char * argv[])
{
	FILE *in, *out;
	in = fopen(argv[1], "r");
	out = fopen(argv[2], "w");

	if(argc != 3)
	{
		printf("Usage %s <input file> <output file>\n", argv[0]);
		exit(1);
	}
	int i = 0;
	int first;
	int second;
	int set = 0;
	int noPrint = 0;
	int stop = 0;
	List Path = newList();
	fscanf(in, "%d", &i);   //Grabs first int from input file
	Graph G = newGraph(i);
	while(!feof(in))	//Loops through input file
	{
		fscanf(in, "%d %d", &first, &second); //Grabs int pairs from input file
		if(set == 1 && stop != 1)
		{
			fprintf(out, "\n");	
			noPrint = 1;
			BFS(G, first);	//performs BFS on first
			getPath(Path, G, second);

			fprintf(out, "The distance from %d to %d is ", first, second);
			if(getDist(G, second) == -1)
			{
				fprintf(out,"infinity\n");
			}
			else
			{
				fprintf(out,"%d\n", (getDist(G, second)));
			}
			if(front(Path) == NIL)
			{
				fprintf(out,"No %d-%d path exists", first,second);
			}
			else
			{
				fprintf(out, "A shortest %d-%d path is: ", first,second);
				printList(out,Path);
				fprintf(out, "\n");	
			}
			clear(Path);
			if(first == 0 && second == 0)	//Prevents printGraph from executing an extra time
			{
				stop = 1;
			}
		}
		if(first != 0 && second != 0 && set != 1) //Add edges until reach 0 0 int pair
		{
			addEdge(G, first, second);
		}
		else if(noPrint != 1) //Print graph after reaching 0 0 pair, then change set to 1
			//so that printGraph does not execute twice
		{
			printGraph(out,G);
			set = 1;
		}
	}	
	freeList(&Path);
	freeGraph(&G);
	fclose(in);
	fclose(out);
	return 1;
}
