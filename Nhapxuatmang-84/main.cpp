#include <iostream>
using namespace std;
#define MAX 10
int main()
{
    float n;
    cin >> n;
    float arr[MAX];
    for( int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
    return 0;
}
