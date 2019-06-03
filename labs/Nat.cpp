#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void max_heapify(int *a, int i, int size);
void build_max_heap(int *a, int i, int size);
void heapsort(int *a, int i, int size);
int parent(int i);
int left(int i);
int right(int i);

int main(int argc, char *argv[])
{
    srand(time(NULL));


    int *a;
    int size,i;
    cout << "Enter size: ";
    cin >> size ;
    i=0;
    a=new int(size);
    for(int i=0; i<size; i++)
      {
        a[i] = (rand() % 100 - 50);
        cout << a[i] << " ";
      }
    heapsort(a,i,size);

    cout << " " << '\n';

    std::cout << "Sort Array:" << '\n';
    for(i=0; i<size; i++)
      {
        cout << a[i] << " ";
      }
        delete [] a;
    system ("pause");
}
int parent(int i)
  {
    return (i/2);
  }
int left(int i)
  {
    return (2*i);
  }
int right(int i)
  {
    return ((2*i)+1);
  }
void max_heapify(int *a, int i, int size)
{
    int _left, _right;
    int largest;
    _left=left(i);
    _right=right(i);
    if((_left<=size) && (a[_left]>a[i]))
      {
        largest=_left;
      }
    else
      {
        largest=i;
      }
    if((_right<=size) && (a[_right]>a[largest]))
      {
        largest=_right;
      }
    if(largest!=i)
      {
        swap(a[i], a[largest]);
        max_heapify(a,largest,size);
      }
}
void build_max_heap(int *a, int i, int size)
{
    i=size;
    for(int i=(size/2); i>=0; i--)
      {
        max_heapify(a,i,size);
      }
}
void heapsort(int *a, int i, int size)
{
    int t=0;
    build_max_heap(a,i,size);
    for(int i=size; i>=1; i--)
      {
        swap(a[0], a[i]);
        size=size-1;
        max_heapify(a,0,size);
      }
}
