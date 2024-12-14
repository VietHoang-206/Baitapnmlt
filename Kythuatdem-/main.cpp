#include <iostream>
#define MAX 100
using namespace std;
void NhapMangGiamDan(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] < arr[i])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j] = arr[i];
    }
}
void XuatMang(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
int main()
{
    float arr[MAX];
    int n;
    cout << "Nhap so phan tu cua mang: n = ";
    cin >> n;
    cout << endl;
    NhapMangGiamDan(arr, n);
    XuatMang(arr, n);
    return 0;
}
