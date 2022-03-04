#include<iostream>
using namespace std;

#define read(type, var) type var; cin >> var;
void convert_to_base(int add, int base, char str1[], char str2[])
{
	if (base == 2){
		int rem, bin = 0, pow = 1;
		while (add > 0){
			rem = add % 2;
			add /= 2;
			bin = bin + (rem * pow);
			pow *= 10;
		}
		cout << "The answer is: " << endl;
		cout << bin;
	}
	else if (base == 8){
		int rem, i = 0, oct = 0, pow = 1;
		while ( add > 0){
			rem = add % 8;
			oct += +rem * pow;
			add /= 8;
			pow *= 10;
		}
		cout << "The answer is: " << endl;
		cout << oct;
	}
	else if (base == 16){
		char hexa[100];
		int i = 0;
		while (add > 0){
			int rem = 0;
			rem = add % 16;
			add /= 16;
			if (rem < 10){
				hexa[i] = (rem + 48);
				i++;
			}
			else {
				hexa[i] = (rem + 55);
				i++;
			}

		}
		cout << "The answer is: " << endl;
		for (int j = i - 1; j >= 0; j--){
			cout << hexa[j];
		}

	}
	else{
		cout << "The answer is: " << endl;
		cout << add;
	}
}
int convert_to_int(char x)
{
	if (x >= '0' && x <= '9') {
		return (int)(x - '0');
	}
	else {
		return (int)(x + 10 - 'A');
	}
}
int todec(char str[], int base)
{
	int len = strlen(str);
	int pow = 1, decimal = 0;
	for (int i = len - 1; i >= 0; i--) {
		int number;
		number = convert_to_int(str[i]);
		if (number >= base)
			return -1;
		else {
			decimal = decimal + (number * pow);
			pow = pow * base;
		}
	}
	return decimal;
}

int main(){
	cout << "Enter base system: " << endl;
	read(int, base);
	bool base_found = false;
	while (base_found == false)	{
		if (base == 2 || base == 8 || base == 10 || base == 16){
			base_found = true;
		}
		else{
			cout << "Invalid base enetered! Please Try again: " << endl;
			cin >> base;
			base_found = false;
		}
	}
	cout << "Enter number 1 with base: " << endl;
	read(char, str1[100])
	int intstr1 = todec(str1, base);
	while (intstr1 == -1){
		cout << "Invalid Number entered! Please Try again: " << endl;
		cin >> str1;
		intstr1 = todec(str1, base);
	}
	cout << "Enter number 2 with base: " << endl;
	read(char, str2[100])
	int intstr2 = todec(str2, base);
	while (intstr2 == -1){
		cout << "Invalid Number entered! Please Try again: " << endl;
		cin >> str2;
		intstr2 = todec(str2, base);
	}
	int result = intstr1 + intstr2;
	convert_to_base(result, base, str1, str2);
	return 0;
}