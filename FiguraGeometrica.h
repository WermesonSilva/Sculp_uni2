#ifndef FIGURAGEOMETRICA_H_INCLUDED
#define FIGURAGEOMETRICA_H_INCLUDED

#include "classe_Sculptor.h"

class FiguraGeometrica {
protected:
    float r, g, b, a;
public:
    //FiguraGeometrica();
    virtual ~FiguraGeometrica();
    virtual void draw(Sculptor &sculp);
};


#endif // FIGURAGEOMETRICA_H_INCLUDED
