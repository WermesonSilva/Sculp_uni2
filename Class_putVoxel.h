#ifndef CLASS_PUTVOXEL_H_INCLUDED
#define CLASS_PUTVOXEL_H_INCLUDED

#include "classe_Sculptor.h"
#include "FiguraGeometrica.h"

class Class_putVoxel : public FiguraGeometrica {
private:
    int x, y, z;
public:
    Class_putVoxel(int x, int y, int z, float r, float g, float b, float a);
    ~Class_putVoxel();
    void draw(Sculptor &sculp);
};


#endif // CLASS_PUTVOXEL_H_INCLUDED
