#include<stdio.h>
#include "../src/util.h"

#define CHECK_Q1 0
#define CHECK_Q2 0
#define CHECK_Q3 0
#define CHECK_Q4 0
#define CHECK_Q5 0
#define CHECK_Q6 1

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

   if (CHECK_Q3) {

      //printf("ici\n");
      int T [] = {2, 6, 3, 8, -2, 9, 3,};

      functionsExercise2Q1(T, 7);
      
   }

   if (CHECK_Q4) {

      //printf("ici\n");
      int T [] = {2, 4, 5, 3, 2, 5, 7, 3, 4, 5, 6, 9, 0, 3};

      functionsExercise2Q2(T, 14);
      for(i=0; i<8; i++)
                        printf("T[ %d ] = %d \n", i, T[i]);
   }


   if (CHECK_Q5) {

      //printf("ici\n");
      int T [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 21};

      functionsExercise3Q1(T, 16);
      
   }

   if (CHECK_Q6) {

      //printf("ici\n");
      int T [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 21};

      int S [] = {2, 3, 5, 6, 7, 11, 12, 13, 15,};
      functionsExercise3Q2(T, S,  16, 9);
      
   }
}