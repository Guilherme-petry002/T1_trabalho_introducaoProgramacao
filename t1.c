//10.000 canditadas

#include <stdio.h>

int main(){

int candidata[1000];
int i;
int k;

//While percorrendo a candidata e adicionando nota para cada uma
i = 1;
    while(i < 1001){
        k = 1;
        printf("digite a nota da candidata na pos[%d]\n", i);
        scanf("%d", &candidata[i]);

        while(k >= i){
            if(candidata[i] % 2 == 0){
                k = (((candidata[i] * 2) + 13) - 1);
            } else if (candidata[i] % 2 != 0){
                k = (((candidata[i] * 3) + 7) - 1);    
            }
        k++;
        }
        i = k;
    i++;
    }

return 0;

}