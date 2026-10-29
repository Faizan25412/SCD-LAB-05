#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 3, 8, 1, 2};
    int key = 8;
    int found = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            found = i;
            break;
        }
    }
    if (found != -1)
    {
        cout << "Element " << key << " found at index " << found << endl;
    }
    else
    {
        cout << "Element " << key << " not found" << endl;
    }
    return 0;
}
