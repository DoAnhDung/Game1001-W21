// Hi, my name is Do Anh Dung. You can call me Do.

#include <iostream>
using namespace std;



int main()
{

	int x = 15;
	int y = 11;
	int z = 19;
	int a = x + y;
	cout << " x + y = " << a << endl;
	int b = x - y;
	cout << " x - y = " << b << endl;
	int c = x * y;
	cout << " x * y = " << c << endl;
	int d = x / y;
	cout << " x / y = " << d << endl;
	int e = x % y;
	cout << " x % y = " << e << endl << endl << endl;
	

	// Finding data types size in order to put them from smallest to largest
	cout << "size of char: "  << sizeof(char)  << " byte" << endl;
	cout << "size of bool: "  << sizeof(bool)  << " byte" << endl;
	cout << "size of short int: " << sizeof(short int)  << " bytes" << endl;
	cout << "size of int: "  << sizeof(int)  << " bytes" << endl;
	cout << "size of float: "  << sizeof(float)  << " bytes" << endl;
	cout << "size of long int: " << sizeof(long int)  << " bytes" << endl;
	cout << "size of double: "  << sizeof(double)  << " bytes" << endl;
	cout << "size of long long int: "  << sizeof(long long int)  << " bytes" << endl;
	cout << "size of string: " << sizeof(string) << " bytes" << endl << endl;
    cout << "the order of data types is char, bool, short int, int, float, long int, double, long long int, string.\n";


	return 0;
}