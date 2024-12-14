#include <iostream>
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
bool sohoanthien(int n)
{
    int S = 0;
    for(int i = 0; i < n; i++)
    {
        if(i*i == n)
            S = S + 1;
    }
    if( S == 1)
        return true;
    return false;
}
int hoanthiendau(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(sohoanthien(arr[i]))
            return arr[i];
    }
    return -1;
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    hoanthiendau(arr, n);
    cout << hoanthiendau(arr, n);
    return 0;
}
