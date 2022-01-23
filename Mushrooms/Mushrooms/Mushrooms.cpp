#include <iostream>
#include "Mushrooms.h"
#include "Mushroom_like.h"
#include"Oomycetes.h"
int main()
{
    setlocale(0, "");
    Mushrooms m;
    m.print();
    Mushroom_like ml;
    ml.print();
    Oomycetes o;
    o.print();
}
