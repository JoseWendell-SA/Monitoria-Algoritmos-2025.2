/*
==================================================
PROBLEMA 2
==================================================
Escreva um programa que leia a quantidade de horas trabalhadas por um funcionário de
uma empresa durante um mês e o valor de cada hora trabalhada e determine o seu
pagamento. O programa deve considerar que a carga-horária mensal do funcionário é de
160 horas e que o valor de cada hora extra corresponde ao valor da hora trabalhada
acrescido de uma taxa de 50%. Para resolver a questão, considere que a quantidade de
horas trabalhadas nunca será inferior a 160.
*/

#include <stdio.h>
#include <conio.h>
const int CARGAHORARIAMINIMA = 160;

void main()
{
    int horasTrabalhadas;
    float valorPorHora;
    printf("Informe o total de horas trabalhas: ");
    scanf("%d", &horasTrabalhadas);
    
    printf("Informe o valor por hora: ");
    scanf("%f", &valorPorHora);
    
    int horaExtra = horasTrabalhadas % CARGAHORARIAMINIMA;
    float salarioSemHoraExtra = CARGAHORARIAMINIMA * valorPorHora;
    float salarioComHoraExtra = horaExtra * (valorPorHora * 1.5);
    
    float salarioFinal = salarioComHoraExtra + salarioSemHoraExtra;
    
    printf("O salario sera: %.2f", salarioFinal);
}