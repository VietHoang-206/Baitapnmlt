#include <iostream>
#define MAX 10
using namespace std;
int main()
{
    float n;
    cin >> n;
    int arr[MAX];
    for( int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
    for( int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
