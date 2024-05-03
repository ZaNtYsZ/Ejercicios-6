#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    float grade;

    // Loop through the students to calculate the total marks
    for (int i = 0; i < 10; i++) {
        cout << "Ingresa la calificación del estudiante " << i+1 << ": ";
        cin >> grade;
        sum += grade;
    }

    // Calculate and log the average grade
    float avg = static_cast<float>(sum) / 10;
    cout << "Promedio de calificaciones: " << avg << endl;

    // Determine the grade based on the average
    if (avg < 60) {
        cout << "Calificación: F" << endl;
    } else if (avg < 70) {
        cout << "Calificación: D" << endl;
    } else if (avg < 80) {
        cout << "Calificación: C" << endl;
    } else if (avg < 90) {
        cout << "Calificación: B" << endl;
    } else if (avg <= 100) {
        cout << "Calificación: A" << endl;
    }

    return 0;
}