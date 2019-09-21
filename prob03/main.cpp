// Random Rectangle


#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

int main()
{
  //I planted a seed, so everytime, the code executes, it will randomly
  //generate a number everytime the program is executed.
  unsigned seed = time(0);
  srand(seed);
  std::string numSign;
  int max = 80;   //maximum value for the length of the rectangle
  int myNum;

  myNum = rand() % max + 1;

  numSign.assign(myNum, '#'); //here is where I assign the random number to the string

  std::cout << numSign << std::endl;
  std::cout << numSign << std::endl;
  std::cout << numSign << std::endl;


  return 0;

}
