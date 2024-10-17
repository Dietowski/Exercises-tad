#ifndef CUBOS_H_INCLUDED
#define CUBOS_H_INCLUDED
// Estrutura para representar um cubo
typedef struct{
    float lado;// Comprimento de um lado do cubo
}Cubo;

Cubo* aloca_memoria(float lado);

void libera_espaco(Cubo *c);

Cubo *volume(Cubo *c, float *volume); //retornar a função com o tipo da struct evita cópias desnecessárias da variável, auxilia no
                                      //encapsulamento das funções.

Cubo *calc_area(Cubo *c, float *area);

Cubo *lado(Cubo *c, float *lado);
#endif // CUBOS_H_INCLUDED
