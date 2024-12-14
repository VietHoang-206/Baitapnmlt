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
void chen(float arr[], int &n, int vitricanchen, float socanchen )
{
    for(int i = n; i > vitricanchen; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[vitricanchen] = socanchen;
    n++;
}
int main()
{
    float arr[MAX];
    int n;
    int vt;
    float socanchen;
    NhapMang(arr, n);
    XuatMang(arr, n);
    cout << "\n Nhap vi tri can chen ";
    cin >> vt;
    cout << "\n Nhap so can chen ";
    cin >> socanchen;
    chen(arr, n, vt, socanchen);
    XuatMang(arr, n);
    return 0;
}
