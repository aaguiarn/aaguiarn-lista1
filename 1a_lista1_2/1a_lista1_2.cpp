//Lista de atividade de Linguagem de Programação 2021.1
//Disciplina Ministrada em 2021.1 Pelo Prof Caio
//Implementação dos Scripts por Antônio Aguiar - Engenharia Elétrica
//1a_lista1_2.cpp : Este arquivo contém a função 'main'.
//A execução do programa começa e termina ali.

#include <iostream>

int main()
{
    int num1, num2, num3;
        float media;
    std::cout << "Digite 3 numeros para calcularmos a media \n";
   
    std::cout << "1o Numero: \n";
    std::cin >> num1;
    
    std::cout << "2o Numero: \n";
    std::cin >> num2;
    
    std::cout << "3o Numero: \n";
    std::cin >> num3;

    media = (num1 + num2 + num3) / 3;
    
    std::cout << "A media dos tres numeros e: \n";
    std::cout << media;

return 0;
}