#include <iostream>
#define MAX 100
using namespace std;
void NhapMang(float arr[], int &n)
{
   cin >> n;
   for(int i = 0; i < n; i++)
   {
       cout << "a[" << i << "] = ";
       cin >> arr[i];
   }
}
void XuatMang(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
bool ht(int n)
{
    int S = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            S = S + i;
    }
    if( n == S)
        return true;
    return false;
}
void sapxeptang(float arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(ht(arr[i]))
        for(int h = i + 1; h < n; h++)
    {
        if(ht(arr[h]) && arr[i] > arr[h])
        {
            float temp = arr[i];
            arr[i] = arr[h];
            arr[h] = temp;
        }
    }

    }
}
int main()
{
    float arr[MAX];
    int n;
    NhapMang(arr, n);
    cout << "Mang ban dau: " << endl;
    XuatMang(arr, n);
    sapxeptang(arr, n);
    cout << "Mang sau khi sap xep: " << endl;

    XuatMang(arr, n);
    return 0;
}

