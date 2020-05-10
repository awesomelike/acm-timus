#include <iostream>
using namespace std;

// Reading any number of arguments
template<typename...T>
void read(T&... args) {
  ((cin >> args), ...);
}

int main(int argc, char const *argv[])
{
  int x, y, z;
  read(x, y, z);
  cout << "x=" << x << endl;
  cout << "y=" << y << endl;
  cout << "z=" << z << endl;
  
  return 0;
}
