#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <chrono>

using namespace std;

int main() {
    int dinstance = 0;
    int finishline= 100;
    char input;
    auto startTime = chrono::high_resolution_clock::now();

    cout << "welcome to the running Game!" << endl;
    cout << "Press 'D' to move forward and reach the finish line!" << endl;
    cout << "Your goal is to reach a distance of 100 units." << endl;

    while (distance < finishLine) {
        if (_kbhit()) {
            input = _getch();

            if (input == 'd' || input == 'D') {
                distance += 5;
                system("cls");
                cout << "You moved forward! Distance covered: " << distance << "units" << endl;
                cout << "Keep pressing 'D' to move forwaed!" << endl;
            } else {
                cout << "Press 'D' to move forward!" << endl;
            }
        }
    

        // this_thread::sleep_for(chrono::milliseconds(200));
    }
    auto endTime = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsedTime = endTime - startTime;
    cout << "\nCongratulation! You'v reach the finish line in " << elapsedTime.count() << "second!" << endl;

    return 0;
}

            


    
            



        
    


