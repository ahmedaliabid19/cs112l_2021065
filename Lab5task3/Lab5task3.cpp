#include <iostream>
#include <string>
using namespace std;

class stringtype
{
private :
    string st1;
    string st2;
public:

    stringtype()
    {
        st1 = "";
        st2 = "";
    }
    ~stringtype() {};
    void initialize()
    {
        st1 = "";
        st2 = "";
    }
    void setvalues(string str1, string str2)
    {
        
        st1 = str1;
        st2 = str2;
    }

    void printvalues()
    {
        cout <<"String 1 = "<< st1 << endl;
        cout <<"String 2 = "<< st2 << endl;
    }
    int maxlength()
    {
        int count1 = 0, count2 = 0;
        for (int i = 0; i < 1000; i++)
        {
            if (st1[i] == '\0')
            {
                break;
            }
            else
            {
                count1++;

            }
        }
        for (int i = 0; i < 1000; i++)
        {
            if (st2[i] == '\0')
            {
                break;
            }
            else
            {
                count2++;

            }
        }
        if (st1 >= st2)
        {
            cout << " string 1 is longest = ";
            return count1;
        }
        
        else
        {
            cout << "string 2 is longest = ";
            return count2;
        }

    }
    int compare(string s1, string s2)
    {
        int i = 0, j = 0;
        while ((s1[i] != '\0') && (s2[i] != '\0'))
        {
            if (s1[i] > s2[i])
            {
               
                return 1;
            }

            else if (s1[i] < s2[i])
            {
                
                return -1;

            }

            i++;


        }
        return j;
    }

    void copy(string s1, string s2)
    {
       /* for (int i = 0; s1[i] !='\0' ; i++)
        {
            s2[i] = s1[i];
        }*/
        s2 = s1;
        cout << "Copied string is = " << s2;
    }
    int lenth(string s)
    {
        int count = 0;
        for (int i = 0; i < 100; i++)
        {
            if (s[i] != '\0')
                count++;
        }
        return count;
    }
    string concatenate(string s1,string s2)
    {
        int j = 0;
        string s3;
        s3 = s1 + s2;
        return s3;
    }
    int searchword(string s1)
    {
       
      
        int i = 0, j = 0,ans1=0,ans2=0,a1=0,a2=0;
        string temp;

        while (st1[i] != '\0' )
        {
            if (st1[i] != ' ')
            {
                temp += st1[i];
            }
            else
            {
                if (temp == s1)
                {
                    
                    return 1;
                }
                temp = "";
            }
            

            i++;

        }
        i = 0;
        temp = "";
        while (st2[i] != '\0')
        {
            if (st2[i] != ' ')
            {
                temp += st2[i];
            }
            else
            {
                if (temp == s1)
                {
                    return 1;
                }
                temp = "";
            }

            i++;
        }
        return 0;
    }
    int searchchar(char ch)
    {
        for (int i = 0; st1[i] != '\0'; i++)
        {
            if (st1[i] == ch)
            {
                return 1;
            }

        }
        for (int j = 0; st2[j] != '\0'; j++)
        {
            if (st2[j] == ch)
            {
                return 1;
            }

        }
        return 0;

    }
     
};

int main()
{
    stringtype A,B;
  /*  int a = 0;*/
    bool loop = true;
    int cho = 0;
    cout << "*****Welcome*****" << endl;
    while (loop)
    {
       
        cout << "Select from the given options::::- " << endl;
        cout << "1. Set values " << endl;
        cout << "2. Print Values" << endl;
        cout << "3. Max Length" << endl;
        cout << "4. To Copy String" << endl;
        cout << "5. To Compare Strings" << endl;
        cout << "6. Concatenate" << endl;
        cout << "7. Search Word" << endl;
        cout << "8. Search Character" << endl;
        cout << "9. Exit" << endl;
        cout << " Enter here = ";
        cin >> cho;

        switch (cho)
        {
            case 1:
            {
                string a = "by neveryone abid";
                string b = "bey everyone";

                A.setvalues(a, b);
                break;

            }
            case 2:
            {
                A.printvalues();
                break;
            }
            case 3:
            {
                /*int len = 0;*/
                cout << A.maxlength() << endl;
            }
            case 4:
            {
                string c = "Hello world";
                string d = "";
                A.copy(c, d);
            }
            case 5:
            {
                string e = "life is dificult";
                string f = "death is easy";
               int ans= A.compare(e, f);
               switch (ans)
               {
                    case 1:
                    {
                        cout << "String " << e << " is greater" << endl;
                        break;
                    }
                    case -1:
                    {
                        cout << "String " << f << " is greater" << endl;
                        break;
                    }
                    case 0:
                    {
                        cout << "Both are equal " << endl;
                        break;
                    }

               }
            }
            case 6:
            {
                string g = "adios";
                string h = " amigos";
                cout << A.concatenate(g, h) << endl;
                break;
            }
            case 7:
            {
               /* string a = "hello everyone";
                string b = "bey everyone";
                A.setvalues(a, b);*/
                string k = "aaa";
                cout << A.searchword(k) << endl;;

            }
            case 8:
            {
                char ch = 'v';
                cout << A.searchchar(ch) << endl;
            }
            case 9 :
            {
                loop = false;
               /* a = 1;*/
                break;
            }

            default:
                cout << "invalid action..." << endl;
                break;
        }
    }
}