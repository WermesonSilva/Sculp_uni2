#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"
#include "Class_putSphere.h"

Class_putSphere::Class_putSphere(int cx, int cy, int cz, int radius, float r, float g, float b, float a) {
    this->cx = cx;
    this->cy = cy;
    this->cz = cz;
    this->radius = radius;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void Class_putSphere::draw(Sculptor &sculp) {
    sculp.setColor(this->r, this->g, this->b, this->a);
    sculp.putSphere(this->cx, this->cy, this->cz, this->radius);
}
