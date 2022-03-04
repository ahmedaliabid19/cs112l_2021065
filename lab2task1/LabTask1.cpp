#include <iostream>
#include<bitset>
using namespace std;

#define POW(num1, num2) (num1 & num2);
int pow(int num1){
    int num2, answer;
    num2 = num1 - 1;
    answer = POW(num1, num2);
    return answer;
}
int main(){
    int num1, answer;
    cout << "Please enter number: " << endl;
    cin >> num1;
    while (num1 <= 0){
        cout << "Please enter a number which is greater than 0: " << endl;
        cin >> num1;
    }
    answer = pow(num1);
    if (answer == 0) {
        cout << "Yes " << num1 << " is the power of 2" << endl;
    }
    else {
        cout << "No " << num1 << " is not the power of 2" << endl;
    }
    return 0;
}
