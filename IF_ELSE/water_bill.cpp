#include <iostream>
using namespace std;
int main()
{
    int l,net;
    cin>>l;
    if(l<15000)
    cout<<"free!";
    else if (l>15000 && l<30000)
    {
        net=200*l;
        cout<<net;
    }
    else if (l>30000 && l<45000)
    {
        net=15000*200+(l-15000)*600;
        cout<<net;
    }
    else
    {
        net=15000*200+15000*600+(l-30000)*1000;
        cout<<net;
    }
}