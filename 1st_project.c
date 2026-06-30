#include <stdio.h>

int main(void)
{
    //initialising 3 types of int variables 
    int date;
    int month;
    int year;
    
    //taking inputs for variables 
    printf("enter date: ");
    scanf("%d", &date);
    printf("enter month: ");
    scanf("%d", &month);
    printf("enter year: ");
    scanf("%d", &year);
    
    //printing date
    printf("today is %d/%d/%d",date,month, year);
}