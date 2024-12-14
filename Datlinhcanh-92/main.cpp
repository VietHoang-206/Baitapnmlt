#include <iostream>
#define MAX 100
using namespace std;
void NhapMang(int arr[], int &n)
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
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
int sochan_cuoi(int arr[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] % 2 == 0)
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
    sochan_cuoi(arr, n);
    int sc = sochan_cuoi(arr ,n);
    cout << sc;
    return 0;
}
