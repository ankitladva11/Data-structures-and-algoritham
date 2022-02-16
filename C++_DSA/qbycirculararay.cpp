#include <iostream>
using namespace std;
struct queuebyarrc
{
    int front;
    int size, cap;
    int *arr;
    queuebyarrc(int c)
    {
        cap = c;
        size = 0;
        front = 0;

        arr = new int[cap];
    }
    int rear = 0;
    void enque(int x)
    {
        rear = (front + size - 1) % cap;
        rear = (rear + 1) % cap;
        arr[rear] = x;
        cout << x << endl;
        size++;
        rear = size - 1;
    }
    void deque()
    {
        cout << arr[size] << endl;
        front = (front + 1) % cap;
        size--;
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

    queuebyarrc obj(c);
    int k = obj.isempty();
    obj.enque(11);
    obj.enque(19);

    cout << k << endl;
    return 0;
}