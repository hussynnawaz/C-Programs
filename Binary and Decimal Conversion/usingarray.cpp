//Learnprogramo - programming made simple
#include <cmath> 
#include <iostream> 
using namespace std; 
#define ull unsigned long long int 
int decimalToBinary(int N) 
{
	ull B_Number = 0; 
	int cnt = 0; 
	while (N != 0) { 
		int rem = N % 2; 
		ull c = pow(10, cnt); 
		B_Number += rem * c; 
		N /= 2; 
		cnt++; 
	} 
	return B_Number; 
} 
int main() 
{ 
	int N = 15; 
	cout << decimalToBinary(N); 
	return 0; 
} 