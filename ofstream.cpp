#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream file("text.txt");
    if (file)
    {
        file << "Name : xyz" << endl;
        file << "Age : 25" << endl;
        file << "Address : github" << endl;
    }
    else
    {
        cout << "Error in opening file" << endl;
    }
}