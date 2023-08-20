#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    short programa;
    char again;

    printf("Hello !\n");
    printf("Which exercise do you want to perform ?\n");

    scanf("%hd", &programa);

    do
    {

        if (programa == 1)
        {
            /*soma dos dois números;
            • subtração do primeiro pelo segundo;
            • subtração do segundo pelo primeiro;
            • multiplicação dos dois números;
            • divisão do primeiro pelo segundo(resultado em real);
            • divisão do segundo pelo primeiro(resultado em real);
            • quociente inteiro da divisão do primeiro pelo segundo;
            • quociente inteiro da divisão do segundo pelo primeiro;
            • resto da divisão do primeiro pelo segundo;
            • resto da divisão do segundo pelo primeiro.
            */
            printf("Executing program 1...\n");
            short n1, n2;

            printf("Enter the first number: ");
            scanf("%hd", &n1);

            printf("Enter the second number: ");
            scanf("%hd", &n2);

            // SUM SUB MULT
            printf("The sum of the two number is %hd \n", n1 + n2);
            printf("Subtracting the second by the first number is %hd \n", n2 - n1);
            printf("The multiplication of the two number is %hd \n", n1 * n2);

            // real
            float res = (float)n1 / n2;
            float res2 = (float)n2 / n1;
            printf("The division of the first by the second in real is %f \n", res);
            printf("The division of the second by the first number in real is %f \n", res2);

            // Quotient
            printf("The integer quotient of dividing the first by the second is %hd \n", n1 / n2);
            printf("The integer quotient of dividing the second by the first is %hd \n", n2 / n1);

            // Rest
            printf("The remainder of dividing the first number by the second number %hd\n", n1 % n2);
            printf("The remainder of dividing the second number by the first number %hd\n", n2 % n1);
        }

        else if (programa == 2)
        {
            /*
            Faça um programa que receba três notas de um aluno, calcule e imprima a média aritmética entre essas notas.
            */
            printf("Executing program 2...\n");
            float n, n2 = 0;
            short i;

            for (i = 1; i < 4; i++)
            {
                printf("Enter the %hd note: ", i);
                scanf("%f", &n);
                n2 += n;
            }
            i--;
            printf("The arithmetic mean of this student's grade is %.2f", n2 / i);
        }

        else if (programa == 3)
        {
            /*Faça um programa que receba o valor de um depósito e o valor da taxa de juros.
            Calcule e imprima o valor do rendimento e o valor total depois do rendimento.*/
            float n, i;
 
 printf("Executing program 3...\n");
            printf("Enter the amount to deposit: ");
            scanf("%f", &n);

            printf("Perfect! \nEnter the interest rate in %: ");
            scanf("%f", &i);

            i /= 100;

            n += (n * i);

            printf("Your income is %.2f\n", i);
            printf("The total yield was %.2f\n", n);
        }

        else if (programa == 4)
        {
            /*Faça um programa que receba um número real e imprima:
            • a parte inteira do número;
            • a parte fracionária do número;
            • arredondamento do número (sem casas decimais).*/
            printf("Executing program 4...\n");

            float n;
            short i;
            printf("Enter the decimal number: ");
            scanf("%f", &n);

            i = (short)n;
            printf("The number integer is %hd\n", i);
            printf("The fractional part of the number is %f \n", n - i);
            printf("The number rounded is %.0f\n", n);
        }

        else if (programa == 5)
        {
            /* Faça um programa que receba um número inteiro, calcule e imprima: • a raiz quadrada desse número (sqrt());
            • esse número elevado ao quadrado.*/

            printf("Executing program 5...\n");
            short n;
            printf("Enter the number: ");
            scanf("%hd", &n);

            printf("The square root of the number %hd is %.2f\n", n, sqrt(n));
            printf("The number %hd squared is %.0f\n", n, pow(n, 2));
        }

        else if (programa == 6)
        {
            /*Faça um programa que receba a idade de uma pessoa em anos, calcule e imprima essa idade em:
            • Meses, Dias, Horas e Minutos.*/
            short y;

            printf("Executing program 6...\n");
            printf("Enter an age in years example: 18 years: ");
            scanf("%hd", &y);

            printf("This age in months is %d\n", y * 12);
            printf("This age in days is %d\n", y * 365);
            printf("This age in hours is %d\n", y * 8766);
            printf("This age in minutes is %d\n", y * 526000);
        }

        else if (programa == 7)
        {

            float b, h;
            printf("Executing program 7...\n");

            /*Faça um programa que calcule a área de um triângulo.*/
            printf("Enter the height: ");
            scanf("%f", &h);

            printf("Enter base: ");
            scanf("%f", &b);

            b *= h / 2;

            printf("The area of the triangle is %.2f\n", b);
        }

        else if (programa == 8)
        {
            /*Faça um programa que calcule e imprima a área de um círculo.*/
            const float pi = 3.14;
            float r;
            printf("Enter the radius of the circle: ");
            scanf("%f", &r);

            printf("The area of the radius of the circle is %.2f\n", pi * pow(r, 2));
        }

        else if (programa == 9)
        {
            /* Faça um programa que calcule e imprima a área de um trapézio.*/
            printf("Executing program 9...\n");

            float B, b, h, a;

            printf("Enter the value of the major base of the trapezoid ");
            scanf("%f", &B);
            printf("Enter the value of the minor base of the trapezoid ");
            scanf("%f", &b);
            printf("Enter the height value of the trapezoid ");
            scanf("%f", &h);

            printf("Area of the trapezium is %.2f\n", (B + b) * h / 2);
        }

        else if (programa == 10)
        {
            /* Faça um programa que receba o salário de um funcionário, calcule e imprima o valor do imposto de
    renda a ser pago, sabendo que o imposto equivale a 5% do salário.
     */

            printf("Executing program 10...\n");
            float s;
            printf("Enter the employee's salary: ");
            scanf("%f", &s);

            printf("This employee has to pay %.2f income tax\n", s * 0.05);
        }

        else
        {
            printf("Invalid Command\n");
        }

        printf("\nIf you want to run the same program again type 'N' if you want to open another function of the program type 'R', if you wnat to close the program type any other key\n");
        scanf(" %c", &again);

        if (again == 'R' || again == 'r')
        {
            printf("\nWhich exercise do you want to perform ?\n");
            scanf("%hd", &programa);
        }

    } while (again == 'n' || again == 'N'|| again == 'R' || again == 'r');

    return 0;
}
