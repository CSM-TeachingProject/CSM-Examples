#include<iostream>

using namespace std;

int main(){
    //regra geral para declara��o -> tipo de dados + nome da
    //vari�vel come�ando com uma letra sempre

    // tipos aceitos dentro da linguagem C
    int inteiro = 0;
    char caractere = 'c';
    float pontoFlutuante = 0.5;
    double dobroDoFloat = 0.6;
    int *ponteiro = &inteiro;


    cout << "Imprimindo um inteiro: " << inteiro << endl;
    cout << "Imprimindo um caractere: " << caractere << endl;
    cout << "Imprimindo um pontoFlutuante: " <<  pontoFlutuante << endl;
    cout << "Imprimindo um double: " << dobroDoFloat<< endl;
    cout << "Imprimindo um ponteiro: " << ponteiro<< endl;
}
