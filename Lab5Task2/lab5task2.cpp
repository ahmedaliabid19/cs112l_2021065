#include <iostream>
using namespace std;

class parity
{
private :
    int num;
    int *arr;


public:

    parity():num(0)
    {
       arr = new int[num];
    }
    ~parity(){
        delete [] arr;
    };

    void put()
    {
        int val;
        num+=1;
        int *temp = new int[num];
        for (int i=0; i<num ;i++)
        {
            temp[i]= arr[i];
        }
        delete [] arr;
        arr= temp;
        //delete [] temp;
        cout << "Enter a value = ";
        cin>> val;
        arr[num-1]=val;

    }
    void print ()
    {
        for (int i=0;i< num; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
    void del()
    {
        num-=1;
        int *temp= new int [num];
        for(int i=0; i<num ; i++)
        {
            temp[i]=arr[i];
        }
        delete [] arr;
        arr=temp;
        //delete [] temp;
    }
    int test ()
    {
        if (num%2==0)
        {
            cout << "The even values have been put into the arr"<< endl;
            cout << " TRUE ";
            return 1;
        }
        else 
        {
           cout << "The odd values have been put into the arr"<< endl; 
           cout << "FALSE";
           return 0;
        }
    }

};

int main()
{
    parity P;
    bool loop= true;
    while (loop)
    {
        int choice=0;
        cout << "*****WELCOME*****"<< endl;
        cout<< "1. Put Value "<< endl;
        cout<< "2. Print Value "<< endl;
        cout<< "3. delete value "<< endl;
        cout<< "4. Run Test "<< endl;
        cout<< "0. To Exit "<< endl;

        cout << "Enter your choice = ";
        cin >> choice ;

        switch (choice)
        {
            case 1:
            P.put();
            break;
            case 2:
            P.print();
            break;
            case 3:
            P.del();
            break;
            case 4:
            P.test();
            break;
            case 0:
            loop=false;
            break;

            default:
            cout << "Invalid Entery"<< endl;
            break;

        }
    }

}