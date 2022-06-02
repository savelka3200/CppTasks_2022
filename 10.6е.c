#include <stdio.h>
#define N 64

typedef struct {
    char subject[N];
    char teacher[N];
    int group;
    char day_of_week[N];
    char time[N];
    char audience[N];
} Seminar;

Seminar input(){
    Seminar obj;
    printf("Provide information about seminar \n");
    printf("Subject | teacher | number of group | day of week | time | audience :\n");
    scanf("%63s %63s %d %63s %63s %63s", &obj.subject, obj.teacher, obj.group, &obj.day_of_week, obj.time, obj.audience);
    return obj;
}

void print(Seminar obj) {
    printf("\nInformation about seminar:\n");
    printf("%s by %s\n group: %d, day: %s, time: %s, audience: %s ",obj.subject, obj.teacher,obj.group,obj.day_of_week, obj.time, obj.audience);
}

int main(){
    Seminar obj;
    obj = input();

    print(obj);
    return 0;
}
