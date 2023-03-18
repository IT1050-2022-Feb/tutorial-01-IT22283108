/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main()
{
	int m1,m2;
	
	printf("Enter marks of subject : ");
	scanf("%d",&m1);
	
	printf("Enter marks of subject : ");
	scanf("%d",&m2);
	
	printf("Average marks of two subjects : %.2f",(m1+m2)/2.0);
	
	return 0;
}
