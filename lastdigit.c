/*
Student Name : Kabir Shrestha
Subject : Programming Fundamental
Lab No. : 17
Program : WAP tp print the last digit or any number and number without last digit.
Date : 2016-11-24
*/
#include<stdio.h>
	int main()
	{
	int a,i;
	
	printf("\nEnter the number :");
	scanf("%d",&a);
	
	i=a%10;
	a=a/10;
	
	printf("\nThe last digit is : %d",i);
	printf("\nThe number without last digit is : %d",a);

	return 0;
 	}
