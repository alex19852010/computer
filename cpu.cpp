#include <iostream>
#include "cpu.h"
#include "ram.h"

using namespace std;

void compute(RAM* ram)
{
    int sum = 0;
    for(int i = 0; i < 8; i ++)
    {
        sum += ram->buffer[i];
    }
    cout << "sum = " << sum << endl;
}