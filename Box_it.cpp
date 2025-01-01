/*Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length , breadth , and height .

The default constructor of the class should initialize , , and  to .

The parameterized constructor Box(int length, int breadth, int height) should initialize Box's  and  to length, breadth and height.

The copy constructor BoxBox ) should set  and  to 's  and , respectively.

Apart from the above, the class should have  functions:

int getLength() - Return box's length
int getBreadth() - Return box's breadth
int getHeight() - Return box's height
long long CalculateVolume() - Return the volume of the box
Overload the operator  for the class Box. Box   Box  if:

 < 
 <  and ==
 <  and == and ==
Overload operator  for the class Box().
If  is an object of class Box:

 should print ,  and  on a single line separated by spaces.

For example,

Box b1; // Should set b1.l = b1.b = b1.h = 0;
Box b2(2, 3, 4); // Should set b1.l = 2, b1.b = 3, b1.h = 4;
b2.getLength();	// Should return 2
b2.getBreadth(); // Should return 3
b2.getheight();	// Should return 4
b2.CalculateVolume(); // Should return 24
bool x = (b1 < b2);	// Should return true based on the conditions given
cout<<b2; // Should print 2 3 4 in order.
Constraints


Two boxes being compared using the  operator will not have all three dimensions equal.

Language
C++20
More
12345678910111213
    return 0;
}

Line: 13 Col: 1

Test against custom input
*/


//Implement the class Box  
// #include <bits/stdc++.h>
// using namespace std;

class Box {
private:
    int l, b, h;

public:
    // Default constructor
    Box() : l(0), b(0), h(0) {}

    // Parameterized constructor
    Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}

    // Copy constructor
    Box(const Box& B) : l(B.l), b(B.b), h(B.h) {}

    // Getters
    int getLength() const { return l; }
    int getBreadth() const { return b; }
    int getHeight() const { return h; }

    // Calculate volume
    long long CalculateVolume() const { return static_cast<long long>(l) * b * h; }

    // Overload operator < for comparison
    bool operator<(const Box& B) const {
        if (l < B.l) {
            return true;
        } else if (l == B.l && b < B.b) {
            return true;
        } else if (l == B.l && b == B.b && h < B.h) {
            return true;
        } else {
            return false;
        }
    }

    // Overload operator << for output
    friend ostream& operator<<(ostream& out, const Box& B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

