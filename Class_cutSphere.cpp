#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"
#include "Class_cutSphere.h"

Class_cutSphere::Class_cutSphere(int cx, int cy, int cz, int radius) {
    this->cx = cx;
    this->cy = cy;
    this->cz = cz;
    this->radius = radius;
}

void Class_cutSphere::draw(Sculptor &sculp) {
    sculp.cutSphere(this->cx, this->cy, this->cz, this->radius);
}
