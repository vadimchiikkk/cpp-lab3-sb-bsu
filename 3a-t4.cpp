#include <iostream>
#include <limits> 
using namespace std;
int main()
{
    int k, i = 1, sum_k = 0, number;
    cout << " Enter the amount of integers to sum = "; cin >> k;
    do {
        while (true)
        {
            cout << "Enter integer nr. " << i << ": ";
            cin >> number;
            if (cin.fail())
            {
                cout << "Warning: That is not a valid integer." << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            else
            {
                break;
            }
        }
        sum_k += number; i++;
    } while (i <= k);
    cout << " The total sum of " << k << " integers is: " << sum_k;
    return 0;
}
