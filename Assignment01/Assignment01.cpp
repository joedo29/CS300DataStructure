#include <iostream>
using namespace std;

int main (){
	int x = 10;
	int *p = &x;
	int &r = *p;
	cout << r << endl;
	cout << "Hello World!";
}
