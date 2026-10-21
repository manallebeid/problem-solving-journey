#include<iostream>
using namespace std;
// enum to represent the parity of a number
enum number_type{odd=1, even=2};
// function to read number from user 
int Read_Number()
{
	int Number;
	cout << " Enter The Number To be checked \n ";
	cin >> Number;
	return Number;
}
// Fuunction to check the number 
number_type Check_Number(int Number)
{
	if (Number % 2 == 0)
		return number_type::even;
	else
		return number_type::odd;
}
// function to print the result
void Print_Result(number_type Result)
{
	if (Result == number_type::even)
		cout << " The Number is Even \n";
	else
		cout << " The Number is Odd \n";
}
int main()
{
	Print_Result(Check_Number(Read_Number()));
	return 0;
}