#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

/*classe abstrata: a Classe FiguraGeometrica se trata de uma classe abstrata, quando não se diz o tipo de figura geometrica, o conceito é imaginário
ja que estão incerridas nela varias formas geométrica, ou seja, um classe geral para os figuras*/
class FiguraGeometrica
{
public:

    FiguraGeometrica(); //construtor

    virtual void draw(Sculptor &t) = 0; /*O programa vai identificar como Função virtual pura, a função execurara o metodo de subclasses,
    da propria classe  concreta de FiguraGeométrica*/

    virtual ~FiguraGeometrica(); //destrutor
};

#endif // FIGURAGEOMETRICA_H
