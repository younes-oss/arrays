// Online C compiler to run C program online
#include <stdio.h>

int main() {

   int tab[8] , n,i;
   int existe = -1;
       printf("remplire ce tableau suivant : \n");
       for(int i =0 ; i < 8 ; i++){
            printf("tab[%d] = " ,i);
            scanf("%d",&tab[i]);
       }
       printf("si tu veux chercher un numero \n ");
       printf("taper ce numero : \n ");
       scanf("%d", &n);
       for(int i = 0; i < 8 ;i++ ){
           if(tab[i]== n){
               existe = i;
           break;
           }

       }
       if(existe !=-1)
       printf("le nombre %d est existe dans notre tableau dans l'indice %d ",n,existe);
       else
       printf("le nombre %d n'est existe pas",n);
    return 0;
}
