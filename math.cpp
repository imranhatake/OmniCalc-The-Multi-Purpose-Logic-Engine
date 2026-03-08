#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function Prototypes
void geometryMenu();
void financeMenu();
void coordinateMenu();

int main() {
    int choice;
    
    do {
        cout << "\n--- Welcome to OmniCalc: Multi-Purpose Engine ---" << endl;
        cout << "1. Geometry Calculations (Area, Volume)" << endl;
        cout << "2. Financial Calculations (Interest, Profit)" << endl;
        cout << "3. Coordinate Geometry (Distance, Slope)" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: geometryMenu(); break;
            case 2: financeMenu(); break;
            case 3: coordinateMenu(); break;
            case 4: cout << "Exiting... Thank you!" << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }
    } while(choice != 4);

    return 0;
}

// --- Geometry Section ---
void geometryMenu() {
    int subChoice;
    const double PI = 3.14159;
    cout << "\n1. Area of Circle\n2. Volume of Cylinder\nEnter: ";
    cin >> subChoice;
    
    if(subChoice == 1) {
        double r;
        cout << "Enter Radius: "; cin >> r;
        if(r < 0) cout << "Error: Radius cannot be negative!";
        else cout << "Area: " << PI * r * r << endl;
    } else if(subChoice == 2) {
        double r, h;
        cout << "Enter Radius & Height: "; cin >> r >> h;
        cout << "Volume: " << PI * r * r * h << endl;
    }
}

// --- Finance Section ---
void financeMenu() {
    double cp, sp;
    cout << "\n--- Profit/Loss Analyzer ---" << endl;
    cout << "Enter Cost Price: "; cin >> cp;
    cout << "Enter Selling Price: "; cin >> sp;
    
    if(sp > cp) {
        double profit = sp - cp;
        cout << "Profit: " << profit << " (" << (profit/cp)*100 << "%)" << endl;
    } else {
        double loss = cp - sp;
        cout << "Loss: " << loss << " (" << (loss/cp)*100 << "%)" << endl;
    }
}

// --- Coordinate Section ---
void coordinateMenu() {
    double x1, y1, x2, y2;
    cout << "\nEnter Point 1 (x1 y1): "; cin >> x1 >> y1;
    cout << "Enter Point 2 (x2 y2): "; cin >> x2 >> y2;
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Distance between points: " << fixed << setprecision(2) << distance << endl;
}