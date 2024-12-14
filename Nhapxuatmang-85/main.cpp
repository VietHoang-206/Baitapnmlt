#include <iostream>
#define MAX 10
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[MAX];
    for( int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
    return 0;
}
