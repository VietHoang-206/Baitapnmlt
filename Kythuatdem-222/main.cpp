#include <iostream>
#define MAX 100
using namespace std;
void NhapMang(int arr[], int n)
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
void taomangchanle(int arr[], int b[], int n)
{
    NhapMang(arr, n);
    cout << "Mang b la: " << endl;
    for(int i = 0; i < n; i++)
{
        if(arr[i] % 2 == 0)
    {
        b[i] = 0;
        cout << b[i] << endl;
    }
        else
    {
        b[i] = 1;
        cout << b[i] << endl;
    }
}
}
int main()
{
    int arr[MAX];
    int b[MAX];
    int n;
    cout << "Nhap n = ";
    cin >> n;
    cout << "Mang a la: " << endl;
    taomangchanle(arr, b, n);

}
