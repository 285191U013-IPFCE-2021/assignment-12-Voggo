#include "duration.hpp"
#include <stdio.h>


// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    Duration time;

    printf("%d\n", time.getDuration());

    time = Duration(5);

    printf("%d\n", time.getDuration());

    // time = Duration(-1)
  
    time = Duration();

    printf("%d\n", time.getDuration());

    time.setAlarm(5);

    for (int i = 0; i < 5; i++){
        if (time.tick()){
            printf("true ");
        } else
            printf("false");
        printf(" |  %d\n", time.getDuration());
    }
    time = Duration();

    printf("%d\n", time.getDuration());

    time.setAlarm(5);

    for (int i = 0; i < 5; i++){
        if (time.tick()){
            printf("true ");
        } else
            printf("false");
        printf(" |  %d\n", time.getDuration());
    }

    return 0;
}