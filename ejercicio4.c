#include<stdio.h>
int main(){

int filas,columnas;




     printf("De cuatas filas deseas su Matriz");  
     scanf("%d",&filas);  
         
         printf("De cuatas columnas deseas su Matriz");
            scanf("%d",&columnas);  
        
   int matriz[filas][columnas];
    printf("\n");
     printf("Llenamos la matriz ");
      for (int i = 0; i <filas; i++) {
          for (int j = 0; j <columnas; j++) {
     printf("Ingresa el dato de tu matriz A [%d ,%d] ",i,j);
     scanf("%d",&   matriz[i][j]);

          }
      }
    //calculamos las sumas
 int f[filas];
    int c[columnas];
    //SUMAMOS LAS FILAS
        for (int i = 0; i<filas; i++) {
            for (int j = 0; j < columnas; j++) {
          f[i]=f[i]+matriz[i][j];      
            }
        }
        //SUMAMOS LAS COLUMNAS
     for (int i = 0; i<columnas; i++) {
            for (int j = 0; j < filas; j++) {
          c[i]=c[i]+matriz[j][i];      
            }
        }
    // SUMAMOS  LAS DIAGONALES
    int js=0;
  
    int DP=0,DS=0;
        for (int i =(columnas-1); 0 <= i; i--) {
			
         DS=DS+matriz[js][i];   
        js++;
        }
    //SUMAMOS DIAGONAL SECUNDARIA
        for (int i =0; i <filas; i++) {
            DP=DP+matriz[i][i];
        }
        //IMPRIMIMOS LOS RESULTADOS
      printf("\nLa suma de filas es:");
        for (int i = 0; i < filas; i++) {
         printf("fila %d ",(i+1));
          printf(" = %d",f[i]);
         
        }
  printf("\nLa suma de columnas es:");  
        for (int i = 0; i < columnas; i++) {
         printf("columna %d",(i+1));
          printf(" = %d",c[i]);
        }
      
       printf("\n la suma de la diagonal secundaria es  %d",DS); 
            
             printf("\n La suma de la diagonal principal es %d",DP
            );
            
		}
