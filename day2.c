/*Problem Statement

Jim is a little scientist. He has planned to design software to track all his work. As part of this requirement, he needs to move all the uppercase letters to the end of the sentence and print the remaining letters without changing the order. He wants your help to complete the task.Write a program to move all the uppercase letters to the end of the string.*/

#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    char lowercase[1000]="";
    char uppercase[1000]="";
    int lower=0,upper=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
        {
            uppercase[upper++]=str[i];
        }
        else
        {
            lowercase[lower++]=str[i];
        }
    }
    lowercase[lower]='\0';
    uppercase[upper]='\0';
    printf("%s%s\n",lowercase,uppercase);
    return 0;
}