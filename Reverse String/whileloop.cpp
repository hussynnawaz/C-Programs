//Learnprogramo - programming made simple
#include <iostream>
#include <string>
using namespace std;
// Function to reverse a string
string reverse(string const &s)
{
	string rev;
	for (int i = s.size() - 1; i >= 0; i--) {
		rev = rev.append(1, s[i]);
	};
	return rev;
}
// main function
int main()
{
	std::string s("Learnprogramo programming made simple");
	s = reverse(s);
	cout << s;
	return 0;
}