#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right);
int main(){
    int arr[] = { 2, 5 ,1 ,4};
    int n = sizeof(arr)/ sizeof(*arr);

    quicksort(arr, 0, n - 1);

    cout << "Setelah sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void quicksort(int arr[], int left, int right)
{
    int i = left;
    int j = right;
    int tmp;
    int pivot = arr[left];

    // partition
    while (i <= j)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i <= j)
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    // rekursif
    if (left < j)
        quicksort(arr, left, j);
    if (i < right)
        quicksort(arr, i, right);
}
