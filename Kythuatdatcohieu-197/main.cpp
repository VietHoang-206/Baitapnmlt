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
bool nt(int n)
{
    int S = 0;
    n = abs(n);
    for(int i = 1; i <= n; i++)
    {
        if( n % i == 0)
            S = S + 1;
    }
    if(S <= 2)
        return true;
    return false;
}
int tontainguyento(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(nt(arr[i]))
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
    cout << tontainguyento(arr, n);
    return 0;
}

