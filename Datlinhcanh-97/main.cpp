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
bool giatriduong(float n)
{
    if( n > 0)
        return true;
    return false;
}
float vtduongnhonhat(float arr[], int n)
{
    int index = -1;
    float duongnhonhat = 1e9;
    for(int i = 0; i < n; i++)
    {
        if(giatriduong(arr[i]))
        {
            if(arr[i] < duongnhonhat )
                {duongnhonhat = arr[i];
                index = i;}
        }
    }
    return index;
}
int main()
{
    float arr[MAX];
    int n;
    NhapMang(arr, n);
    XuatMang(arr, n);
    vtduongnhonhat(arr, n);
    cout << vtduongnhonhat(arr ,n);
    return 0;
}
