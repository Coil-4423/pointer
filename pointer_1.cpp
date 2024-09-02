#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;
  string* ptr_1 = ptr;

  
  cout << ptr_1 << "\n";
  cout << *ptr_1 << "\n";
  cout << food << "\n";
  cout << ptr <<  "\n";
  cout << &food << "\n";
  cout << *ptr << "\n";
  cout << &ptr << "\n";
  return 0;
}
