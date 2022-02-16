//Today I wrote efficient code for inbuilt function of binary Heap.
#include <iostream>
using namespace std;
struct minheap
{

    int *arr;
    int capacity;
    int size;

    minHeap(int c)
    {
        int size = 0;
        capacity = c;
    }

    int parent(int i) { return (i - 1) / 2; }

    int left(int i) { return (2 * i + 1); }

    int right(int i) { return (2 * i + 2); }
    void insert(int x)
    {
        if (size == capacity)
        {
            return;
        }
        size++;
        arr[size - 1];
        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i],arr[parent(i)];
            i=parent(i);
        }
    }
    void minheapify(int x)
    {
        int lt = left(i);
        int rt = right(i);
        int smallest = i;
        if (lt < size && arr[lt] < arr[i])
        {
            smallest = lt;
        }
        if (rt < size && arr[rt] < arr[i])
        {
            smallest = rt;
        }
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minheapify(smallest);
        }
    }
    int extractmin()
    {
        if (size == 0)
        {
            return int_max;
        }
        if (size == 1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0], arr[size - 1]);
        size--;
        minheapify(0);
        return arr[size];
    }
    void decreasekey(int i, int key)
    {
        arr[i] = key;
        while (i != 0 && arr[i] < parent[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void deletee(int i)
    {
        decreasekey(i, arr[size - 1]);
        size--;
    }
    void buildheapify()
    {
    }
};

int main()
{
    minheap h(10);
    h.left(10);
    h.left(10);
    h.left(10);
    h.left(10);
    h.right(10);

    return 0;
}