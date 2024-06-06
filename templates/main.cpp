// FUNCTION TEMLATES

#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;

#include <vector>
    using std::vector;

#include <string>
    using std::string;

#include "Square.h"
#include "Rectangle.h"

// Consider finding the largest item in an array or vector

int findMax(vector<int> a) {
	int maxIndex = 0;
	
	for (int i = 0; i < a.size(); i++) {
	if (a[maxIndex] < a[i])
		maxIndex = i;
	}
return a[maxIndex];
}

// Changing the datatype from INT to FLOAT

float findMax(vector<float> a) {
	int maxIndex = 0;
	
	for (int i = 0; i < a.size(); i++) {
	if (a[maxIndex] < a[i])
		maxIndex = i;
	}
return a[maxIndex];
}

// Now considering a vector of strings…
// Same process!

string findMax(vector<string> a) {
	int maxIndex = 0;
	
	for (int i = 0; i < a.size(); i++) {
	if (a[maxIndex] < a[i])
		maxIndex = i;
	}
return a[maxIndex];
}


// Creating a comparable class 
// NOTE: the following code can replace the above functions, it does the SAME THING
// this also can apply the findMax function to other classes, like Square and Rectangle

template <typename Comparable>
Comparable* findMax(const std::vector<Comparable*>& a) {
    int maxIndex = 0;

    for (int i = 0; i < a.size(); i++) {
        if (*a[maxIndex] < *a[i])
            maxIndex = i;
    }

    return a[maxIndex];
}



int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    cout << findMax(a) << endl;


    vector<float> b = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout << findMax(b) << endl;


    vector<string> c = {"a", "b", "c", "d", "e"};
    cout << findMax(c) << endl;

	// Create some shapes
    Square s(5.0);
    Rectangle r(4.0, 6.0);

    // Create a vector of Shape pointers
    vector<Shape*> shapes;
    shapes.push_back(&s);
    shapes.push_back(&r);

    // Find the shape with the largest area
    Shape* maxShape = findMax(shapes);
    cout << "The shape with the largest area has an area of " << maxShape->returnArea() << endl;

    return 0;
};


