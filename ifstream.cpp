#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream file("text.txt");
    if (file)
    {
        string detail;
        while (getline(file, detail))
        {
            cout << detail << endl;
        }
    }
    else
    {
        cout << "Error in opening file" << endl;
    }
}