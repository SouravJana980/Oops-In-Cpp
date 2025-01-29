// // Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class vector
{
public:
    int size;
    int capacity;
    int *arr;
    vector()
    { // default constructor
        int size = 0;
        int capacity = 1;
        arr = new int[1];
    }
    void add(int element)
    {
        if (size == capacity)
        {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }

            arr = arr2;
        }

        arr[size] = element;
        size++;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    vector v;
    v.add(1);
    v.print();
    v.add(2);
    v.print();
    v.add(3);
    v.print();
    v.add(4);
    v.print();
    return 0;
}
