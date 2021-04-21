#ifndef CLASS_CUTBOX_H_INCLUDED
#define CLASS_CUTBOX_H_INCLUDED

#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"

class Class_cutBox : public FiguraGeometrica {
private:
    int x0, x1, y0, y1, z0, z1;
public:
    Class_cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    ~Class_cutBox();
    void draw(Sculptor &sculp);
};

#endif // CLASS_CUTBOX_H_INCLUDED
