#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"
#include "Class_cutEllipsoid.h"

Class_cutEllipsoid::Class_cutEllipsoid(int cx, int cy, int cz, int rx, int ry, int rz) {
    this->cx = cx;
    this->cy = cy;
    this->cz = cz;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
}

void Class_cutEllipsoid::draw(Sculptor &sculp) {
    sculp.cutEllipsoid(this->cx, this->cy, this->cz, this->rx, this->ry, this->rz);
}
