#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
double MathFunc(double x)
{
	double y = 0;
	return y = (sin(x * x)) / (1 - cos(x));
}
int main()
{
	double x = 0;
	double y = 0;
	cout << "ÇëÊäÈëxµÄÖµ£º"<<endl;
	cin >>x;
	y = MathFunc(x);
	cout << y << endl;
	//system("pause");
	return 0;
}