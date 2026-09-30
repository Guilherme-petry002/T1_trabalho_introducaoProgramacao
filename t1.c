//10.000 canditadas

#include <stdio.h>

int main(){
    
int i, k;
int cand[100];
int nota[100];
int tequila;
int mesa2;

long int tamCand = sizeof(cand) / sizeof(cand[0]);
long int tamNota = sizeof(nota) / sizeof(nota[0]);

tequila = 0;
i = 0;
mesa2 = 0;

    while(i < tamCand){
        printf("Digite uma nota para candidata n: %d > \n", i);
        scanf("%d", &nota[i]);

        if(nota[i] % 2 == 0){

            if(mesa2 == 0){
                mesa2 = 1;
            } else { 
            mesa2 == 1;
            i++;
            }

            i = (2 * nota[i]) + 13;
        } else if(nota[i] % 2 != 0){

            if(mesa2 == 0){
                mesa2 = 1;
            } else {
            mesa2 == 1;
            i++;
            }

            i = (3 * nota[i]) + 7;
        }
        i++;
    }

i = 0;

    printf("[");
    while(i < tamCand){
        printf(" %d ", nota[i]);
        i++;
    }
    printf("]\n");

printf("Tequilas: %d\n", tequila);


printf("%ld\n", sizeof(cand[0]));

return 0;
}