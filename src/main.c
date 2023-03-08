#include<stdio.h>
#include "../src/util.h"

#define CHECK_Q1 1
#define CHECK_Q2 0

void main() {

int N, i;

if (CHECK_Q1) {
                   int T [] = {1, 0, 2, 3, 0, 1, 4, 0};
                   int S[100];
                   functionsExercise1Q1(T, S, 8);
                   for(i=0; i<8; i++)
                      printf("S[ %d ] = %d \n", i, S[i]);    
             }

if (CHECK_Q2) {
                    int T2 [] = {1, 0, 2, 3, 0, 1, 0, 0, 4, 0};
                    functionsExercise1Q2(T2, 10); 
                    for(i=0; i<10; i++)
                                        printf("T2[ %d ] = %d \n", i, T2[i]);
                    printf("=================================\n"); 
                    int T3 [] = {1, 0, 0, 3, 0, 2, 0, 4, 0};
                    functionsExercise1Q2(T3, 9); 
                    for(i=0; i<9; i++)
                                        printf("T3[ %d ] = %d \n", i, T3[i]);  
             }

}