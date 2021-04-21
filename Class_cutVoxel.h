#ifndef CLASS_CUTVOXEL_H_INCLUDED
#define CLASS_CUTVOXEL_H_INCLUDED

#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"

class Class_cutVoxel : public FiguraGeometrica {
private:
    int x, y, z;
public:
    Class_cutVoxel (int x, int y, int z);
    ~Class_cutVoxel();
    void draw(Sculptor &sculp);
};

#endif // CLASS_CUTVOXEL_H_INCLUDED
