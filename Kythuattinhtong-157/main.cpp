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
bool kiemtra5(int n)
{
    n = abs(n);
    if(n > 10)
    {
        n = n / 10;
        if(n % 5 == 0)
            return true;
        return false;
    }
}
int tongchuc(int arr[], int n)
{
    int S = 0;
    for(int i = 0; i < n; i++)
    {
        if(kiemtra5(arr[i]))
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
    cout << tongchuc(arr, n);
    return 0;
}
