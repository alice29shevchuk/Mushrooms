#include <iostream>
#include "Mushrooms.h"
#include "Mushroom_like.h"
#include"Oomycetes.h"
#include"Really_mushroom.h"
#include"Ascomycetes.h"
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
}
