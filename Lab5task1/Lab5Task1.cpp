#include <iostream>
using namespace std;

class temprature
{
private :
    int temp;

public:
    temprature()
    {
        temp = 15;
    }
    ~temprature() {};

    void warm()
    {
        temp += 5;
    }
    void cold()
    {
        temp -= 5;
    }
    void print()
    {
        cout << "Temprature = " << temp << endl;
    }
};

int main()
{
    temprature heater;
    bool loop = true;
    
    cout << "*****Heater Thermostate***** " << endl;
    while (loop)
    {
        int choice = 0;
        cout << "1. Hotter" << endl;
        cout << "2. Cooler" << endl;
        cout << "3. exit" << endl;
        cout << "Enter your choice = " ;
        cin >> choice;

        switch (choice)
        {
            case 1:
                heater.warm();
                heater.print();
                break;
            case 2:
                heater.cold();
                heater.print();
                break;
            case 3:
                loop = false;
                break;
            default:
                cout << "You have entered invalid option " << endl;
                break;
        }


    }


}


