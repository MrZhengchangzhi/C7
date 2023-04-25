
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Data
{
	char name[20];
	int year;
	int num;
};

//void qsort(void* s, int sz, int size, int (*cmp)(const void*, const void*))
//{
//	if(cmp())
//}
//int cmp(const void* s1, const void* s2)
//{
//	;
//}

bubble_sort(char* s, int sz, int width)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i; j++)
		{
			int left = 0;
			int right = sz - 1;
			if (*s > *s + 1)
			{

			}
		}
	}

}

int main()
{
	int arr1[10] = { 4,8,1,9,6,7,3,5,2 };
	struct Data s[3] = { {"chengdu",2014,50},{"guiyang",2015,30},{"zhuzhou",2012,83} };
	int sz = sizeof(s) / sizeof(s[0]);
	/*struct Data* p = &s;
	cmp(p)*/
	//cmp(s, s);
	////bubble_sort();
	//qsort(s, sz, sizeof(s[0]), cmp);
	bubble_sort(s->year, sz, sizeof(s[0]), cmp);
	return 0;
}









//int main()
//{
//	int num = 20;
//	int sum = 20;
//	while (num / 2 != 0)
//	{
//		sum += num / 2;
//		num /= 2;
//	}
//	sum = sum + 1;
//	printf("sum=%d\n", sum);
//	return 0;
//}