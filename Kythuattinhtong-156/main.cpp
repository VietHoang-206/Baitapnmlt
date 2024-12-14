#include <iostream>
#include <cstdlib>
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
bool kiemtrale(int n)
{
    n = abs(n);
    while(n >= 10)
    {
        n = n / 10;
    }
    return(n % 2 != 0);
}
int Tongdaule(int arr[], int n)
{
    int S = 0;
    for(int i = 0; i < n; i++)
    {
        if(kiemtrale(arr[i]))
            S = S + arr[i];
    }
    return S;
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    cout << Tongdaule(arr, n);
    return 0;
}
