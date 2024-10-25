// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int tab[10],somme = 0;
    float moyen;
    printf("rempilre ce tableau\n");
    for (int i =0; i<10;i++){
        printf("tab[%d] = ",i);
        scanf("%d",&tab[i]);
    }
    for (int i =0; i<10;i++){
        somme = somme +tab[i];
    }
    printf("la somme du tableau : %d\n",somme);

    moyen = (float)somme/10;

    printf("le moyen du tableau : %.2f",moyen);
    return 0;
}
