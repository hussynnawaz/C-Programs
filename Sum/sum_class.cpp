#include <iostream>
using namespace std;
class Maths
{
  int x, y;
public:
  void input() {
    cout << "Input two integers\n";
    cin >> x >> y;
  }
  void add() {
    cout << "Result: " << x + y;
  }
};
int main()
{
   Maths m;
   m.input();
   m.add();
   return 0;
}
/*
C++ Addition Program Using Class
In this program, we will declare one class to do the addition of two integers*/