#include <iostream>
#include <string>
using namespace std;

class DOJ;

class person
{
private:
    friend class DOJ;
    static int count;


public:
    string name;
    int reg_no;
    person()
    {
        name = {};
        reg_no = 0;
        count++;
    }
    ~person() {};


    friend ostream& operator<< (ostream& output, person& a);
    friend istream& operator>> (istream& input, person& b);


};

ostream& operator<< (ostream& output, person& a)
{

    output << "Name and reg_no = " << a.name << "  " << a.reg_no << endl;
    return output;
}
istream& operator>> (istream& input, person& b)
{
    cout << "person NO. = " << b.count << endl;
    cout << "Name and Id= ";
    input >> b.name;
    input >> b.reg_no;
    return input;
}


int person::count = 0;


class DOJ
{
private:
    friend class person;

public:
    int day, month, year;

    DOJ()
    {
        day = 0;
        month = 0;
        year = 0;
        /*int date;*/


    }

    friend istream& operator >> (istream& input, DOJ& a);
    friend ostream& operator << (ostream& input, DOJ& b);
    bool operator <(DOJ a)
    {
        bool result = false;

        if (year < a.year)
        {
            result = true;
        }
        else if (month < a.month)
        {
            result = true;
        }
        else if (day < a.month)
        {
            result = true;
        }

        return result;
    }

    bool operator >(DOJ b)
    {
        bool result = false;

        if (year > b.year)
        {
            result = true;
        }
        else if (month > b.month)
        {
            result = true;
        }
        else if (day > b.month)
        {
            result = true;
        }

        return result;
    }
};

istream& operator >> (istream& input, DOJ& a)
{
    cout << "enter date dd/mm/yy = ";
    input >> a.day;
    input >> a.month;
    input >> a.year;

    return input;
}
ostream& operator << (ostream& output, DOJ& b)
{
    output << "The date is = " << b.day << "/ " << b.month << "/ " << b.year << endl;
    return output;

}

int main()
{
    person a;
    DOJ c, d;
    cin >> a;
    /*cout << a;*/

    cin >> c;
    /*cout << c;*/
    person b;
    cin >> b;
    /*cout << b;*/

    cin >> d;
    /* cout << d;*/
    if (c < d)
    {
        cout << a.name << " is senior because " << c.day << "/" << c.month << "/" << c.year << " is earlier than"
            << d.day << "/" << d.month << "/" << d.year << endl;
    }
    else if (c > d)
    {
        cout << b.name << " is senior because " << d.day << "/" << d.month << "/" << d.year << " is earlier than"
            << c.day << "/" << c.month << "/" << c.year << endl;

    }
    else
    {
        cout << "both are from same batch " << endl;
    }


}