//#include <iostream>
//#include "Rectangle.h"
//#include "Circle.h"
//#include "Triangle.h"
//
//int main() {
//    int choice;
//
//    do {
//        std::cout << "1. Rectangle\n2. Circle\n3. Triangle\n0. Exit\nChoice: ";
//        if (!(std::cin >> choice)) break;
//
//        Figure* fig = nullptr;
//
//        switch (choice) {
//        case 1: {
//            double width, height;
//            std::cout << "Enter width and height: ";
//            std::cin >> width >> height;
//            if (width > 0 && height > 0) fig = new Rectangle(width, height);
//            break;
//        }
//        case 2: {
//            double radius;
//            std::cout << "Enter radius: ";
//            std::cin >> radius;
//            if (radius > 0) fig = new Circle(radius);
//            break;
//        }
//        case 3: {
//            double base, height;
//            std::cout << "Enter base and height: ";
//            std::cin >> base >> height;
//            if (base > 0 && height > 0) fig = new Triangle(base, height);
//            break;
//        }
//        }
//
//        if (fig) {
//            std::cout << "Area: " << fig->GetArea() << "\n";
//            delete fig;
//        }
//
//    } while (choice != 0);
//}