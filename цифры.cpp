#include <iostream> //i/o library

using namespace std; //instead prefix std

int main() // header
{ 
	float a;//declaration
	//inpute values
	cout << "A = ";
	cin >> a;
	//calculation
	float res = a + 5;
	//output values 
	cout << "a + 5 = " << res << endl;

    system("pause");

	return 0; //output zero (return to os)

}