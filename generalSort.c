#include <stdio.h>
#include <stdlib.h>
#include <sort.h>

/* アルゴリズム：クイックソートを用いる */
void generalSort(CarData *array, int length)
{
	/* 自分でソートのアルゴリズムを作ってみようと思った。
	int pivot = array[0]->displace + array[(int)(lentgh/2 + 0.5)] 
				+ array[length - 1];
	*/
	qsort(array, length, sizeof(CarData), cmp_int);
}

/*
void swap(CarData *arg0, CarData *arg1)
{

}
*/