#include <iostream>
#define MAX 100
using namespace std;
void NhapXuatMang(int arr[], int n)
{
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
void hamtangdan(int arr[],  int n)
{
    for(int i = 0; i < n; i++)
    {
        int key = arr[i];
       int j = i - 1;
       while(j >= 0 && arr[j] > key)
       {
            arr[j + 1] = arr[j];
            j--;
       }
       arr[j + 1] = key;
    }
}
int thembaotoan(int arr[], int n, int x)
{
    hamtangdan(arr, n);
    int i;
    for(int i = n - 1; i >= 0 && arr[i] > x; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[i+1] = x;
    n++;
    return i + 1;
}
int main()
{
    int arr[MAX];
    int n;
    cout << "Nhap n = ";
    cin >> n;
    NhapXuatMang(arr, n);
    int x;
    cout << "Nhap x = ";
    cin >> x;
    int h = thembaotoan(arr, n, x);
    XuatMang(arr, n);
    cout << "Da chen " << x << " vao vi tri " << h ;
    return 0;
}
