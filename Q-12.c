#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct date{
    int year;
    int month;
    int day;
};
bool prime(int);
int main()
{
    struct date d;
    scanf("%d\%d\%d",&d.year,&d.month,&d.day);
    bool y=prime(d.year);
    if(y==true)
    {
        
    }
}