#include <iostream>
#include <deque>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
using namespace std;
/*
    Function to animate the title of the chale interpreter.
*/
void animateTitle(){
        vector<string> chaleArt = {
            "\033[90m", // Cyan color
            "  ██████ ██   ██  █████  ██      ███████ ",
            "██      ██   ██ ██   ██ ██      ██      ",
            "██      ███████ ███████ ██      █████   ",
            "██      ██   ██ ██   ██ ██      ██      ",
            " ██████ ██   ██ ██   ██ ███████ ███████ ",
            "\033[90mVersion 1.0.0 - C++ Interpreter\033[0m"
        };
    
        for (size_t i = 0; i < chaleArt.size(); ++i) {
            if (i == 0) continue; // Skip color code
            for (char c : chaleArt[i]) {
                cout << c << flush;
                this_thread::sleep_for(chrono::milliseconds(2));
            }
            cout << endl;
            if (i == 0) this_thread::sleep_for(chrono::milliseconds(15));
        }
}