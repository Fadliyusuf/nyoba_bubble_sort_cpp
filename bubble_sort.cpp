#include<iostream>

using namespace std;

void sort( int *arr, int count, int (*order) (int,int))
{
    int i,j,batas=0;
    
    for(i=0; i<count; i++)
    {
        batas=0;
        for(j=0; j<count-i-1; j++)
        {
            if((*order) (*(arr+j),*(arr+j+1)))
            {
                //(*order) (int,int)
                int temp = *(arr+j);
                *(arr+j) =*(arr+j+1);
                *(arr+j+1) = temp;

                batas++;
            }
        }
        if(batas == 0)
        break;
    }
      
}

int CheckBigger(int a, int b) {return a>b;}
int CheckSmaller(int a, int b) {return a<b;}

int main()
{
    int arr[5] = {5,4,7,9,1};
    int cont = sizeof(arr)/sizeof(arr[0]);
    //order = 
    //int array = *arr;
    cout<<  "array masukan sebelum diurutkan : "<<endl;
    
    for( int i=0; i<cont; i++)
    {
        cout<< *(arr+i) << " ";
    }
    cout<<endl;
    cout<<  "array masukan setelah diurutkan : "<<endl;
    cout<<  "Dari kecil ke besar  : ";
     sort(arr, cont, CheckBigger);
    for( int i=0; i<cont; i++)
    {
        cout<< *(arr+i) << " ";
    }
    cout<<endl;
    cout<<  "Dari besar ke kecil  : ";
     sort(arr, cont, CheckSmaller);
    for( int i=0; i<cont; i++)
    {
        cout<< *(arr+i) << " ";
    }
    cout<<endl;

}