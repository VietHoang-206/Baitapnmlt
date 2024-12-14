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
bool nguyento(int n)
{
    int S = 0;
    for( int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            S = S + 1;
    }
    if( S == 2)
        return true;
    return false;
}
int nguyentodau(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(nguyento(arr[i]))
            return arr[i];
    }
    return -1;
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    nguyentodau(arr, n);
    cout << nguyentodau(arr, n);
    return 0;
}
