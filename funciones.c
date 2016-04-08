#include "funciones.h"

/** 
@brief sumado enteros 

@param operando1 primer operando a sumar 
@param operando2  segundo operando a sumar
@return resultado , el resultado de la suma de los operandos

 */

int suma (int operando1 , int operando2)
{
    int resultado;
    resultado = operando1+operando2;

return resultado;
}

/** 
@brief resta de  enteros 

@param operando1 primer operando a resta
@param operando2  segundo operando a restar
@return resultado, el resultado de la restarle  al  operando1  el operando2

 */


int resta(int operando1 , int operando2)
{
    int resultado;
    resultado = operando1-operando2;

return resultado;
}
/** 
@brief divide dos numeros enteros y devuelve un numero de precision doble  

@param operando1 dividendo
@param operando2  divisor
@return resultado, el resultado de la division con precision doble 

 */


int division(int operando1, int operando2)
{
    double resultado;
    resultado=operando1 / operando2;
   


}
/** 
@brief multiplica dos numeros enteros 

@param operando1 factor
@param operando2  factor
@return resultado , el producto de la la multiplicacion 

 */


int multiplicacion (int operando1 , int operando2)
{
    int resultado;
    resultado = operando1*operando2;

return resultado;
}

/** 
@brief busca el factorial de un numerodevuelve 1 si el factorial es 0 DEVOLVERA 1

@param operando1 el numero el cual se bucara el factorial 
@return factorial1 , devuelve el factorial del numero buscado
 */

int factorial (int operando1)
{ 
    int i=1;
    int factorial1=1;
    if (operando1>0){
	
	
    	for(i=1;i<=operando1;i++)
   		 {
       		factorial1= factorial1*i;
    	}
    
	}else
	 factorial1=1;
	
    
 return factorial1;

}
      
