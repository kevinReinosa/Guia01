  #include<stdio.h>

 int main(){
	       int opcion;
	       int t;
	       int i;
   printf("elige el tamaño de vector\n");
    scanf("%d",&t);
       int vector[t+3];
       
       for ( i = 0; i < t; i++) {
           printf("llena el vector\n");  
              scanf("%d",& vector[i]);
      
       }
       
    do{     printf("\nEl vector es");
                  for ( i = 0; i < t+1; i++) {
                  printf("%d",vector[i]);  
                  }
	printf("selecciona una opcion\n"
             "1.-Agregar dato al arreglo\n"
             "2.-Buscar un valor en el vecot\n"
            "3.-Editar una pocicion del vector\n"
             "4.-Eliminar pocicion del vector\n"
             "5.-Salir");  
             scanf("%d",&opcion);  
       
        if (opcion==1) {
        printf("Ingresa el nuevo dato");
        int dato;
        scanf("%d",&dato);
               
              printf("Ingresa la posicion");
               int p;
               scanf("%d",&p);
            
                  for (i =(t-1); (p-1)<(i+1); i--) {
                      vector[i+1]=vector[i];     
                  } vector[p-1]=dato;
              
              printf("\nEl vector es");
                  for (i = 0; i < t+1; i++) {
                      printf("%d",vector[i]);  
                  }    
        }else if(opcion==2){
        
      printf("Ingresa el dato que quiere buscar");
               int da;
               scanf("%d",&da);
                  
            int po=0;
                  for ( i = 0; i < t+1; i++) {
                      if (da==vector[i]) {
                      po=po+(i+1);    
                      }
                  }  printf("El dato esta en la posicion %d ",po);
        }else if(opcion==3){
        for ( i = 0; i < t+1; i++) {
                     printf("el valor del vector en la posicion "); 
                     printf("desea modificar la posicion\n"
                              "1.- Si\n"
                              "2.-No");
                      int mod;
                      scanf("%d",&mod);
                      if (mod==1) {
                         printf("Ingresa el nuevo dato para modificar la pocicion %d",(i+1));  
                         scanf("%d",&vector[i]);   
                    
                      }
                  }
                  printf("\nEl vector modificado es");
                  for ( i = 0; i < t+1; i++) {
                      printf("%d",vector[i]);  
                  }
                  
        }else if(opcion==4){
        for ( i = 0; i < t+1; i++) {
                     printf("el valor del vector en la posicion  "); 
                      printf("desea borrar el valor\n"
                               "1.- Si\n"
                              "2.-No");
                              int mod;
                     scanf("%d",&mod);
                      if (mod==1) {     
                       vector[i]=0; 
                      }
                  }
          
                 printf("\nEl vector con datos borrados es");
                  for ( i = 0; i < t+1; i++) {
                     printf("%d",vector[i]);  
                  }
        }  
       }while(opcion!=5);
	
	
	
	
	return 0;
	}

