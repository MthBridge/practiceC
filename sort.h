typedef struct CarData
{
	char name[256];
	int displacement;
	float price;
}CarData;

int cmp_int(const void *arg0, const void *arg1);
int cmp_char(const void *arg0, const void *arg1);
int cmp_float(const void *arg0, const void *arg1);
void generalSort(CarData *array, int length);
int importData(FILE *ifp, struct CarData *array);