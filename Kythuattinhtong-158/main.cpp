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
float sosanh(float arr[], int n)
{
    float S = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[i-1])
            S = S + arr[i];
    }
    return S;
}
int main()
{
    float arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    cout << sosanh(arr, n);
    return 0;
}
