/*
Program(2)-Write a program to make use of basic Input/Output functions using different data types.
Solution(2)- User Define values.
*/

#include<stdio.h>
int main()
{
int rollnum;
float per;
char grade;

printf("\n Enter Student Roll Number:");
scanf("%d",&rollnum);
printf("\n Enter Student Percentage:");
scanf("%f",&per);
printf("\n Enter Student Grade:");
scanf("%c",&grade);

printf("\n.....Student Information.......\n");
printf("\n Roll Number is:%d",rollnum);
printf("\n Percentage is:%d",per);
printf("\n Grade:%C",grade);

return 0;
}