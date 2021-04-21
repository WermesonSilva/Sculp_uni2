#ifndef CLASS_PUTBOX_H_INCLUDED
#define CLASS_PUTBOX_H_INCLUDED

#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"

class Class_putBox : public FiguraGeometrica {
private:
    int x0, x1, y0, y1, z0, z1;
public:
    Class_putBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);
    ~Class_putBox();
    void draw(Sculptor &sculp);
};

#endif // CLASS_PUTBOX_H_INCLUDED
