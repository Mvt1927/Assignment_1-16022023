#include "iostream"
#include "iomanip"
using namespace std;

int *reverseArray(int arr[], int size);
bool checkInput(int inputValue);

int main(int argc, char const *argv[])
{
    int numberElements = 0;
    cout << "Enter number of elements in the array : ";
    cin >> numberElements;
    if (!checkInput(numberElements))
    {
        cout << "No accept value < 1";
        return 1;
    }
    int arr[numberElements];
    for (int i = 0; i < numberElements; i++)
    {
        cout << "a[" << i << setw(5) << left << "] " << setw(7) << left << "= ";
        cin >> arr[i];
    }
    int *reversedArr = reverseArray(arr, numberElements);
    cout << "" << endl;
    cout << setfill('-');
    cout << setw(68) << "-" << endl;
    cout << setfill(' ');

    cout << setw(2) << left << "|";
    cout << setw(20) << left << "Position";
    cout << setw(2) << left << "|";
    cout << setw(20) << left << "Current Array";
    cout << setw(2) << left << "|";
    cout << setw(20) << right << "Reversed Array";
    cout << setw(2) << right << "|" << endl;

    cout << setfill('-');
    cout << setw(22) << left << "|";
    cout << setw(22) << left << "|";
    cout << setw(22) << left << "|";
    cout << setw(2) << right << "|" << endl;
    cout << setfill(' ');

    for (int i = 0; i < numberElements; i++)
    {
        cout << setw(2) << left << "|";
        cout << setw(20) << left << i;
        cout << setw(2) << left << "|";
        cout << setw(20) << left << arr[i];
        cout << setw(2) << left << "|";
        cout << setw(20) << right << reversedArr[i];
        cout << setw(2) << right << "|" << endl;
    }
    cout << setfill('-');
    cout << setw(68) << "-" << endl;
    cout << setfill(' ');

    return 0;
}

bool checkInput(int inputValue)
{
    if (inputValue < 1)
        return false;
    return true;
}

int *reverseArray(int arr[], int size)
{
    int *reversedArr = new int[size];

    for (int i = 0; i < size; i++)
        reversedArr[i] = arr[size - i - 1];
    return reversedArr;
}
