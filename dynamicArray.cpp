#include <iostream>
using namespace std;
class dynamicArray
{
    int *data;
    int next;
    int capacity;

public:
    dynamicArray()
    {
        data = new int[5];
        capacity = 5;
        next = 0;
    }
    dynamicArray(dynamicArray const &d)
    {
        this->data = new int[d.capacity];
        for (int i = 0; i < d.next; i++)
        {
            this->data[i] = d.data[i];
        }
        this->capacity = d.capacity;
        this->next = d.next;
    }
    void operator=(dynamicArray const &d)
    {
        this->data = new int[d.capacity];
        for (int i = 0; i < d.next; i++)
        {
            this->data[i] = d.data[i];
        }
        this->capacity = d.capacity;
        this->next = d.next;
    }
    void add(int element)
    {

        if (next == capacity)
        {
            int *data1 = new int[2 * capacity];
            for (int i = 0; i < next; i++)
            {
                data1[i] = data[i];
            }
            delete[] data;
            data = data1;
            capacity *= 2;
        }
        data[next] = element;
        next++;
    }
    void add(int i, int element)
    {
        if (next < capacity)
        {
            data[i] = element;
        }
        else if (next == capacity)
        {
            add(element);
        }
        else
        {
            return;
        }
    }
    int get(int i)
    {
        if (i < next)
        {
            return data[i];
        }
        else
            return -1;
    }
    void print()
    {
        for (int i = 0; i < next; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    dynamicArray d1;
    d1.add(74);
    d1.add(64);
    d1.add(54);
    d1.add(44);
    d1.add(34);
    d1.add(24);
    d1.add(14);
    dynamicArray d2;
    d2 = d1;
    dynamicArray d3(d2);
    cout<<d3.get(5)<<endl;
    d1.add(4, 100);
    d2.print();
    d1.print();
    d3.print();
}