#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;        // s is a stack of strings
    s.push("first");
    s.push("second");
    s.push("third");
    s.push("fourth");
    cout << "s.size() = " << s.size() << endl;
    while(!s.empty())
    {
        cout << "s.top() = " << s.top() << endl;
        s.pop();
    }
    cout<< "s.size() = " << s.size() << endl;
}