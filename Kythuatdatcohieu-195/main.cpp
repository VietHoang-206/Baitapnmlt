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
int haikhong(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] == 0 & arr[i+1] == 0)
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
    cout << haikhong(arr, n);
    return 0;
}
