#include <iostream>
using namespace std;
struct dqueuebyarr
{
    int size, cap, front;
    int *arr;
    dqueuebyarr(int c)
    {
        cap = c;
        size = 0;
        front = 0;
        arr = new int[cap];
    }

     //front = (front - 1 + cap) / cap;
   //int rear = (rear - 1 + cap) / cap;
    
   int rear=(front-1+size)%cap;

    void insertfront(int x)
    {
         front = (front - 1 + cap)% cap;
        //front = front + 1;
        arr[front] = x;
        cout << x << endl;
        size++;
        //   rear = (rear - 1 + cap) / cap;
    }
    void insertrear(int x)
    {
   int rear=(front+size)%cap;

        

        //   rear = (rear - 1 + cap) / cap;
        arr[rear] = x;
        cout << x << endl;
        size++;
        // front = (front - 1 + cap) / cap;
    }
    void delettefront()
    {
        front = (front+1)%cap;

        //front = (front - 1 + cap) / cap;
        size--;
        //rear = (rear - 1 + cap) / cap;
    }

    void deletterear()
    {
          rear = (front+size-1)%cap;
        //rear = (rear - 1)%cap;
        size--;
        // front = (front - 1 + cap) / cap;
    }
    int getfront()
    {
        return arr[front];
    }
    int getrear()
    {
        // if (size==0)
        // {
        //     return arr[0];
        // }
        // else
        {
            return (front+size-1)%cap;
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
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i];
            cout << "  ";
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

    dqueuebyarr obj(c);
    obj.insertfront(4);
    obj.insertfront(3);
    obj.insertfront(6);
    obj.insertrear(6);
    obj.deletterear();
    obj.delettefront();
    obj.insertfront(999);
    obj.print();
    

    return 0;
}