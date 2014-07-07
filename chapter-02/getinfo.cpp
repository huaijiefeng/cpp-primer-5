#include<iostream>

int main()
{
	using namespace std;
	int carrots;
	cout << "how many carrots do you have?" << endl;

	cin >> carrots; 	//c++ input
	cout << "here are two more.";
	carrots  = carrots + 2;

	cout << "now you have " << carrots << "carrots." << endl;

	return 0;  

}
