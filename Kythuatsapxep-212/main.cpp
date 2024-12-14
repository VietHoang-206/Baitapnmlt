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
bool nt(int n)
{
    int S = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i ==0)
            S = S + 1;
    }
    if(S == 2)
        return true;
    return false;
}
void sapxeptang(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(nt(arr[i]))
        {for(int h = i + 1; h < n; h++)
    {
        if(nt(arr[h]) && arr[i] > arr[h])
        {
            int temp = arr[i];
            arr[i] = arr[h];
            arr[h] = temp;
        }
    }
        }

    }
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    cout << "Mang ban dau: " << endl;
    XuatMang(arr, n);
    sapxeptang(arr, n);
    cout << "Mang sau khi sap xep: " << endl;
    XuatMang(arr, n);
    return 0;
}

