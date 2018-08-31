#include<stdio.h>
int main(){
;
printf("De cuatas filas deseas tu Matriz A"); 
 int filasA; 
scanf("%d",&filasA);   
     
    printf("De cuatas columnas deseas tu Matriz A");
     int columnasA; 
scanf("%d",&columnasA);

       int A[filasA][columnasA];    
      int B[columnasA][filasA];

//LLENAMOS LA MATRIZ A
for (int i = 0; i < filasA; i++) {
           for (int j = 0; j < columnasA; j++) {
               printf("ingrese un valor\n");
               scanf("%d",& A[i][j]);
              
           }
       }
//MOSTRAMOS LA MATRIZ ACTUAL 

for (int i = 0; i < filasA; i++) {
     int h=0;
       for (int j = 0; j < columnasA; j++) {
             h=h+A[i][j];
                      
           }printf("%d",h);
       }
//HACEMOS EL CAMBIO

       for (int i = 0; i < filasA; i++) {
           for (int j = 0; j < columnasA; j++) {
           B[j][i]=A[i][j];    
           }
       }
//IMPRIMIMOS B
for (int i = 0; i < columnasA; i++) {
  int s=0;
         for (int j = 0; j < filasA; j++) {
             s=s+B[i][j];
             
    }printf("%d",s);
   printf("\n");
       }
	
	
return 0;
	
	}
