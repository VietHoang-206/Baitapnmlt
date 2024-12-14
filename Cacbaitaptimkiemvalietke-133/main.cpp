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
    cout << endl;
}
void XuatMang(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
void lietke(float arr[], int n, float x, float y)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= x && arr[i] <= y)
            cout << arr[i] << endl;
    }
}
int main()
{
    float arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    float x, y;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap y = ";
    cin >> y;
    lietke(arr, n, x, y);
    return 0;
}
