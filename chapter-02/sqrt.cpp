#include<iostream>
#include<cmath>

int main()
{
	using namespace std;

	double area;
	cout << "enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "side is : " << side << endl;
	return 0;
}
