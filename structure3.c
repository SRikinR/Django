#include<stdio.h>
#include "string.h"


struct class{
	int sub[3];
	int total;
};

int main()
{

	int i,j;	
	struct class student[i];
	struct class total;
	int num;
	printf("Enter the number of students: \n");
	scanf("%d",&num);
	for (i=0; i<=(num-1); i++)
	{
		printf("Student %d\n", i);
		printf("Enter Sub. Grades of CS EC IT respectively:");
		for (j=0; j<=2; j++)
		{
			printf("\n->");
			scanf("%d", &student[i].sub[j], &student[i]);
			
			student[i].total =0;
			student[i].total = student[i].sub[0]+student[i].sub[1]+student[i].sub[2];	
		}
			printf("\nTotal is: %d\n", student[i].total);
	}
}

/*
int main()
{
	//struct marks student[3];
	int i;
	for (i=0; i<=2; i++)
	{
	printf("Enter Your Name and marks of the English Maths and Science Respectively.\n");
	scanf("%s %d %d %d", &student[i].name, &student[i].sub1, &student[i].sub2, &student[i].sub3);
	
	int add;
	add=(student[i].sub1 + student[i].sub2 + student[i].sub3);
	student[i].total=add;

	printf("Name of the Student is: %s\n marks\n English %d\n Maths %d\n Science %d\n Total %d\n", student[i].name, student[i].sub1, student[i].sub2, student[i].sub3, student[i].total);
	
	}
	
			
}
*/
