#include <iostream>
using namespace std;

void order(int &a, int &b);

int main()
{
	int a = 10;
	int b = 60;
	cout << "Initial values of a and b: "<< a << " " << b << endl;
	order(a,b);
	if (a > b) cout << "Swapped numbers: " << a << " " << b << endl;
	else cout << "Nothing to change";
	return 0;
}

void order(int &a, int &b) 
{
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
}

