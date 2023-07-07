#include <iostream>
#include "ram.h"
#include "kbd.h"
#include "gpu.h"
#include "cpu.h"
#include "disk.h"

using namespace std;

int main()
{
  RAM ram;
  string command;

  while (1)
  {

    cout << "enter command (sum, save, load, input, display, exit):";
    cin >> command;

    if (command == "sum")
      compute(&ram);

    else if (command == "save")
      save(&ram);

    else if (command == "load")
      load(&ram);

    else if (command == "input")
      input(&ram);

    else if (command == "display")
      display(&ram);

    else
      cout << "invalid command." << endl;
  }
}