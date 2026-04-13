#include <iostream>
using namespace std;
class Rectangle {
private:
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    friend void calcArea(Rectangle r);
};
void calcArea(Rectangle r) {
    float area = r.length * r.breadth;
    cout<<area<<endl;
}

int main() {
    float l, b;
    if (cin >> l >> b) {
        Rectangle rect(l, b);
        calcArea(rect);
    }
    
    return 0;
}
