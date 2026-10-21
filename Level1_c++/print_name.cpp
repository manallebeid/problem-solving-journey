#include <iostream>
#include<string>
using namespace std;
//function to read the name from user
string Read_name()
{
	string name;
	cout << " Enter Your Name ";
	getline(cin, name);
	return name;
}
// function to print the name 
void Print_name(string name)
{
	cout << "Hi " << name << endl;
}
int main()
{
	Print_name(Read_name());
	return 0;
}
