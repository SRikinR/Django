#include<stdio.h>
#include "string.h"

struct marks{

	char name[100];
	int sub1;
	int sub2;
	int sub3;
	int total; 
} student[3];

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

