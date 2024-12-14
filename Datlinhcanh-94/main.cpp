#include <iostream>
#define MAX 100
using namespace std;
void NhapMang(int arr[], int &n)
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void XuatMang(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
bool sochan(int n)
{
    if(n % 2 == 0)
        return true;
    return false;
}
int vitrichandau(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(sochan(arr[i]))
            return i;
    }
    return -1;
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    vitrichandau(arr, n);
    cout << vitrichandau(arr, n);
    return 0;
}
