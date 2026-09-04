#include <stdio.h>

int main() {
	int opção;
	float temperatura, resultado;
	
	printf("=== CONVERSOR DE TEMPERATURA===\n");
	printf("opção 1 - Celsius para Fahrenheit\n");
	printf("opção 2 - Celsius para Kelvin\n");
	printf("opção 3 - Fahrenheit para Celsius\n");
	printf("opção 4 - Fahrenheit para Kelvin\n");
	printf("opção 5 - Kelvin para Fahrenheit\n");
	printf("opção 6 - Kelvin para Celsius\n");
	printf("Escolha uma opção: ");
	scanf("%d", &opção);
	
	printf("Digite a temperatura: ");
	scanf("%f", &temperatura);
	
	switch (opção){
	    case 1:
	    resultado = ( temperatura * 9/5) + 32; 
	    printf("%.2f Celsius = %.2f Fahrenheit\n", temperatura, resultado);
	    break;
	    
	    case 2: 
	    resultado = temperatura + 273.15;
	    printf("%.2f Celsius = %.2f Kelvin\n", temperatura, resultado);
	    break;
	    
	    case 3: 
	    resultado = (temperatura - 32 ) * 5/9;
	    printf("%.2f Fahrenheit = %.2f Celsius\n", temperatura , resultado);
	    break;
	    
	    case 4: resultado = (temperatura - 32 ) * 5/9 + 273.15;
	    printf("%.2f Fahrenheit = %.2f Kelvin\n", temperatura, resultado);
	    break;
	    
	    case 5:
	    resultado = (temperatura - 273.15) * 9/5 + 32 ;
	    printf("%.2f Kelvin = %.2f Celsius\n", temperatura, resultado);
	    break;
	    
	    case 6: 
	    resultado = temperatura - 273.15;
	    printf("%.2f Kelvin = %.2f Celsius\n", temperatura, resultado);
	    break;
	    
	    default:
	    printf("Opção invalida!\n");
	}
	
	return 0;

}


