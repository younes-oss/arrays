// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int tab[5];
    printf("saisire des nombres pour remplir le tableau :\n");
    for(int i = 0 ; i<=5 ;i++){
        printf("tab[%d] = ",i);
        scanf("%d",&tab[i]);
    }
    printf("\"\"##l'inverse du tableau\"\"##\n");
    printf(" ###############\n");
    for(int i = 5; i>=0;i-- ){

        printf("tab[%d] = %d\n",i,tab[i]);
    }


    return 0;
}
