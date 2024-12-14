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
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            S = S + i;
    }
    if(n == S)
        return true;
    return false;
}
int ktinhchat(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(sohoanthien(arr[i]))
            return 1;
    }
    return 0;
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    cout << ktinhchat(arr, n);
    return 0;
}
