#include<stdio.h>
int main()
{
 int i,j,tam=4;
 int matriza[4][4];
 int matrizb[4][4];
 printf("Olá, meu nome é Joao Pedro Ferreira Da Silva e minha matrícula na UnilaSalle é 0050014761\n");
 
 for(i=0; i<=3; i++) 
 {
 for (j=0; j<=3; j++) 
 {
 printf("Matriz A - Entre com a linha%d, coluna%d: ",i+1,j+1);
 scanf("%d",&matriza[i][j]);
 }
  printf("\n");
 }
  printf("\n...\n\n");
  
  for(i=0; i<=3; i++)
  {
   
    for(j=0;j<=3;j++) 
    {
    printf("Matriz B - Entre com a linha%d, coluna%d: ",i+1,j+1);
    scanf("%d",&matrizb[i][j]);
    
    
    
  } 
   printf("\n");
  } 
  
  printf("...\n");
  
  printf("\nSeguem os RESULTADOS:\n");
  printf("\nSoma das duas Matrizes\n");
  
 for (i=0;i<=3;i++) 
 {
for(j=0;j<=3;j++)
{
printf("%d\t", matriza[i][j] + matrizb[i][j]);  
  
}
   printf("\n");
   
 }
  printf("\n");
  printf("Diagonal Secundária da Matriz A\n");
  
  for(i=0;i<=3;i++)
  
  {
    
    for (j=0;j<=3;j++)
    {
      
      if(j==tam-1-i)
        printf("%d\t",matriza[i][j]);
      
        else
          printf("0\t");
        }
    printf("\n");
        }
  
  printf("\nMultiplicação das duas matrizes\n");
  
  for(i=0; i<=3; i++) 
 {
 for (j=0; j<=3; j++) 
 {
 printf("%d\t",matriza[i][j]*matrizb[i][j]);
 }
  printf("\n");
 }
  printf("\n...\n\n");
  
  printf("\nMinha maior dificuldade foi entender a lógica para encontrar a diagonal secundária\n");
  
      
      
  
  
  
 
  
  
  
  
   return 0;

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
} // FIM PROGRAMA
