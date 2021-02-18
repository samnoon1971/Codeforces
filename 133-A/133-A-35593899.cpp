#include <iostream>
#include <string>
using namespace std;
int main()
{
    string i;
    cin >> i;;
    if(i.find('H', 0)!= -1 || i.find('Q', 0)!=-1 || i.find('9', 0)!= -1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;

}