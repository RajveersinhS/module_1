#include <stdio.h> // Time diffrence between star and end 

struct time
{
    int hours;
    int minutes;
    int seconds;
};

typedef struct time time;

void time_difference(time *first, time *second, time *diff)
{
    int first_second_converrsion = first->hours * 3600 + first->minutes * 60 + first->seconds; // first conversion
    int second_coversion = second->hours * 3600 + second->minutes * 60 + second->seconds;      // second conversion
    int difference_seconds = first_second_converrsion - second_coversion;

    diff->hours = difference_seconds / 3600;
    difference_seconds = difference_seconds % 3600;

    diff->minutes = difference_seconds / 60;
    difference_seconds = difference_seconds % 60;

    diff->seconds = difference_seconds;
}

int main()
{
    time T1, T2, Diffrence;
    printf("Enter starting time(hours minutes seconds) : ");
    scanf("%d %d %d", &T1.hours, &T1.minutes, &T1.seconds);

    printf("Enter ending time (hours minutes seconds) : ");
    scanf("%d %d %d", &T2.hours, &T2.minutes, &T2.seconds);

    time_difference(&T1,&T2,&Diffrence);

    printf("Time Difference : %0.2d:%0.2d:%0.2d",Diffrence.hours,Diffrence.minutes,Diffrence.seconds);

    return 0;
}