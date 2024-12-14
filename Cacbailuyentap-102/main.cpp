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
float amdau(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
            return arr[i];
    }
    return 1;
}
int main()
{
    float arr[MAX];
    int n;
    XuatMang(arr, n);
    NhapMang(arr, n);
    amdau(arr, n);
    cout << amdau(arr, n);
    return 0;
}
