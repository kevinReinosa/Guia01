   #include<stdio.h>
   
   
   int main(){
	   int filasA,columnasA,filasB,columnasB;
	   int i,j;
	   int p;
  printf("Bienvenido, deberas elegir las dimensiones de tus 2 matrices \n"
      "Nota importante: Tus 2 matrices tiene restrigciones para sus dimensiones\n"
          "  poder realizar la multiplicacion");
     printf("De cuatas filas deseas tu Matriz A\n");   
     scanf("%d",&filasA); 
 
 printf("De cuatas columnas deseas tu Matriz A\n");
      scanf("%d",&columnasA); 

int A[filasA][columnasA];
	     do{   printf("De cuatas filas deseas tu Matriz B\n");    
        scanf("%d",&filasB); 
         printf("De cuatas columnas deseas tu Matriz B\n");
         scanf("%d",&columnasB); 
       }
       while(columnasA!=filasB);
       
       int B[filasB][columnasB];
       int AB[filasA][columnasB];
    printf("\n");
      printf("Llenamos la matriz A\n");
      for (i = 0; i <filasA; i++) {
          for (j = 0; j <columnasA; j++) {
      printf("Ingresa el dato de tu matriz A [%d , %d]",i,j);
     scanf( "%d",&A[i][j]);
          }
      }
      
      
         printf("\n");
  printf("Llenamos la matriz B");
      for (i = 0; i <filasB; i++) {
          for (j = 0; j <columnasB; j++) {
     printf("Ingresa el dato de tu matriz B [%d , %d]",i,j);
      scanf("%d",&B[i][j]);
          }
      }
      
            for (p = 0; p <filasA; p++) {
        for (i = 0; i <columnasB; i++) {
          for (j = 0; j <columnasA; j++) {
              AB[p][i]=AB[p][i]+A[p][j]*B[j][i];  
          }
      }
  }
       
       
for ( i = 0; i < filasA; i++) {
      int h=0;
       for ( j = 0; j < columnasB; j++) {
             h=h+AB[i][j];
                      
           }printf("%d",h);
       }
       
	   return 0;
	   }
    
