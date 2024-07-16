#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> s;
    s.push("abba");
    s.push("sobba");
    s.push("mabba");
    cout<<"front"<<s.front()<<endl;
    int size=s.size();
    cout<<"size is"<<s.size()<<endl;

    return 0;
}
