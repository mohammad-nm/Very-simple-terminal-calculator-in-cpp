#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        string x[4] = {"+", "-", "*", "/"};
        string num1 = "";
        string num2 = "";
        string oprator = "";
        string str = "";
        int opratorPos = 0;
        int sum;
        cout
            << "Enter yor opration please: (num1)(oprator)(num2)" << endl;
        cin >> str;
        cout << str << "= ";
        for (int i = 0; i < 4; i++)
        {

            // cout << str.find(x[i]) << endl;
            if (str.find(x[i]) > 18446744073)
            {
                continue;
            }
            else
            {
                // cout << x[i] << "\n";
                opratorPos = str.find(x[i]);
                oprator = x[i];
                // cout << str.substr(0, opratorPos) << endl;
                // cout << str.substr(opratorPos + 1, str.length()) << endl;
                if (oprator == "+")
                {
                    sum = stoi(str.substr(0, opratorPos)) + stoi(str.substr(opratorPos + 1, str.length()));
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