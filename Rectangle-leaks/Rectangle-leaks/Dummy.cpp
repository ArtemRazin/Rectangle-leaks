#include "Dummy.h"

Dummy::Dummy() {
    q = NULL;
}

Dummy::~Dummy() {
    delete q;
    q = NULL;
}

void Dummy::cal()
{
    q = new Rectangle();
    q->length = 3;
    q->breadth = 3;

    cout << "q:" << endl;
    cout << "length: " << q->length << " breadth: " << q->breadth << endl;

    cout << "Area of q: " << q->Area() << endl;
    cout << "Perimeter of q: " << q->Perimeter() << endl;
}