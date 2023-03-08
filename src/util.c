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

void functionsExercise3Q1(int T[], int taille_T){

    int multipleCinq[200], multipleTrois[200], j=0, i=0, k=0;
    //printf("%d%s%d%s", (21%3), " = 21%3 ", (15%5), " = 15%5 \n");
    for(i=0; i<taille_T;i++){

        //printf("%d%s", T[i], " = T[i] \n");
        if((T[i]%5)==0){
            //printf("###\n");
            multipleCinq[j]=T[i];
            j+=1;
        }
        if((T[i]%3)==0){
            //printf("CCC\n");
            multipleTrois[k]=T[i];
            k+=1;
        }
    }

    for(i=0;i<j;i++){
        printf("%s%d%s", "multipleCinq[i] = ",multipleCinq[i], "\n");
    }
    printf("=================\n");

    for(i=0;i<k;i++){
        printf("%s%d%s", "multipleTrois[i] = ",multipleTrois[i], "\n");
    }
    
}

void functionsExercise3Q2(int T[], int S[], int taille_T, int taille_S){
    int i=0, j=0, k=0, L[100], trouvé=0;
    
    for(i=0;i<taille_T;i++){
        for(j=0;j<taille_S;j++){
            if(T[i]==S[j]){
                trouvé=1;
            }
        }
        if(trouvé!=1){
            L[k]=T[i];
            k+=1;
        }
        else{
            trouvé=0;
        }
    }
    //printf("%d%s", k, " = k\n");
    for(i=0;i<k;i++){
        printf("%s%d%s", "L[i] = ",L[i], "\n");
    }
}

void functionsExercise4(int t[], int taille_t){
    int i, j, h=0;
    for(i=1;i<taille_t;i++){
        if(t[i]>t[h]){
            h=i;
        }
    }
    for(j=(taille_t-1);j>=0;j--){
        t[j]=t[h];
    }

    for(i=0;i<taille_t;i++){
        printf("%s%d%s", "t[i] = ",t[i], "\n");
    }
}


