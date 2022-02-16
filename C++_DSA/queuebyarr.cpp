#include <iostream>
using namespace std;
struct queuebyarr
{
    int size, cap;
    int *arr;
    queuebyarr(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    int front = 0;
    int rear = 0;
    void enque(int x)
    {
        arr[size] = x;
        cout << x << endl;
        size++;
        rear = size - 1;
    }
    void deque()
    {
        cout << arr[size] << endl;
        size--;
        rear = size - 1;
    }
    int getfront()
    {
        return arr[0];
    }
    int getrear()
    {
        // if (size==0)
        // {
        //     return arr[0];
        // }
        // else
        {
            return arr[size - 1];
        }
    }
    bool iffull()
    {
        if (cap == size + 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool isempty()
    {
        if (size == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int sizee()
    {
        return size;
    }
};

int main()
{
    int c;
    cout << "enter capacit y" << endl;
    cin >> c;

    queuebyarr obj(c);
    int k=obj.isempty();
    obj.enque(11);
    obj.enque(19);

    cout<<k<<endl;
    return 0;
}