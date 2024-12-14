#include <iostream>
#define MAX 100
using namespace std;
void NhapMang(float arr[], int &n)
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void XuatMang(float arr[0], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
float nhonhat(float arr[], int n)
{
    float sonhonhat = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < sonhonhat)
            sonhonhat = arr[i];
    }
    return sonhonhat;
}
int main()
{
    float arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    nhonhat(arr, n);
    cout << nhonhat(arr, n);
    return 0;
}
