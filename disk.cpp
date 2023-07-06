#include <iostream>
#include <fstream>
#include "disk.h"
#include "ram.h"

using namespace std;

void save(RAM* ram)
{
  ofstream file("data.txt");
  if(file.is_open())
  {
    for(int i = 0; i < 8; i ++)
    {
        file << ram->buffer[i] << endl;
    }

    file.close();
    cout << "file saved to disk" << endl;
  }

    else
    {
      cout << "error file" << endl;
    }
}


void load(RAM* ram)
{
    ifstream file("data.txt");
    if(file.is_open())
    {
        for(int i = 0; i < 8; i ++)
        {
            file >> ram->buffer[i] ;
        }
        file.close();
        cout << "information loaded from disk" << endl;
    }

     else
      {
        cout << "error file" << endl;
      }
}