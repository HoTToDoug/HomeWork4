#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	c = a + b;
	if (c >= 10 and c <= 20) {
		cout << "Quest_1 = True" <<endl;
	}
	else
	{
		cout << "Quest_1 = False" <<endl;
	};
	cout << "------------------------------" << endl;
	unsigned int z, x, v;
	cin >> z;
	cin >> x;
	v = z + x;

	if (z = x == 10)
	{
		cout << "Quest_2 = True" <<endl;
	}
	else if (v == 10)
	{
		cout << "Quest_2 = True" <<endl;
	}
	else
	{
		cout << "Quset_2 = False" <<endl;
	};
	cout << "------------------------------" <<endl;
	const size_t i = 1;
	cout << "Your number: ";
	for (size_t i = 1; i <= 50; i = i + 2) 
	{
		cout << i << " ";
	};
	cout << "." <<endl;
	cout << "------------------------------" <<endl;

	unsigned int g = 0;
	int l[100];
	int j = 0;
	int k = 0;
	int h = 0;
	while (j <= 100) {
		l[j] = (j = j + 2) + 1;
		cout << l[j] << " ";
	};
	cout << "Enter numb: ";
	cin >> g;
	if (g > 0)
	{
		while (h == 1)
		{
			h = g / l[k];
			k++;
		}
		cout << "Quest_4 = True" << endl;
	}
	else
	{
		cout << "Quest_4 = False" << endl;
	};
	cout << "------------------------------" << endl;
	
	return 0;
};
