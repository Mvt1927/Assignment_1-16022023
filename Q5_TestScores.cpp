#include <iostream>
#include <iomanip>
using namespace std;

void sortArray(int *arr, int size);
double calcAverage(int *arr, int size);

int main()
{
    int size;
    cout << "Enter the number of test scores: ";
    cin >> size;

    int *scoresArr = new int[size];

    for (int i = 0; i < size; i++)
    {
        int score;
        do
        {
            cout << "Test score #" << i + 1 << " = ";
            cin >> score;
        } while (score < 0);
        scoresArr[i] = score;
    }

    sortArray(scoresArr, size);

    double average = calcAverage(scoresArr, size);

    cout << "" << endl;

    cout << setfill('-');
    cout << setw(45) << "-" << endl;
    cout << setfill(' ');

    cout << setw(2) << left << "|";
    cout << setw(20) << left << "#";
    cout << setw(1) << left << "|";
    cout << setw(20) << right << "Score";
    cout << setw(2) << right << "|" << endl;

    cout << setfill('-');
    cout << setw(22) << left << "|";
    cout << setw(1) << "|";
    cout << setw(22) << right << "|" << endl;
    cout << setfill(' ');

    for (int i = 0; i < size; i++)
    {
        cout << setw(2) << left << "|";
        cout << setw(20) << left << i + 1;
        cout << setw(1) << left << "|";
        cout << setw(20) << right << *(scoresArr + i);
        cout << setw(2) << right << "|" << endl;
    }

    cout << setw(2) << left << "|";
    cout << setw(20) << left << "Average";
    cout << setw(1) << left << "|";
    cout << setw(20) << right << average;
    cout << setw(2) << right << "|" << endl;

    cout << setfill('-');
    cout << setw(45) << "-" << endl;
    cout << setfill(' ');

    return 0;
}

void sortArray(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + j) < *(arr + minIndex))
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int temp = *(arr + i);
            *(arr + i) = *(arr + minIndex);
            *(arr + minIndex) = temp;
        }
    }
}

double calcAverage(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return static_cast<double>(sum) / size;
}