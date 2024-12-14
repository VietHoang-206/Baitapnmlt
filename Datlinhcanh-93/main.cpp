#include <iostream>
#define MAX 100
using namespace std;
void NhapMang(float arr[], int &n)
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void XuatMang(float arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
float vitrinhonhat(float arr[], int n)
{
    float nhonhat = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < nhonhat)
        {
            nhonhat = arr[i];
            return i;
        }

    }
    return 0;
}
int main()
{
    float arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    vitrinhonhat(arr, n);
    cout << vitrinhonhat(arr, n);
    return 0;
}
