/*
Inplemente um sistema utilizando funcao que 
lei um valor e aprecenta para op usuario o valor
do cubo do valor digitado.
Compartilhar trello:: utnairo@gmail.com
*/

#include <stdio.h>

//funcao chamada cubo start
	void cubo(float a){ //receber valores parametrizados
	float resultado = (a*a*a);
	printf("O cubo de %f eh %f", a, resultado); //saida
}
//funcao chamada soma - end;
int main()
{
	float valor01;
	printf("Digite o valor do cubo  \n");
	scanf("%f",&valor01);	
	 cubo ( valor01 ); /// chamamento da funcao

	
	return 0;
}
