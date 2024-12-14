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
int Tongduong(float arr[], int n)
{
    int S = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
            continue;
        else
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
    Tongduong(arr, n);
    cout << Tongduong(arr, n);
    return 0;
}

