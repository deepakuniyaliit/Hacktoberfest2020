#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    vector <int> user_array;
    int one = 0, zero = 0;
    cout << "enter the number of inputs you want to give:::" << endl;
    int input;
    cin >> input;
    for (int i = 0;i < input;i++)
    {
        int in;
        cout << "enter the numbers in 3..... 2.....1..........:";
        cout << "go" << endl;
        cout << "enter number " << 1+i << endl;
        cin >> in;
        user_array.push_back(in);
 
    }
    for (int i = 0;i < input;i++)
    {
        if (user_array[i] == 0)
        {
            zero += 1;
        }
        else 
        {
            one += 1;
        }

    }
    for (int i = 0;i <one;i++)
    {
        cout << "1" << endl;

    }
    for (int i = 0;i <zero;i++)
    {
        cout << "0" << endl;

    }
}

