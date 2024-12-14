#include <iostream>
#define MAX 100
using namespace std;

// Hàm nhập và xuất mảng
void NhapXuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
    cout << endl;
}

void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}

// Hàm sắp xếp mảng theo thứ tự tăng dần (insertion sort)
void hamtangdan(int arr[], int n)
{
    for (int i = 1; i < n; i++)  // Bắt đầu từ i = 1, vì phần tử đầu tiên không cần sắp xếp
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Hàm chèn phần tử x vào mảng đã sắp xếp
int thembaotoan(int arr[], int &n, int x)
{
    hamtangdan(arr, n);  // Sắp xếp mảng trước khi chèn
    int i;
    // Tìm vị trí chèn x
    for (i = n - 1; i >= 0 && arr[i] > x; i--)
    {
        arr[i + 1] = arr[i];  // Dịch chuyển phần tử lớn hơn x sang phải
    }
    arr[i + 1] = x;  // Chèn x vào vị trí thích hợp
    n++;  // Tăng kích thước mảng lên 1
    return i + 1;  // Trả về chỉ số vị trí đã chèn
}

int main()
{
    int arr[MAX];
    int n;
    cout << "Nhap n = ";
    cin >> n;

    // Kiểm tra xem n có hợp lệ không
    if (n < 1 || n > MAX)
    {
        cout << "Nhap n sai! Vui long nhap n trong khoang tu 1 den " << MAX << endl;
        return 1;
    }

    // Nhập mảng
    NhapXuatMang(arr, n);

    // Nhập phần tử cần chèn
    int x;
    cout << "Nhap x = ";
    cin >> x;

    // Thực hiện chèn và lấy vị trí chèn
    int h = thembaotoan(arr, n, x);

    // Xuất mảng sau khi chèn
    XuatMang(arr, n);

    cout << "Da chen " << x << " vao vi tri " << h << endl;

    return 0;
}
