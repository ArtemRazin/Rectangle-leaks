#include "Rectangle.h"
#include "Dummy.h"

int Rectangle::Area()
{
    return length * breadth;
}

int Rectangle::Perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Dummy d;
    d.cal();

    _getch();

    return 0;
}
