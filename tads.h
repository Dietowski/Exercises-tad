#ifndef CUBOS_H_INCLUDED
#define CUBOS_H_INCLUDED
// Estrutura para representar um cubo
typedef struct{
    float lado;// Comprimento de um lado do cubo
}Cubo;

Cubo* aloca_memoria(float lado);

void libera_espaco(Cubo *c);

Cubo *volume(Cubo *c, float *volume); //retornar a fun��o com o tipo da struct evita c�pias desnecess�rias da vari�vel, auxilia no
                                      //encapsulamento das fun��es.

Cubo *calc_area(Cubo *c, float *area);

Cubo *lado(Cubo *c, float *lado);
#endif // CUBOS_H_INCLUDED
