/*
Autor: Rômulo Souza Fernandes
E-mail: 00119110559@pq.uenf.br
Data de criação: 20/10/22
Ciência da Computação - UENF
*/

#include<stdio.h>

int main(){

  int A[4][4], B[4][4] ,C[4][4];

  // Obter martriz A
  for(int i=0;i<4;++i){
   for(int j=0;j<4;++j){
     printf("A[%d][%d]: ",i,j);
     scanf("%d", &A[i][j]);
   }
  }

  printf("\n");

  // Obter martriz B
  for(int i=0;i<4;++i){
   for(int j=0;j<4;++j){
     printf("B[%d][%d]: ",i,j);
     scanf("%d", &B[i][j]);
   }
  }
 
  printf("\n");

  // Calcular e mostrar a soma
  for(int i=0;i<4;++i){
   for(int j=0;j<4;++j){
     C[i][j] = A[i][j] + B[i][j];
     printf("%d\t", C[i][j]);
      if (j==3) printf("\n");
   }
  }
 
 printf("\n");
 printf("\n");
 
 // Calcular e mostrar o produto
  for(int i=0;i<4;++i){
   for(int j=0;j<4;++j){
     C[i][j] = A[i][j] * B[i][j];
     printf("%d\t", C[i][j]);
      if (j==3) printf("\n");
   }
  }
  printf("\n");

 }
