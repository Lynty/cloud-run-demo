#include <iostream>
#include <stdlib.h>
#include <limits>
using namespace std;
     
int main()
{
  cout << "Hello world 0!" << endl;
  std::cout << "Press ENTER to continue...";
  std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
  return 0;
}
