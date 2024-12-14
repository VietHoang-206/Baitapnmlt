#include <iostream>
#define MAX 100
using namespace std;
void NhapMang( float arr[], int &n)
{
    for(int  i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
    cout << endl;
}
void XuatMang(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
int tanxuat(float arr[], int n, float &x)
{
    int S = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
            S = S + 1;
    }
    return S;
}
int main()
{
    float arr[MAX];
    int n;
    float x;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap n = ";
    cin >> n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    tanxuat(arr, n, x);
    cout << tanxuat(arr, n, x);
    return 0;
}
