#include <iostream>
using namespace std;
int main()
{
    while (true) // I put all the code in a while loop so when the code is done the cmd window wouldnt close and the program starts again.
    {
        string x[4] = {"+", "-", "*", "/"};
        string oprator = "";
        string str = "";
        int opratorPos = 0;
        int sum;
        cout << "Enter yor opration please: (num1)(oprator)(num2)" << endl;
        cin >> str;
        cout << str << "= ";
        for (int i = 0; i < 4; i++)
        {
            if (str.find(x[i]) > 18446744073) // when the find() function cant find "x[i]" it gives a big number that starts with "18446744073" so I just used it.
            {
                continue;
            }
            else
            {
                opratorPos = str.find(x[i]);
                oprator = x[i];
                if (oprator == "+")
                {
                    sum = stoi(str.substr(0, opratorPos)) + stoi(str.substr(opratorPos + 1, str.length())); // substr() function extract an string from string and then I converted the string ti int by stoi() methode and used it in calculation as a number.
                }
                else if (oprator == "-")
                {
                    sum = stoi(str.substr(0, opratorPos)) - stoi(str.substr(opratorPos + 1, str.length()));
                }
                else if (oprator == "*")
                {
                    sum = stoi(str.substr(0, opratorPos)) * stoi(str.substr(opratorPos + 1, str.length()));
                }
                else if (oprator == "/")
                {
                    sum = stoi(str.substr(0, opratorPos)) / stoi(str.substr(opratorPos + 1, str.length()));
                }
                cout << sum << endl;
                break;
            }
        }
    }
}