#include <iostream>
#define MAX 100
using namespace std;
void NhapMangGiamDan(float arr[], int n)
{
    int sizemang = 0;
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
        int j = sizemang - 1;
        while(j >= 0 && arr[j] < arr[i])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = arr[i];
        sizemang++;
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
