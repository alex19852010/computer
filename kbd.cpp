#include <iostream>
#include "kbd.h"
#include "ram.h"

using namespace std;

void input(RAM* ram)
{    
    for(int i = 0; i < 8; i ++)
    {
      cout << "enter number:" ;
      cin >> ram->buffer[i];
    }
    

}