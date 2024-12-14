#include <iostream>
#define MAX 100
using namespace std;
void NhapMang(int arr[], int &n)
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
}
void XuatMang(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << "a[" << i << "] = " << arr[i] << endl;
}
int duongdau(int arr[], int n)
{
   for(int i = 0; i < n; i++)
   {
       if(arr[i] > 0 )
        return arr[i];
   }
   return -1;

}
int main()
{
    int arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr , n);
    duongdau(arr, n);
    int duongdautien = duongdau(arr, n);
    cout << duongdautien;
    return 0;
}
