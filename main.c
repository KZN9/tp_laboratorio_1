/**
  @archivo proyectoTP01
  @brief CALCULADORA DE OPERACIONES BASICAS Y FACTORIAL 
  @Autor Nicolás Loianno
  @fecha 08/04/16

*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{ 
    
    int operandoA =NULL, operandoB=NULL , resultado ;

   char seguir='s';
    int opcion=0;

    
/**inicializamos en NULL operandoA y operandoB para que no se muestre basura mientras no estan cargada la variables*/
   
        
       

   do 
    {
        
        printf("1 ingrese el operando A(=%d)\n", operandoA);
        printf("2 ingrese el operando B(=%d)\n", operandoB);
        printf("3- Calcular la suma (A+b)\n");
        printf("4- Calcular la resta (A-b)\n");
        printf("5 Calcular la divisi%cn (A/B)\n", 162);
        printf("6- Calcular la multiplicaci%cn (A*B)\n", 162);
        printf("7- Calcular el factorial de un numero \n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
               
        printf("Ingrese operando A\n");
        scanf("%d", &operandoA);      
            system("cls");//limpiamos pantalla cada que entremos en un case 
        
                break;
            case 2:
                
        printf("Ingrese operando B\n");
        scanf("%d", &operandoB);
        system("cls");
                
                break;
            case 3:
              
              resultado= suma(operandoA , operandoB);
              printf ("el resultado dela suma  A(%d)+B(%d) es %d ",operandoA , operandoB ,resultado);
                  system ("pause");
				   system("cls");
				
				break;
            case 4:
          
           resultado= resta(operandoA,operandoB);
          
          printf ("el resultado de la suma A(%d)-B(%d) es %d ",operandoA , operandoB ,resultado);
                  system ("pause");
				   system("cls");
				
          
                break;
            case 5:
            	    if(operandoB==0 )
                       {
       					  printf("error no se puede dividir por 0\n");


                          return seguir = 'n';
            	   
                        }
            	  resultado=division(operandoA,operandoB);
          
          printf ("el resultado de la divsion A(%d)/B(%d) es %d ",operandoA , operandoB ,resultado);
                  system ("pause");
				   system("cls");
				
             
             
                break;
           
            case 6:
           
           
              resultado=multiplicacion(operandoA , operandoB);
              printf ("el resultado de la multiplicaci%cn  A(%d)+B(%d) es %d " ,162 ,operandoA , operandoB ,resultado);
                  system ("pause");
				   system("cls");
           
                break;
        
            case 7:
            	printf("el factorial de A(%d) es" ,factorial(operandoA));
                printf ("el factorial de B(%d) es" , factorial(operandoB));
                  
				  system ("pause");
				   system("cls");
           
                break;
        
		case 8:
			  printf ("el resultado dela suma  A(%d)+B(%d) es %d \n",operandoA , operandoB ,suma (operandoA ,operandoB));
			  printf ("el resultado de la resta A(%d)-B(%d) es %d \n",operandoA , operandoB ,resta (operandoA ,operandoB));
			 if (operandoB==0){
			 
			 printf("error\n");
         	}else{
			   	  resultado=division(operandoA,operandoB);
          
          printf ("el resultado de la divsion A(%d)/B(%d) es %d ",operandoA , operandoB ,resultado);
                
			 }
			  
			 printf ("el resultado de la multiplicaci%cn  A(%d)+B(%d) es %d \n" ,162 ,operandoA , operandoB ,multiplicacion(operandoA , operandoB));
			  printf("el factorial de A(%d) es\n" , factorial(operandoA));
              printf ("el factorial de B(%d) es\n" , factorial(operandoB));
		         
				 system ("pause");
				   system("cls");
           
		
			break;
			
	    case 9: seguir = 'n';
	    	break;
		
		}


}
while (seguir!= 'n');
    return 0;
}

