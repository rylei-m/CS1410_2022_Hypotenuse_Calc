#include <iostream>

#include <cmath>

using namespace std;


int main()
{
	double	a;
	cout << "Enter side length a: ";
	cin >> a;

  double	b;
	cout << "Enter side length a: ";	
	cin >> b;

	double c = sqrt((a*a) + (b*b));	
  cout << "The hypotenus is equal to: ";	
	cout << c << endl;

	return 0;
}