#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    cout<<"\n\tCalculator\t\n\n";
    char i;
    int n, j, k;
    static int r;
    cout << "Enter first number -- ";
    cin >> n;
    cout << "Enter second number -- ";
    cin >> j;
    cout << "Enter a symbol -- ";
    cin >> i;
    if (i == '+')
    {
        r = n + j;
        cout << "output: " << r << endl;
    }
    else if (i == '-')
    {
        r = n - j;
        cout << "output: " << r << endl;
    }
    else if (i == '*')
    {
        r = n * j;
        cout << "output: " << r << endl;
    }
    else if (i == '/')
    {
        r = n / j;
        cout << "output: " << r << endl;
    }
    else if (i == '%')
    {
        r = n % j;
        cout << "output: " << r << endl;
    }
    else
    {
        cout << "Wrong input ." << endl;
    }
    cout << "To continue maths press 1 key..else any key: \n\n";
    cout << "To continue calculation press 2 key..else any key: ";
    cin >> k;

    if (k == 1)
    {
        system("cls");
        main();
    }
    else if (k == 2)
    {
        b:
        cout<<"First number is -- ";
        cout << r<<endl;
        cout << "Enter second number -- ";
        cin >> n;
        cout << "Enter a symbol -- ";
        cin >> i;
        if (i == '+')
        {
            r = n + r;
            cout << "output: " << r << endl;
        }
        else if (i == '-')
        {
            r = r-n;
            cout << "output: " << r << endl;
        }
        else if (i == '*')
        {
            r = n * r;
            cout << "output: " << r << endl;
        }
        else if (i == '/')
        {
            r = r/n;
            cout << "output: " << r << endl;
        }
        else if (i == '%')
        {
            r = n % r;
            cout << "output: " << r << endl;
        }
        else
        {
            cout << "Wrong input ." << endl;
        }
    }
    else
        cout << "exit" << endl;
        cout << "To continue calculation press 1 key..else any key: \n\n";
        cout << "To exit from calculator press 2 key..else any key: ";
    cin >> k;
     if (k == 1)
    {
        system("cls");
        main();
    }
    else if(k==2)
    {
         goto b;
    }
    
}