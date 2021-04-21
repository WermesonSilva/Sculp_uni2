#ifndef CLASS_PUTSPHERE_H_INCLUDED
#define CLASS_PUTSPHERE_H_INCLUDED

#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"

class Class_putSphere : public FiguraGeometrica {
    int cx, cy, cz, radius;
public:
    Class_putSphere(int cx, int cy, int cz, int radius, float r, float g, float b, float a);
    ~Class_putSphere();
    void draw(Sculptor &sculp);
};

#endif // CLASS_PUTSPHERE_H_INCLUDED
