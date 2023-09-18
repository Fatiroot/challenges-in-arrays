#include <stdio.h>
int main() {
  int i,tab[10];
  printf("entrer les elements de tableau : \n");
  for(i=0;i<10;i++){
     scanf("%d",&tab[i]); }
     for(i=0;i<10;i++){
     for(int j=i+1;j<10;j++){
         if(tab[i]<tab[j]){
         int temp=tab[i];
         tab[i]=tab[j];
         tab[j]=temp;
         }
     }}
  for(i=0;i<10;i++){
     printf("%d \t",tab[i]);
}
  return 0;
  }
