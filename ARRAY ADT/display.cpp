#include <bits/stdc++.h>
using namespace std;

class Array
{
    int *ptr;
    int size;
    int length;

public:
    Array()
    {
        ptr = NULL;
        size = 0;
        length = 0;
    }

    Array(int sz, int l)
    {
        ptr = new int[sz];
        size = sz;
        length = l;
    }

    void insert(int index, int x)
    {
        ptr[index] = x;
    }

    void insertAt(int index, int x)
    {
        if (index >= 0 && index <= length)
        {
            for (int i = length - 1; i >= index; i--)
            {
                ptr[i + 1] = ptr[i];
            }
            ptr[index] = x;
            length++;
        }
    }

    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << ptr[i] << " ";
        }
    }
};

int main()
{
    int n, l, temp;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter the length of the elements: ";
    cin >> l;

    Array arr(n, l);

    cout << "Enter the elements: ";
    for (int i = 0; i < l; i++)
    {
        cin >> temp;
        arr.insert(i, temp);
    }
    arr.display();
    arr.insertAt(3, 69);
    arr.display();
}