#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"
#include "Class_cutVoxel.h"

Class_cutVoxel::Class_cutVoxel(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

void Class_cutVoxel::draw(Sculptor &sculp) {
    sculp.cutVoxel(this->x, this->y, this->z);
}
