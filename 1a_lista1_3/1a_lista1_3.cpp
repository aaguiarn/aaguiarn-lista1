//Lista de atividade de Linguagem de Programação 2021.1
//Disciplina Ministrada em 2021.1 Pelo Prof Caio
//Implementação dos Scripts por Antônio Aguiar - Engenharia Elétrica
//1a_lista1_3.cpp : Este arquivo contém a função 'main'.
//A execução do programa começa e termina nesse script.

#include<iostream>
using namespace std;

int main()
{
    float fahr, cel;
    char option;

    std::cout << R"(
                        Conversor de Temperatura
                          ____________________ 
                         /   ^F     _    ^C   \
                         \  100  - : : -  40  /
                         /   90  - : : -  30  \
                         \   80  - : : -  25  /
                         /   70  - : : -  20  \
                         \   60  - : : -  15  /
                         /   50  - : : -  10  \
                         \   40  - : : -   5  /
                         /   30  - : : -   0  \
                         \   20  - : : -  -5  /
                         /   10  - : : - -10  \
                         \    0  - : : - -20  /
                         /  -10  - : : - -25  \
                         \  -20  - : : - -30  /
                         /  -30  - : : - -35  \
                         \          *         /
                         /        '***`       \
                         \       (*****)      /
                         /        `---'       \
                         \___________________/
)" << '\n';


    cout << "Escolha uma das opcoes:" << endl;
    cout << "1. Celsius para Fahrenheit." << endl;
    cout << "2. Fahrenheit para Celsius." << endl;
    cin >> option;

    //selecionar opção para converter de celsius para fahrenheit
    if (option == '1')
    {
        cout << "Digite a temperatura em graus Celsius: ";
        cin >> cel;

        fahr = (1.8 * cel) + 32.0; //formula
        cout << "\nTemperatura em Fahrenheit: " << fahr << " F" << endl;
    }
    //Fahrenheit para Celsius
    else if (option == '2')
    {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> fahr;

        cel = (fahr - 32) / 1.8; //formula
        cout << "\nTemperatura em graus Celsius: " << cel << " C" << endl;
    }
    else
        cout << "Entrada Inválida." << endl;

    return 0;
}
