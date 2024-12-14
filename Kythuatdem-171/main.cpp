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
int demchiahetbay(int arr[], int n)
{
    int S = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 7 == 0 && arr[i] > 0)
            S = S + 1;
    }
    return S;
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    cout << demchiahetbay(arr, n);
    return 0;
}
