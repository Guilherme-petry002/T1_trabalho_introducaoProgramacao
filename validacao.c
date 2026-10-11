#include <stdio.h>

int main(){
int nota[10000];
int n;

    printf("Digite a nota da primeira candidata: ");
    scanf("%d", &n);

nota[0] = n;

int i  = 0;
    while(i < 10000 - 1){
        nota[i + 1] = ((nota[i] * 87) % 601) + 400;
        i++;
    }

int pos = 0;
int tequilas = 0;

while(1){
    tequilas++;

    n = nota[pos];
    int prox;

    if(n % 2 == 0){
        prox = (2 * n + 13) % 10000;
    } else {
        prox = (3 * n + 7) % 10000;
    }

    nota[pos]++;

    if(prox == pos){
        break;
    } 
    pos = prox;

}

printf("Acabou! Harry casara com a candidata na posicao %d da mesa, depois de tomar %d tequilas\n", pos, tequilas);

return 0;

}