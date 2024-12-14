#include <iostream>
#include <cstdlib>
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
int demdoixung(int arr[], int n)
{
    int S = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            for(int m = 0; m < n; m++)
            {
                if(abs(arr[m]) == abs(arr[i]) && m != i)
                    S = S + 1;
            }
        }
    }
    return S;
}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    cout << demdoixung(arr, n);
    return 0;
}
