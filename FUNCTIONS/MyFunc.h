template <class T>
T add(T a, T b)
{
    return a+b;
}

int reverse(int n)
{
    int r=0;
    while(n!=0)
    {
        r=r*10+n%10;
        n/=10;
    }
    return r;
}

double focalLength(double u, double v)
{
    double f;
    f=(u*v)/(u+v);
    return f;
}

double centigrade(double f)
{
    double c;
    c=(5/9.0)*(f-32);
    return c;
}

template <class T>
T maximumof2(T a,T b)
{
    return a>b?a:b;
}

template <class T>
T maximumof3(T a,T b,T c)
{
    return (a>b)&&(a>c)?a:(b>c)?b:c;
}

int hcf(int a,int b)
{
    int i,x,small;
    small=a<b?a:b;
    for(int i=1;i<=small;i++)
    {
        if(a%i==0 && b%i==0)
        x=i;
    }
    return x;
}

int lcm(int a,int b)
{
    int small=a<b?a:b;
    int lcm;
    for(int i=1;i>=a*b;i=i+small)
    {
        if(a%i==0 && b%i==0)
        lcm=i;
    }
    return lcm;
}

int factorial(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}

int numfactors(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        c++;
    }
    return c;
}

