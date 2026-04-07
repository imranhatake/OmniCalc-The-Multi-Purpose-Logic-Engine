#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

// ---------- BASIC ----------
void basicCalc() {
    int choice;

    while(true) {
        cout << "\n--- Basic Calculator ---\n";
        cout << "1.Add\n2.Subtract\n3.Multiply\n4.Divide\n0.Back\n";
        cin >> choice;

        if(choice == 0) return;

        double a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch(choice) {
            case 1: cout << "Result: " << a + b; break;
            case 2: cout << "Result: " << a - b; break;
            case 3: cout << "Result: " << a * b; break;
            case 4:
                if(b != 0) cout << "Result: " << a / b;
                else cout << "Error: Division by zero";
                break;
            default: cout << "Invalid choice";
        }
    }
}

// ---------- SCIENTIFIC ----------
void scientificCalc() {
    int choice;

    while(true) {
        cout << "\n--- Scientific Calculator ---\n";
        cout << "1.sin 2.cos 3.tan 4.log 5.sqrt\n0.Back\n";
        cin >> choice;

        if(choice == 0) return;

        double x;
        cout << "Enter value: ";
        cin >> x;

        switch(choice) {
            case 1: cout << sin(x); break;
            case 2: cout << cos(x); break;
            case 3: cout << tan(x); break;
            case 4: cout << log(x); break;
            case 5: cout << sqrt(x); break;
            default: cout << "Invalid";
        }
    }
}

// ---------- GEOMETRY ----------
void geometry() {
    int choice;

    while(true) {
        cout << "\n--- Geometry ---\n";
        cout << "1.Circle Area\n2.Rectangle Area\n3.Triangle Area\n0.Back\n";
        cin >> choice;

        if(choice == 0) return;

        if(choice == 1) {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area: " << M_PI * r * r;
        }
        else if(choice == 2) {
            double l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            cout << "Area: " << l * w;
        }
        else if(choice == 3) {
            double b, h;
            cout << "Enter base and height: ";
            cin >> b >> h;
            cout << "Area: " << 0.5 * b * h;
        }
        else {
            cout << "Invalid choice";
        }
    }
}

// ---------- ALGEBRA ----------
void algebra() {
    int choice;

    while(true) {
        cout << "\n--- Algebra ---\n";
        cout << "1.Linear Equation\n2.Quadratic Equation\n0.Back\n";
        cin >> choice;

        if(choice == 0) return;

        if(choice == 1) {
            double a, b;
            cout << "ax + b = 0\nEnter a and b: ";
            cin >> a >> b;

            if(a != 0)
                cout << "x = " << -b/a;
            else
                cout << "Invalid equation";
        }
        else if(choice == 2) {
            double a, b, c;
            cout << "Enter a, b, c: ";
            cin >> a >> b >> c;

            double d = b*b - 4*a*c;

            if(d > 0) {
                cout << "Roots: "
                     << (-b + sqrt(d))/(2*a) << " , "
                     << (-b - sqrt(d))/(2*a);
            }
            else if(d == 0) {
                cout << "Root: " << -b/(2*a);
            }
            else {
                cout << "Complex roots";
            }
        }
        else {
            cout << "Invalid choice";
        }
    }
}

// ---------- UNIT CONVERTER ----------
void unitConvert() {
    int choice;

    while(true) {
        cout << "\n--- Unit Converter ---\n";
        cout << "1.Meter to KM\n2.KG to Gram\n0.Back\n";
        cin >> choice;

        if(choice == 0) return;

        if(choice == 1) {
            double m;
            cout << "Enter meter: ";
            cin >> m;
            cout << "KM: " << m / 1000;
        }
        else if(choice == 2) {
            double kg;
            cout << "Enter kg: ";
            cin >> kg;
            cout << "Gram: " << kg * 1000;
        }
        else {
            cout << "Invalid choice";
        }
    }
}

// ---------- MAIN ----------
int main() {
    int choice;

    while(true) {
        cout << "\n==== OMNI CALCULATOR ====\n";
        cout << "1.Basic\n";
        cout << "2.Scientific\n";
        cout << "3.Geometry\n";
        cout << "4.Algebra\n";
        cout << "5.Unit Converter\n";
        cout << "6.Exit\n";

        cin >> choice;

        switch(choice) {
            case 1: basicCalc(); break;
            case 2: scientificCalc(); break;
            case 3: geometry(); break;
            case 4: algebra(); break;
            case 5: unitConvert(); break;
            case 6: return 0;
            default: cout << "Invalid choice";
        }
    }
}