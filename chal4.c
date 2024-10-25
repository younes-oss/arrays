
#include <stdio.h>

int main() {

   int tab[7];

   printf("remplire ce tableau si tu veux :\n");

   for(int i = 0; i < 7 ; i++)
   {
       printf("tab[%d] = ",i);
       scanf("%d",&tab[i]);
   }
   int max = tab[0],
   min =tab[0];
   for(int i = 0; i<7 ; i++)
   {
       if(tab[i] > max )
        max = tab[i];
   }
   printf("la valeur max est %d\n",max);
   for(int i = 0; i<7 ; i++)
   {
       if(tab[i] < min )
       min = tab[i];
   }
   printf("la valeur min est %d",min);
    return 0;
}
