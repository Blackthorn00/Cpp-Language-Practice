#include <iostream>


using namespace std;
int main()
{
    int A[10] = {2,5,6,8,9,10,12,15,16,17}, l=0, h=9, key;
    cout<<"Enter key to search array: ";
    cin>>key;

    while(l<=h)
    {
        int mid = (l+h)/2;
        if(key==A[mid])
        {
            cout<<"Key was found at position: "<<mid<<endl;
            system("pause");
            return 0;
        }    
        else if (key<A[mid])
        {
            h=mid-1;
        }    
        else 
        {
            l=mid+1;
        }    

        
    }
    cout<<"Key was not found."<<endl;
	system("pause");
	return 0;
	
}