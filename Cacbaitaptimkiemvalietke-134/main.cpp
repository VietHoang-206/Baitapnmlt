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
void lietke(int arr[], int n, float x, float y)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
            continue;
        if(arr[i] >= x && arr[i] <= y)
        {
            cout << arr[i] << endl;
        }
    }
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    int x, y;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap y = ";
    cin >> y;
    lietke(arr, n, x, y);
    return 0;
}
