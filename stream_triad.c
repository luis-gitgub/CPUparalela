autovec/stream_triad.c
#include<stdio.h>
#include<sys/time.h>
#include "timer.h"

#define NTIMES 16
#define STREAM_ARRAY_SIZE 80000000
static double a[STREAM_ARRAY_SIZE],b[STREAM_ARRAY_SIZE],c[STREAM_ARRAY_SIZE];

int main(int argc, char *argv[]){
    struct timeval tstart;
    double scalar = 3.0, time_sum = 0.0;
    for (int i=0; i<STREAM_ARRAY_SIZE; i++) {
        a[i] = 1.0;
        b[i] = 2.0; 
    };
    
    for (int k=0; k<NTIMES; k++)


}





