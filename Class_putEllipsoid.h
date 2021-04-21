#ifndef CLASS_PUTELLIPSOID_H_INCLUDED
#define CLASS_PUTELLIPSOID_H_INCLUDED

#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"

class Class_putEllipsoid : public FiguraGeometrica {
    int cx, cy, cz, rx, ry, rz;
public:
    Class_putEllipsoid(int cx, int cy, int cz, int rx, int ry, int rz, float r, float g, float b, float a);
    ~Class_putEllipsoid();
    void draw(Sculptor &sculp);
};

#endif // CLASS_PUTELLIPSOID_H_INCLUDED
