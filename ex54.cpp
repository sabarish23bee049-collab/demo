using namespace std;

template <class T>
void quad(T a, T b, T c)
{
    double d = pow(b, 2) - 4 * a * c;

    if (d > 0)
    {
        double e = (-b + sqrt(d)) / (2 * a);
        double f = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and distinct: " << e << f << endl;
    }
    else if (d == 0)
    {
        double g = -b / (2 * a);
        cout << "Roots are real and equal: " << g << endl;
    }
    else
    {
        d = -d;
        double h = -b / (2 * a);
        double i = sqrt(d) / (2 * a);
        cout << "Roots are complex: " << h << " + " << i << "i , "<< h << " - " << i << "i" << endl;
    }
}

int main()
{
    quad(2, 4, 8);
    quad(1.4, 5.4, 7.5);
    return 0;
}