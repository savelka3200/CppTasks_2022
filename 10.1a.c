// task 10.1a

#include <stdio.h>
#include <stdbool.h>

typedef struct Date{
    int day;
    int month;
    int year;
}Date;

void outputDate(Date d){
    printf("%d.%d.%d\n",d.day,d.month,d.year);
}

bool inputDate(Date* d){
    printf("input day,month,year");
    return scanf("%d.%d.%d",&d->day,&((*d).month),&d->year)==3;
}

int main(){
    Date d = {13,4,2022};
    outputDate(d);
    Date d1;
    if(inputDate(&d1))
        outputDate(d1);
}


