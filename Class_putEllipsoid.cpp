#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"
#include "Class_putEllipsoid.h"

Class_putEllipsoid::Class_putEllipsoid(int cx, int cy, int cz, int rx, int ry, int rz, float r, float g, float b, float a) {
    this->cx = cx;
    this->cy = cy;
    this->cz = cz;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void Class_putEllipsoid::draw(Sculptor &sculp) {
    sculp.setColor(this->r, this->g, this->b, this->a);
    sculp.putEllipsoid(this->cx, this->cy, this->cz, this->rx, this->ry, this->rz);
}
