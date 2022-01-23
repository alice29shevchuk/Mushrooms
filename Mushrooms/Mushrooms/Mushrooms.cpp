#include <iostream>
#include "Mushrooms.h"
#include "Mushroom_like.h"
#include"Oomycetes.h"
#include"Really_mushroom.h"
#include"Ascomycetes.h"
#include"Basidiomycetes.h"
#include"Deuteromycetes.h"
#include"Zygomycetes.h"
int main()
{
    setlocale(0, "");
    Mushrooms m;
    m.print();
    Mushroom_like ml;
    ml.print();
    Oomycetes o;
    o.print();
    Really_mushroom rm;
    rm.print();
    Ascomycetes a;
    a.print();
    Basidiomycetes b;
    b.print();
    Deuteromycetes d;
    d.print();
    Zygomycetes z;
    z.print();
}
