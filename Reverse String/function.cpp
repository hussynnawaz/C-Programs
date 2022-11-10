//Learnprogramo - programming made simple
#include <iostream>
using namespace std;
void reverse_String(string& greet, int n,int i)
{
  if(n==i){return;
  }
  swap(greet[i],greet[n]);
  reverse_String(greet,n-1,i+1);
}
int main()
{
  string greeting = "Learnprogramo";
  cout<<"String before reversal: "<<greeting<<endl;
  reverse_String(greeting,greeting.length()-1,0);
  cout<<"String after reversal: "<<greeting<<endl;
}