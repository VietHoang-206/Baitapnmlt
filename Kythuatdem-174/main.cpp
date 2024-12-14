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
int demtancung(int arr[], int n)
{
    int S = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 10 && arr[i] == 5)
            S = S + 1;
        else if(arr[i] > 10 && arr[i] % 10 == 5)
            S = S + 1;
    }
    return S;
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    cout << demtancung(arr, n);
    return 0;
}
