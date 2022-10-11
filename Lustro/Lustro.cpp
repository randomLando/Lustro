#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number;

    cin >> number;

    string copy = number;

    reverse(copy.begin(), copy.end());
    copy.erase(0, min(copy.find_first_not_of('0'), copy.size() - 1));
    cout << copy;
}