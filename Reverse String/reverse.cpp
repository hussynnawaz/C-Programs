//Learnprogramo - programming made simple
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
int main() {
  string greeting = "Learnprogramo";
  //Note that it takes the iterators to the start and end of the string as arguments
  reverse(greeting.begin(),greeting.end());
  cout<<greeting<<endl;
}