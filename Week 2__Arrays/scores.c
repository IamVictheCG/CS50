#include <stdio.h>
#include "cs50.h"

const int N = 5;
float average (int length, int array[]);

int main(void) {
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;

    // float avg = (score1 + score2 + score3)/(float) 3;
    // _______________________________________________________

    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    

    // float avg = (scores[0] + scores[1] + scores[2])/(float) 3;
    // float avg = average(N, scores);

    printf("Your average score is %f\n", average(N, scores));
}

float average(int length, int array[]) {
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
        return sum / (float) length;
    
}