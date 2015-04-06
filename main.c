#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void main(int argc, char* argv[])
{

	FILE *fp;
	CarData *carData;

	char *fileName = argv[1];
	int fLineNum;
	int i;

	if((fp = fopen(fileName,"r")) == NULL){
		fprintf(stderr, "%sを開けません\n", fileName);
		exit(EXIT_FAILURE);
	}

	fLineNum = importData(fp,carData);
	generalSort(carData, fLineNum);


	printf("ソート結果\n");
	printf("車名　：　排気量　：　価格\n");
	
	for(i = 0; i < fLineNum; i++){
		printf("%s ： %d ： %f\n", carData[i].name, 
				carData[i].displacement, carData[i].price);
	}

	fclose(fp);
}
