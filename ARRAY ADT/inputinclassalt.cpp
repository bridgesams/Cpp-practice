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

    void inputArray(int l)
    {
        int temp;
        cout << "Enter the elements: ";
        for (int i = 0; i < l; i++)
        {
            cin >> temp;
            ptr[i] = temp;
        }
    }

    void append(int x)
    {
        length++;
        if (length <= size)
            ptr[length - 1] = x;
        else
            cout << "Array out of bounds, try again";
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

    void deleteOne(int index)
    {
        if (index >= 0 && index <= length)
        {
            for (int i = index; i < length - 1; i++)
            {
                ptr[i] = ptr[i + 1];
            }
            length--;
        }
    }

    void linearSearch(int key)
    {
        int i = 0, flag = 0;
        for (i; i < length; i++)
        {
            if (ptr[i] == key)
            {
                flag = 1;
                break;
            }
        }
        if (flag = 1)
            cout << "Element found at index " << i << '\n';
        else
            cout << "Element not found" << '\n';
    }

    void binarySearch(int key)
    {
        int l, h, mid, flag = 0;
        l = 0;
        h = length - 1;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (ptr[mid] == key)
            {
                cout << "Element found at index " << mid;
                flag = 1;
                break;
            }
            else if (ptr[mid] > key)
            {
                h = mid - 1;
            }
            else
                l = mid + 1;
        }
        if (flag == 0)
        {
            cout << " Element not found ";
        }
    }

    int rbinarySearch(int l, int h, int key)
    {
        int mid;
        if (l <= h)
        {
            mid = (l + h) / 2;
            if (ptr[mid] == key)
                return mid;
            else if (key < ptr[mid])
                return rbinarySearch(l, mid - 1, key);
            else
                return rbinarySearch(mid + 1, h, key);
        }

        return -1;
    }

    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << ptr[i] << " ";
        }
        cout << '\n';
    }
    int getLength() { return length; }
};

int main()
{
    int n, l, temp;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter the length of the elements: ";
    cin >> l;

    Array arr(n, l);

    arr.inputArray(l);
    arr.display();
}