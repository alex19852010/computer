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
  
  input(&ram);
  display(&ram);
  compute(&ram);
  save(&ram);
  load(&ram);
  

}