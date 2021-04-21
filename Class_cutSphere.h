#ifndef CLASS_CUTSPHERE_H_INCLUDED
#define CLASS_CUTSPHERE_H_INCLUDED

#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"

class Class_cutSphere : public FiguraGeometrica {
private:
    int cx, cy, cz, radius;
public:
    Class_cutSphere(int cx, int cy, int cz, int radius);
    ~Class_cutSphere();
    void draw(Sculptor &sculp);
};

#endif // CLASS_CUTSPHERE_H_INCLUDED
