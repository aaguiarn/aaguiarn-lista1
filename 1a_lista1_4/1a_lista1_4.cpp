//Lista de atividade de Linguagem de Programação 2021.1
//Disciplina Ministrada em 2021.1 Pelo Prof Caio
//Implementação dos Scripts por Antônio Aguiar - Engenharia Elétrica
//1a_lista1_4.cpp : Este arquivo contém a função 'main'.
//A execução do programa começa e termina nesse script.

#include <iostream>

int main()
{
    int total; //Definem as variáveis a serem usadas
    int horas;
    int restoh;
    int minutos;
    int restm;
    int secs;
    
    std::cout << "Escreva um valor inteiro de tempo em segundos: \n"; //Instrução para usuário
    std::cin >> total; //O usuario entra os dados aqui;

        horas = total / 3600;
        restoh = total % 3600;
        minutos = restoh / 60;
        restm = restoh % 60;
        secs = restm % 60;

    std::cout << total << "Segundos equivalentes a " << int(horas) << " horas " << int(minutos)
        << " minutos e " << int(secs) << " segundos.";
 

    ;
return 0;
}