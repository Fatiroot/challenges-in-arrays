#include <stdio.h>

int main() {
    int j,k,i=0,s=0,nb=0,tab[100],min,max;
    float moy;
    printf("saisir une note entre 0 et 20 :\n");
    while(i<100){
    scanf("%d",&tab[i]);
        if(tab[i]<0 || tab[i]>20){
            printf("fin de saisie\n");
            break;
        }
        s=s+tab[i];
        i++;
        moy=s/i;
    }
    if (i==0){
        printf("error\n ");
    }else{
     printf("le nombre de note est : %d\n",i) ;
      printf("la moyenne de note est : %f\n",moy) ;
      for(j=0;j<i;j++){
          if(tab[j]<(int)moy){
            printf(" la note %d est inferieur a la moyenne \n",tab[j]);
                 }else if(tab[j]==(int)moy){
            printf( "la note %d egal est a la moyenne \n",tab[j]);
       }else{
            printf("la note %d superiure est a la moyenne \n",tab[j]);
            nb++;
        }
      }
          printf("le nombre de note superieur a la moyenne est : %d\n",nb) ;

    min = max = tab[0];

    for (k = 0; k < i; k++) {
        if (tab[k] < min) {
            min = tab[k];
        }

        if (tab[k] > max) {
            max = tab[k];
        }
    }

    printf("La note la plus basse est : %d\n", min);
    printf("La note la plus élevée est : %d\n", max);
    }
    return 0;
}
