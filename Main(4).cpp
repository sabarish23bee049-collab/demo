#include<iostream>
#include<iomanip>
using namespace std;
float calculation(int x)
{
    float total = 0.0;
    if(x <= 50)
    {
        total = x * 3.50;
        total+=total*0.2;
    }
    else if(x > 50 && x <= 150)
    {
        total = (50 * 3.50) + ((x - 50) * 4.50);
        total+=total*0.2;
    }
    else if(x > 150 && x <= 250)
    {
        total = (50 * 3.50) + (100 * 4.50) + ((x - 150) * 5.20);
        total+=total*0.2;
    }
    else if(x > 250)
    {
        total = (50 * 3.50) + (100 * 4.50) + (100 * 5.20) + ((x - 250) * 6.75);
        total+=total*0.2;
    }
    else
        return 0;
        
    return total;
}

int main()
{
    int unit;
    if (!(cin >> unit)) return 0;
    cout << fixed << setprecision(2) << calculation(unit) << endl;
    return 0;
}
