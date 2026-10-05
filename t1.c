//10.000 canditadas

#include <stdio.h>

int main(){

int cand[10000];
int i;

printf("Qual a nota da primeira candidata? ");
scanf("%d", &cand[i]);

cand[0] = i;

i = 0;
//Criando a lista
while(i < 10000){
    cand[i + 1] = (((cand[i] * 87) % 601) + 400);
i++;
}

int pos;
int count;
int tequila = 0;

while(pos >= 0 && pos < 10000){

    printf("Posicao: %d | Nota: %d\n", pos, cand[pos]);

    count++;
    cand[pos] += 1;

    printf("Nota nova: %d\n", cand[pos]);

    if(cand[pos] % 2 == 0){
        pos = (2 * pos) + 13;
        tequila++;
        printf("Nota par indo para: %d\n", pos);
    } else if(cand[pos] % 2 != 0){
        pos = (3 * pos) + 7;
        tequila++;
        printf("Nota impar indo para: %d\n", pos);
    }

    if(pos > 10000){
        printf("Fim da mesa\n");
    }

}

printf("Total de conversas: %d\nTequilas tomadas: %d\n", count, tequila);

return 0;

}