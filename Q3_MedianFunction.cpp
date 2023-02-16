#include "iostream"
#include "iomanip"
using namespace std;

bool checkInput(int inputValue);
double medians(int *arr, int numberElements);

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
        cout << "a[" << i << setw(5) << left <<  "] " << setw(7) << left << "= ";
        cin >> arr[i];
    }
    double mediansValue = medians(arr, numberElements);
    cout << setw(15) << left << "Medians =" << mediansValue << endl;
    return 0;
}

bool checkInput(int inputValue)
{
    if (inputValue < 1)
        return false;
    return true;
}

double medians(int *arr, int numberElements)
{
    if (numberElements % 2 == 0)
        return (double)(*(arr + (numberElements / 2) - 1) + *(arr + (numberElements / 2)) / 2);
    return (double)*(arr + (numberElements / 2));
}
