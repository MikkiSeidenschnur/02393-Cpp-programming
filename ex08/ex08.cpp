<<<<<<< HEAD
// ex08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
=======
#include <iostream>
#include <vector>
#include <cmath>
#include "shapes.h"

using namespace std;

int main(void) {

    vector<Shape*> shapes;

    Rectangle u(2, 5);
    shapes.push_back(&u);
    Square v(3);
    shapes.push_back(&v);
    Circle w(2);
    shapes.push_back(&w);
    // Enumerating all areas
    cout << "Areas..." << endl;
    double area = 0;
    for (int i = 0; i < shapes.size(); i++) {
        cout << round(shapes[i]->area()) << " ";
        area += shapes[i]->area();
    }
    cout << endl << "Total area is " << round(area) << endl;

    // Enumerating all areas
    cout << "Perimeters..." << endl;
    double perimeter = 0;
    for (int i = 0; i < shapes.size(); i++) {
        cout << round(shapes[i]->perimeter()) << " ";
        perimeter += shapes[i]->perimeter();
    }
    cout << endl << "Total area is " << round(perimeter) << endl;

    // I want to put them side-by-side
    // And see how much space they use (width and height)
    cout << "Placing side-by-side..." << endl;
    double width = 0;
    double height = 0;
    for (int i = 0; i < shapes.size(); i++) {
        width += shapes[i]->width();
        if (height < shapes[i]->height()) {
            height = shapes[i]->height();
        }
    }
    cout << "Total width is " << round(width) << endl;
    cout << "Total height is " << round(height) << endl;

    // I now try to do the same, but minimizing width
    // First, I rotate those shapes that need it
    for (int i = 0; i < shapes.size(); i++) {
        if (shapes[i]->width() > shapes[i]->height()) {
            shapes[i]->rotate();
        }
    }
    // Then I proceed as before
    // Then I proceed as before
    cout << "Placing side-by-side..." << endl;
    width = 0;
    height = 0;
    for (int i = 0; i < shapes.size(); i++) {
        width += shapes[i]->width();
        if (height < shapes[i]->height()) {
            height = shapes[i]->height();
        }
    }


    cout << "Total width is " << round(width) << endl;
    cout << "Total height is " << round(height) << endl;

    return 0;

}
>>>>>>> b2b33b112a4684a7d68eb898fc5b5aaf7419ed83
