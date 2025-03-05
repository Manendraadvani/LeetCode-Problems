#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int mid_x = 2;
    int mid_y = 2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ele_x = 0;
    int ele_y = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                ele_x = i;
                ele_y = j;
            }
        }
    }
    int ans_x = abs(mid_x - ele_x);
    int ans_y = abs(mid_y - ele_y);
    cout << ans_x + ans_y;
    return 0;
}