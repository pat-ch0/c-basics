#include <stdio.h>
#include <math.h>


//Partie 1

void old(){
    int age;
    printf("Age : "); scanf("%d", &age);
    printf("Vous avez %d ans\n", age);
}

void delta(){
    float a, b, c;
    printf("Valeur de a, b et c : "); scanf("%f, %f, %f", &a, &b, &c);

    int del = b*b - 4*a*c;
    if (del < 0){
        printf("Pas de solution réelle\n");
    }
    else if (del == 0){
        float x = -b / 2*a;
        printf("Solution unique : %f\n", x);
    }
    else{
        float x1 = (-b + sqrtf(del)) / 2*a;
        float x2 = (-b - sqrtf(del)) / 2*a;
        printf("2 solutions : %f et %f\n", x1, x2);
    }
}

void charre(){ //jeu de mot carré + char
    int x;
    printf("Un entier : "); scanf("%d", &x);
    for (int i=0; i<x; i++){
        for (int j=0; j<x; j++){
            printf("#");
        }
        printf("\n");
    }
}

void triRect(){
    int x;
    printf("Un entier : "); scanf("%d", &x);
    for (int i=x; i>0; i--){
        for (int j=0; j<i; j++){
            printf("#");
        }
        printf("\n");
    }
}

float somme(int n){ //j'imagine que ça marche
    int s = 0;
    for (int x=0; x<n+1; x++){
        for (int y=x; y<n-x+1; y++){
            s += (x + 3*y - 1);
        }
    }
    return s;
}


//Partie 2

int carre(int x){return x*x;}

float calculDelta(float a, float b, float c){return b*b - 4*a*c;}

void augmentParam(int *p){
    (*p)++; //parenthèses pour déréférencement correct avec l'incrémentation
    /* //test (dans le main)
    int x = 1; int *p = &x;
    augmentParam(p);
    printf("%d\n", x); */
}

int facto(int n){
    if (n==0){
        return 1;
    }
    else{
        return n * facto(n-1);
    }
}


//Partie 3

void defTab(){
    int taille = 10;
    int tab[taille];
    for (int i=0; i<taille; i++){
        printf("Valeur de la case %d : ", i); scanf("%d", &tab[i]);
    }

    for (int i=0; i<taille; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void defTabInverse(){
    int taille = 10;
    float moy = 0;
    int tab[taille];
    for (int i=0; i<taille; i++){
        printf("Valeur de la case %d : ", i); scanf("%d", &tab[i]);
        moy += tab[i];
    }

    for (int i=taille-1; i>-1; i--){
        printf("%d ", tab[i]);
    }
    printf("\n");
    moy /= taille;
    printf("Moyenne : %f\n", moy);
}

//Pas la méthode la plus efficace mais on a que 15 cases
void triTab(int tab[15]){
    for(int i=0; i<14; i++){
        for(int j=i+1; j<15; j++){
            if (tab[i] > tab[j]){
                int save = tab[i];
                tab[i] = tab[j];
                tab[j] = save;
            }
        }
    }
    /* //test (dans le main)
    int tab[] = {0, 9, 8, 7, 4, 5, 6, 2, 1, 3, 10, 12, 11, 14, 13};
    triTab(tab);
    for (int i=0; i<15; i++){
        printf("%d ", tab[i]);
    } */
}

void matrix(){
    int mat1[2][2] = {{1, 1}, {1, 1}};
    int mat2[2][2] = {{2, 2}, {2, 2}};
    int mat3[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            mat3[i][j] = 0;
            for(int k=0; k<2; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}


int main(void) {
    return 0;
}