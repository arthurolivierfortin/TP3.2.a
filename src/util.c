#include "../src/util.h"



//=====================================================//
//=                       Exercice 1                  =//
//=====================================================//

//=====================================================//
//=                       Question 1                  =//
//=====================================================//


void functionsExercise1Q1(int T[], int S[], int taille_T) {
    int i, j;
    
    for(i=0;i<taille_T;i++){
        if(T[i]!=0){
            S[j]=T[i];
            j+=1;
        }
    }

    for(j=j;j<taille_T;j++){
        S[j]=0;
    }

    return S;
}


//=====================================================//
//=                       Question 2                  =//
//=====================================================//

void functionsExercise1Q2(int T[], int taille_T) {
    int i=0, nmbZero=0, stop=0, nmbPasZero=0, suite=0, j=0;
    //printf("%d%s%d%s%d%s%d%s%d%s%d%s", i, " i ", nmbZero, " nmbPasZero ", stop, " stop ", nmbPasZero, " nmbPasZero ", suite, " suite ", j, " j \n ");
    
    for(i=0;i<taille_T;i++){
        if(T[i]==0){
            nmbZero+=1;
        }
    }
    
    nmbPasZero=(taille_T-nmbZero);

    //printf("%d%s", nmbPasZero, "nombre pas zero \n");

    while(stop!=1){
        for(i=0;i<taille_T;i++){
            if(suite==nmbPasZero+1){
                stop=1;
                break;
            }
            if(T[i]==0){
                for(j=(i+1);j<taille_T;j++){
                    if(T[j]!=0){
                        T[i]=T[j];
                        T[j]=0;
                        suite=0;
                        break;
                    }
                break;
                }
            }
            if(T[i]!=0){
                suite+=1;
            }
        }
    }

    return T;
}

//=====================================================//
//=                       Exercice 2                  =//
//=====================================================//

//=====================================================//
//=                       Question 1                  =//
//=====================================================//


void functionsExercise2Q1(int T[], int taille_T) {
    int i=0, min=0, max=0, moy=0;
    //printf("##!\n");
    
    //min
    for(i=0; i<taille_T; i++){
        if(i==0){
            min=T[i];
            max=T[i];
            moy+=T[i];
        }
        else{
            if(min>T[i]){
                min=T[i];
            }
            if(max<T[i]){
                max=T[i];
            }
            moy+=T[i];

        }
    }

    moy=(moy/taille_T);

    printf("%d%s%d%s%d%s", max, " = max, ", min, " = min, ", moy, " = moy\n");

    
}

//=====================================================//
//=                       Question 2                  =//
//=====================================================//

void functionsExercise2Q2(int T[], int taille_T) {
    int i=0, j=0, k, S[100], taille_S;

    for(i=0;i<taille_T;i++){
        for(j=(i+1);j<taille_T;j++){
            if(T[i]==T[j]){
                T[j]=999;
            }
        }
    }

    for(i=0;i<taille_T;i++){
        if(T[i]!=999){
            S[k]=T[i];
            k+=1;
            taille_S+=1;
        }
    }

    for(i=0;i<taille_T;i++){
        T[i]=0;
    }

    for(i=0;i<taille_S;i++){
        T[i]=S[i];
    }

    return T;

}


