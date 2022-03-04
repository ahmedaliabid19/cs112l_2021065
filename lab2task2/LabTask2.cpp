#include <iostream>
using namespace std;
#define POW(x, y) (x * (2<<(y-1)));
int main() {
	int num1, num2;
	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
	
	if (num2 <= 0) {
		while (num2 < 0) {
			cout << "Enter the second number which is greater than 0: " << endl;
			cin >> num2;
		}
		if (num2 == 0) {
			cout << "The answer is: " << num1 << endl;
		}
	}
	else {
		int x = POW(num1, num2);
		cout << "The answer is: " << x << endl;
	}
}