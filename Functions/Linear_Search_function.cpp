#include <iostream>
using namespace std;

int search(int A[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(key==A[i])
        {
            return i;
        }
    }
    return -1;
}
int main ()
{
    int Array[]={6,3,67,45,78,66,88};
    int key;
    cout<<"Enter element to be searched: ";
    cin>>key;
    cout<<"Element found at index "<<search(Array, 7, key)<<endl;
    system("pause");
    return 0;
}