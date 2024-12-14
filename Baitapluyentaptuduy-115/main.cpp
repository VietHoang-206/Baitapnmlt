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
float dautien(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
       if(arr[i] > 2003)
            return arr[i];
    }
    return 0;
}
int main()
{
    float arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    dautien(arr, n);
    cout << dautien(arr, n);
    return 0;
}
