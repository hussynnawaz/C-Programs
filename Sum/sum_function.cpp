#include <iostream>
using namespace std;
class Add{
  public:
    int num1, num2;
    void ask(){
       cout<<"Enter the first number: ";
       cin>>num1;
       cout<<"Enter the second number: ";
       cin>>num2;
    }
    int sum(int n1, int n2){
       return n1+n2;
    }
    //This function displays the addition result
    void show(){
       cout<<sum(num1, num2);
    }
};
int main(){
   //Creating object of class Add
   Add obj;
   //asking for input
   obj.ask();
   //Displaying the output
   obj.show();
   return 0;
}
/*
Addition Using Class and Function in C++
In this program we will do addition of two numbers using class and declare function for addition.
*/