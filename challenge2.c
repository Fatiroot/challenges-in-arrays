#include <stdio.h>
#include <stdlib.h>
int main() {
  int i,tab[10],max=0, min=tab[0];;
  printf("entrer les elements de tableau : \n");
  for(i=0;i<10;i++){
     scanf("%d",&tab[i]);
     if(max<tab[i]){
         max=tab[i];
     }
     if(min>tab[i]){
         min=tab[i];
     }
  }
  for(i=0;i<10;i++){
     printf("%d \t",tab[i]);
}

     printf(" le maximum est : %d ",max);
     printf(" le minimum est :%d ",min);
  return 0;
  }
