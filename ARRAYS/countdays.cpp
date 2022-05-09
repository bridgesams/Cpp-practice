#include <iostream>
using namespace std;

bool isLeap(int y)
{
    bool isLeapYear = false;
   if (y % 4 == 0) {
      if (y % 100 == 0) {
         if (y % 400 == 0) {
            isLeapYear = true;
         }
      }
      else isLeapYear = true;
   }
   return isLeapYear;
}

int main()
{
    int day,month,year;
    cout<<"Enter Day: ";
    cin>>day;
    cout<<"\nEnter Month: ";
    cin>>month;
    cout<<"\nEnter Year: ";
    cin>>year;
    
    if(month==2 && day>29)
    {
        cout<<"Invalid Date";
        return 0;
    }

    int day2,month2,year2;
    cout<<"\nEnter second Day: ";
    cin>>day2;
    cout<<"\nEnter second Month: ";
    cin>>month2;
    cout<<"\nEnter second Year: ";
    cin>>year2;

    if(month2==2 && day>29)
    {
        cout<<"Invalid Date";
        return 0;
    }

    if(month>12||month2>12||day>31||day2>31)
    {
        cout<<"Invalid Date";
        return 0;
    }

    int total=0,diff,yearsum=0,firstmonthsum=0,secondyearsum=0;

    int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int ml[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    
    //yearsum
    for(int i=year+1;i<year2;i++)
    {
        if(isLeap(i))
        yearsum=yearsum+366;
        else
        yearsum=yearsum+365;
    }

    //first year's remaining days sum
    if(isLeap(year))
    {
        for(int i=month+1;i<=12;i++)
        {
            firstmonthsum=firstmonthsum+ml[i];
        }
        firstmonthsum+=ml[month]-day;
    }
    else
    {
        for(int i=month+1;i<=12;i++)
        {
            firstmonthsum=firstmonthsum+m[i];
        }
        firstmonthsum+=m[month]-day;
    }

    //second year's days sum

    if(isLeap(year2))
    {
        for(int i=1;i<=month2;i++)
        {
            secondyearsum=secondyearsum+ml[i];
        }
        secondyearsum+=day2;
    }
    else
    {
        for(int i=1;i<month2;i++)
        {
            secondyearsum=secondyearsum+m[i];
        }
        secondyearsum+=day2;
    }
    total=firstmonthsum+secondyearsum+yearsum;
    cout<<"\nTotal Days: "<<total<<" days";
    return 0;
}








/*
int main()
{
    int day,month,year;
    cout<<"Enter Day: ";
    cin>>day;
    cout<<"\nEnter Month: ";
    cin>>month;
    cout<<"\nEnter Year: ";
    cin>>year;
    
    int day2,month2,year2;
    cout<<"\nEnter second Day: ";
    cin>>day2;
    cout<<"\nEnter second Month: ";
    cin>>month2;
    cout<<"\nEnter second Year: ";
    cin>>year2;

    int total=0,diff;

    int m[]={31,28,31,30,31,30,31,30,31,30,31,30};
    int ml[]={31,29,31,30,31,30,31,30,31,30,31,30};

    for(int i=year+1;i<year2;i++)
    {
        if(isLeap(i))
        {
            total=total+366;
        }
        else
        {
            total=total+365;
        }
    }

    if(isLeap(year))
    {
        diff=ml[month-1]-day;
        for(int i=month;i<12;i++)
        {
            diff+=ml[i];
        }
    }
    else
    {
        diff=m[month-1]-day;
        for(int i=month;i<12;i++)
        {
            diff+=m[i];
        }
    }
    diff+=total;
    
    for(int i=0;i<month2;i++)
    {
        if(isLeap(i))
        {
            diff+=ml[i];
        }
        else
        {
            diff+=m[i];
        }
    }
    cout<<diff;
    return 0;
}
*/