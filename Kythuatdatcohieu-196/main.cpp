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
}
void XuatMang(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
int tontaichan(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
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
    cout << tontaichan(arr, n);
    return 0;
}
