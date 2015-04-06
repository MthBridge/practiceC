#include <stdio.h>
#include <stdlib.h>


int importData(FILE *ifp, struct CarData *array)
{

	/* 行数カウント：Linuxなら,wcコマンドが使いたい */
	for(int fLineNum = 0; fgets(ifp); fLineNum++);

	array = (CarData*)malloc(sizeof(CarData) * fLineNum);

	for(int i = 0; i < flnum; i++){
		fscanf(ifp, "%[^,],%d,%f", array[i]->name, 
			array[i]->displacement, array->price);
	}

	return fLineNum;
}