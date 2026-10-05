#include<stdio.h>
int main()
{
    int rno;
    int perc;
    char sec;
    printf("enter your roll no :");
    scanf("%d" ,&rno);
    printf("enter your percetage :");
    scanf("%d" , &perc);
    printf("enter your section :");
    scanf(" %c" ,&sec);
    printf("\nroll no : %9d \npercentage : %5d \nsection : %7c" ,rno ,perc ,sec);
    return 0;
}  