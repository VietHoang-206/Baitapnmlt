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
float lonnhat(float arr[], int n)
{
    float solonnhat = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(solonnhat < arr[i])
            solonnhat = arr[i];
    }
    float L = solonnhat + 1;
    return L;
}
float benhat(float arr[], int n)
{
    float sobenhat = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(sobenhat > arr[i])
            sobenhat = arr[i];
    }
    float B = sobenhat - 1;
    return B;
}
int main()
{
    float arr[MAX];
    int n;
    XuatMang(arr, n);
    NhapMang(arr, n);
    lonnhat(arr, n);
    benhat(arr, n);
    cout << "Doan can tim la ["<< benhat(arr, n) << "," << lonnhat(arr, n) << "]";
    return 0;
}