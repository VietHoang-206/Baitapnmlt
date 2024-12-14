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
void sapxeptang(float arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int h = i + 1; h < n; h++)
    {
        if(arr[i] > arr[h])
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
