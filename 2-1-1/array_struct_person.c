#include <stdio.h>
int main()
{
	typedef struct person
	{
		char name[10];
		int age;
	}Person;
	Person array[3];
	for (int i=0;i<3;i++)
		scanf("%s %d",array[i].name,&array[i].age);
	for (int i=0;i<3;i++)
		printf("Name:%s, Age:%d\n",array[i].name,array[i].age);
	return 0;
}
