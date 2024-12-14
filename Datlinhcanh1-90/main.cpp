#include <iostream>
#define MAX 100
using namespace std;
void NhapMang( int arr[], int &n)
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void XuatMang( int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
int lonnhat( int arr[], int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    lonnhat(arr, n);
    int max = lonnhat(arr, n);
    cout << max;
    return 0;
}
