#include <iostream>
using namespace std;
int main()
{
    int day,month,year,x;
    cout<<"Enter Day: ";
    cin>>day;
    cout<<"\nEnter Month: ";
    cin>>month;
    cout<<"\nEnter Year: ";
    cin>>year;
    if(month>12||day>31)
    {
        cout<<"Invalid Date";
        return 0;
    }
    if(month==2 && day>29)
    {
        cout<<"Invalid Date";
        return 0;
    }

    int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int ml[]={0,31,29,31,30,31,30,31,31,30,31,30,31};

    cout<<"Enter number of days to be added: ";
    cin>>x;

    day+=x;
    for(int i=month;i<12;i++)
    {
        if(day<m[i])
        break;
        day-=m[i];
        month+=1;
        if(month>12)
        {
            month=1;
            year++;
        }
    }
    cout<<"New date: "<<day<<"/"<<month<<"/"<<year;
    return 0;
}