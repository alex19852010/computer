#include <iostream>
#include "gpu.h"
#include "ram.h"

using namespace std;

void display(RAM* ram)
{
    for(int i = 0; i < 8; i ++)
    {
        cout << ram->buffer[i] << " ";
    }

    cout << endl;
}