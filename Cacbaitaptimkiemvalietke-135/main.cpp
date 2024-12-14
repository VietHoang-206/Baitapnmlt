#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;
void NhapMang(int arr[], int &n)
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
    cout << endl;
}
void XuatMang(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
void Sosanh(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > abs(arr[i+1]))
        {
            cout << arr[i] << endl;
        }
    }
}
int main()
{
   int arr[MAX];
   int n;
   NhapMang(arr, n);
   XuatMang(arr, n);
   Sosanh(arr, n);
   return 0;
}
