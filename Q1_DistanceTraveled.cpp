#include "iostream"
#include "iomanip"
using namespace std;

void calcDistance(int speed,int time);
bool checkInput(int inputValue);

int main(int argc, char const *argv[])
{
    int speed = 50;
    int time = 5;
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> time;
    if (checkInput(time)&&checkInput(speed))
    {
        calcDistance(speed,time);
    } else cout << "No accept value < 1";
    return 0;
}

void calcDistance(int speed, int time){
    cout << setfill('-');	
    cout << setw(45) << "-" << endl;
    cout << setfill(' ');
    
    cout << setw(2) << left << "|";
    cout << setw(20) << left << "Time";
    cout << setw(1) << left << "|";
    cout << setw(20) << right << "Distance";
    cout << setw(2) << right << "|"<<endl;

    cout << setfill('-');	
    cout << setw(22)<< left << "|";
    cout << setw(1) << "|";
    cout << setw(22) << right << "|" << endl;
    cout << setfill(' ');
    for (int i = 0; i < time; i++)
    {
        cout << setw(2) << left << "|";
        cout << setw(20) << left << i+1;
        cout << setw(1) << left << "|";
        cout << setw(20) << right << (i+1)*speed;
        cout << setw(2) << right << "|"<<endl;

    }
    cout << setfill('-');	
    cout << setw(45) << "-" << endl;
    cout << setfill(' ');
}

bool checkInput(int inputValue)
{
    if (inputValue<1)
        return false;
    return true;
}
