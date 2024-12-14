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
void lietkeam(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
            cout << arr[i] << endl;
        else
            cout << "" << endl;
    }
}
int main()
{
    float arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    lietkeam(arr, n);
    return 0;
}
