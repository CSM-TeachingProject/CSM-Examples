void main(){
    //regra geral para declara��o -> tipo de dados + nome da
    //vari�vel come�ando com uma letra sempre

    // tipos aceitos dentro da linguagem C
    int inteiro = 0;
    char caractere = 'c';
    float pontoFlutuante = 0.5;
    double dobroDoFloat = 0.6;
    int *ponteiro = &inteiro;

    //n�o existem booleanos
    //n�o existem o tipo String


    printf("Imprimindo um inteiro: %d", inteiro);
    printf("Imprimindo um caractere: %c", caractere);
    printf("Imprimindo um pontoFlutuante: %f", pontoFlutuante);
    printf("Imprimindo um double: %lf", dobroDoFloat);
    printf("Imprimindo um ponteiro: %x", ponteiro);
}
