#include <iostream>
#define MAX 100
#include <cstdlib>
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
float timx(float arr[], int n) // ham so sanh tri tuyet doi so lon nhat va so be nhat
{
    return abs(benhat(arr, n)) > abs(lonnhat(arr, n)) ? benhat(arr, n) : lonnhat(arr, n);
}
int main()
{
    float arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    timx(arr, n);
    cout << "Doan can tim la [" << - abs(timx(arr, n)) << "," << abs(timx(arr, n)) << "]" ;
    return 0;
}
