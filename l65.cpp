#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    enum daysOfWeek
    {
        sunday = 0,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday        
    };
    
    cout << "Find what days of the week are named after!" << endl;
    cout << "Enter a number for a day (Sunday = 0) : ";
    
    int dayInput = sunday;
    cin >> dayInput;
    
    switch (dayInput)
    {
        case sunday:
        {
            cout << "Sunday was named after the sun";
            break;
        }
        case monday:
        {
            cout << "Monday was named after the moon";
            break;
        }
        case tuesday:
        {
            cout << "Tuesday was named after Mars";
            break;
        }
        case wednesday:
        {
            cout << "Wednesday was named after Mercury";
            break;
        }
        case thursday:
        {
            cout << "Thursday was named after Jupiter";
            break;
        }
        case friday:
        {
            cout << "Friday was named after Venus";
            break;
        }
        case saturday:
        {
            cout << "Saturday was named after Saturn";
            break;
        }
        default:
        {
            cout << "Wrong input, execute again";
            break;
        }
    }
    cout << endl;
    return 0;
}
