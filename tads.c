#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "cubos.h"
// Aloca dinamicamente memória para um novo cubo e inicializa o lado
Cubo* aloca_memoria(float c){
    Cubo* novo = (Cubo*)malloc(sizeof(Cubo));// Aloca memória suficiente para um cubo
    if(novo == NULL){
        printf("Alocacao nao foi bem sucedida");
        return 0;// Retorna 0 em caso de falha na alocação
    }
    novo->lado = c;
    return novo;
}
// Libera a memória alocada para um cubo
void libera_espaco(Cubo *c){
    free(c);
}
// Calcula o volume do cubo
Cubo *volume(Cubo *c, float *volume){
    *volume = pow(c->lado,3);
    return c;
}
// Calcula a área superficial do cubo
Cubo *calc_area(Cubo *c, float *area){
    *area = (6* pow(c->lado,2));
    return c;
}
// Obtém o valor do lado do cubo
Cubo *lado(Cubo *c, float *lado){
    *lado = c->lado;
    return c;
}

int main() {
    float c, a, v;

    printf("Digite o tamanho do lado do cubo: ");
    scanf("%f", &c);

    Cubo* novocubo = aloca_memoria(c);

    lado(novocubo, &c);
    printf("Lado: %.2f\n", c);

    calc_area(novocubo, &a);
    printf("Area: %.2f\n", a);

    volume(novocubo, &v);
    printf("Volume: %.2f\n", v);

    libera_espaco(novocubo);

    return 0;
}
