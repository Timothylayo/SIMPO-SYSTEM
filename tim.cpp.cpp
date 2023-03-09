// tim.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


#include <iostream >




using namespace std;

int fact(int p) {
	int f;
	if ( p== 1) {
		return 1;
	}
	else {
		 f = p * fact(p - 1);
		 return f;
	}
}


int main()
{

	int f = fact(8) ;
	int p= fact(5);
	int c = fact(3);

	int comb = f / (c * p);

	cout << f << " " << p << " " << c << " " << comb;
}


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
