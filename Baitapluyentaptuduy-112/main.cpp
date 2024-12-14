#include <iostream>
#include <cstdlib>
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
float gannhat(float arr[], int n, float &x)
{
    float S = abs(x - arr[0]);
    float T;
    for(int i = 1; i < n; i++)
    {
        if(S > abs(x - arr[i]))
            {
             S = abs(x - arr[i]);
             T = arr[i];
            }
    }
    return T;
}
int main()
{
    float arr[MAX];
    int n;
    float x;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap mang n = ";
    XuatMang(arr, n);
    NhapMang(arr, n);
    gannhat(arr , n, x);
    cout << gannhat(arr, n, x);
    return 0;
}
