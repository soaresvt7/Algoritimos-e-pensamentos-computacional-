#include <stdio.h>
#include <math.h>

int main() {

    int opcao;
    double a, b, c, d;

    printf("========================================\n");
    printf("       CALCULADORA - 20 FUNCOES\n");
    printf("========================================\n\n");

    printf("Digite 1 para Soma\n");
    printf("Digite 2 para Subtracao\n");
    printf("Digite 3 para Multiplicacao\n");
    printf("Digite 4 para Divisao\n");
    printf("Digite 5 para Potencia\n");
    printf("Digite 6 para Resto da divisao\n");
    printf("Digite 7 para Porcentagem\n");
    printf("Digite 8 para Media aritmetica\n");
    printf("Digite 9 para Fatorial\n");
    printf("Digite 10 para Area do quadrado\n");
    printf("Digite 11 para Area do retangulo\n");
    printf("Digite 12 para Area do triangulo\n");
    printf("Digite 13 para Area do circulo\n");
    printf("Digite 14 para Perimetro do quadrado\n");
    printf("Digite 15 para Perimetro do retangulo\n");
    printf("Digite 16 para Celsius para Fahrenheit\n");
    printf("Digite 17 para Fahrenheit para Celsius\n");
    printf("Digite 18 para IMC\n");
    printf("Digite 19 para Juros simples\n");
    printf("Digite 20 para Regra de tres\n");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);


   
    if (opcao == 1) {

        printf("\nDigite o primeiro valor: ");
        scanf("%lf", &a);

        printf("Digite o segundo valor: ");
        scanf("%lf", &b);

        c = a + b;

        printf("Resultado: %.2lf\n", c);
    }


   
    else if (opcao == 2) {

        printf("\nDigite o primeiro valor: ");
        scanf("%lf", &a);

        printf("Digite o segundo valor: ");
        scanf("%lf", &b);

        c = a - b;

        printf("Resultado: %.2lf\n", c);
    }


   
    else if (opcao == 3) {

        printf("\nDigite o primeiro valor: ");
        scanf("%lf", &a);

        printf("Digite o segundo valor: ");
        scanf("%lf", &b);

        c = a * b;

        printf("Resultado: %.2lf\n", c);
    }


    
    else if (opcao == 4) {

        printf("\nDigite o primeiro valor: ");
        scanf("%lf", &a);

        printf("Digite o segundo valor: ");
        scanf("%lf", &b);

        if (b != 0) {
            c = a / b;
            printf("Resultado: %.2lf\n", c);
        } else {
            printf("Erro: nao e possivel dividir por zero.\n");
        }
    }


    
    else if (opcao == 5) {

        printf("\nDigite a base: ");
        scanf("%lf", &a);

        printf("Digite o expoente: ");
        scanf("%lf", &b);

        c = pow(a, b);

        printf("Resultado: %.2lf\n", c);
    }


    
    else if (opcao == 6) {

        int x, y, resultado;

        printf("\nDigite o primeiro numero inteiro: ");
        scanf("%d", &x);

        printf("Digite o segundo numero inteiro: ");
        scanf("%d", &y);

        if (y != 0) {
            resultado = x % y;
            printf("Resto da divisao: %d\n", resultado);
        } else {
            printf("Erro: nao e possivel dividir por zero.\n");
        }
    }


    
    else if (opcao == 7) {

        printf("\nDigite o valor: ");
        scanf("%lf", &a);

        printf("Digite a porcentagem: ");
        scanf("%lf", &b);

        c = a * b / 100;

        printf("Resultado: %.2lf\n", c);
    }


    
    else if (opcao == 8) {

        printf("\nDigite o primeiro valor: ");
        scanf("%lf", &a);

        printf("Digite o segundo valor: ");
        scanf("%lf", &b);

        printf("Digite o terceiro valor: ");
        scanf("%lf", &c);

        d = (a + b + c) / 3;

        printf("Media: %.2lf\n", d);
    }


    
    else if (opcao == 9) {

        printf("\nDigite um numero inteiro: ");
        scanf("%lf", &a);

        c = 1;

        while (a > 1) {
            c = c * a;
            a = a - 1;
        }

        printf("Fatorial: %.0lf\n", c);
    }


    
    else if (opcao == 10) {

        printf("\nDigite o valor do lado: ");
        scanf("%lf", &a);

        c = a * a;

        printf("Area do quadrado: %.2lf\n", c);
    }


    
    else if (opcao == 11) {

        printf("\nDigite a base: ");
        scanf("%lf", &a);

        printf("Digite a altura: ");
        scanf("%lf", &b);

        c = a * b;

        printf("Area do retangulo: %.2lf\n", c);
    }


    
    else if (opcao == 12) {

        printf("\nDigite a base: ");
        scanf("%lf", &a);

        printf("Digite a altura: ");
        scanf("%lf", &b);

        c = (a * b) / 2;

        printf("Area do triangulo: %.2lf\n", c);
    }


    
    else if (opcao == 13) {

        printf("\nDigite o valor do raio: ");
        scanf("%lf", &a);

        c = M_PI * a * a;

        printf("Area do circulo: %.2lf\n", c);
    }


    
    else if (opcao == 14) {

        printf("\nDigite o valor do lado: ");
        scanf("%lf", &a);

        c = 4 * a;

        printf("Perimetro do quadrado: %.2lf\n", c);
    }


    
    else if (opcao == 15) {

        printf("\nDigite a base: ");
        scanf("%lf", &a);

        printf("Digite a altura: ");
        scanf("%lf", &b);

        c = 2 * (a + b);

        printf("Perimetro do retangulo: %.2lf\n", c);
    }


    
    else if (opcao == 16) {

        printf("\nDigite a temperatura em Celsius: ");
        scanf("%lf", &a);

        c = (a * 9 / 5) + 32;

        printf("Temperatura em Fahrenheit: %.2lf F\n", c);
    }


    
    else if (opcao == 17) {

        printf("\nDigite a temperatura em Fahrenheit: ");
        scanf("%lf", &a);

        c = (a - 32) * 5 / 9;

        printf("Temperatura em Celsius: %.2lf C\n", c);
    }


   
    else if (opcao == 18) {

        printf("\nDigite seu peso em kg: ");
        scanf("%lf", &a);

        printf("Digite sua altura em metros: ");
        scanf("%lf", &b);

        c = a / (b * b);

        printf("Seu IMC: %.2lf\n", c);
    }


    
    else if (opcao == 19) {

        printf("\nDigite o capital: ");
        scanf("%lf", &a);

        printf("Digite a taxa de juros em porcentagem: ");
        scanf("%lf", &b);

        printf("Digite o tempo: ");
        scanf("%lf", &c);

        d = a * (b / 100) * c;

        printf("Juros: %.2lf\n", d);
    }


    
    else if (opcao == 20) {

        printf("\nDigite o primeiro valor: ");
        scanf("%lf", &a);

        printf("Digite o segundo valor: ");
        scanf("%lf", &b);

        printf("Digite o terceiro valor: ");
        scanf("%lf", &c);

        d = (b * c) / a;

        printf("Resultado: %.2lf\n", d);
    }


    else {
        printf("\nOpcao invalida!\n");
    }

    return 0;
}
