#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int lol,lol1,lol2;
    int n,guess,prevguess=0,c=1;
    cout<<"Enter the value to guess:"; 
    cin>>n;
    cout<<'\n';
    cout<<"Enter your guess: ";
    cin>>guess;
    if(guess==n)
    {
        cout<<"correct on the first attempt!";
        return 0;
    }
    else
    {
    lol=abs(guess-n);
    if(lol<=10)
    cout<<"Warm! :D\n";
    else
    cout<<"Cold! D:\n";
    }
    while(guess!=n)
    {
        c++;
        cin>>guess;
        if(guess>100 && guess <1)
        {
            cout<<"Out of bounds :x Try again! \n";
            continue;
        }
        lol1=abs(n-guess);
        lol2=abs(prevguess-n);
        if(guess!=n)
        {
        if(lol1<lol2)
        cout<<"Warmer! \n";
        else
        cout<<"Colder \n";
        prevguess=guess;
        }
    }
    cout<<"Correct! Thanks for playing! You guessed it in "<<c<<" total guesses.";
    return 0;
}