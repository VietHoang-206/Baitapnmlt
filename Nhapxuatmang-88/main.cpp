#include <iostream>
#define MAX 10
using namespace std;
bool Sochan(int n)
{
    if(n % 2 == 0)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    int arr[MAX];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     for(int i = 0; i < n; i++)
    {
        if(Sochan(arr[i]))
            cout << arr[i] << " ";
    }


    return 0;
}
