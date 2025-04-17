#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "transition.h"
using namespace std;

void animateTitle() {
    vector<string> chaleArt = {
        "\033[36m", // Cyan color
        "  ██████ ██   ██  █████  ██      ███████ ",
        "██      ██   ██ ██   ██ ██      ██      ",
        "██      ███████ ███████ ██      █████   ",
        "██      ██   ██ ██   ██ ██      ██      ",
        " ██████ ██   ██ ██   ██ ███████ ███████ ",
        "\033[35mVersion 1.0.0 - C++ Interpreter\033[0m"
    };

    for (size_t i = 0; i < chaleArt.size(); ++i) {
        if (i == 0) continue; // Skip color code
        for (char c : chaleArt[i]) {
            cout << c << flush;
            this_thread::sleep_for(chrono::milliseconds(3));
        }
        cout << endl;
        if (i == 0) this_thread::sleep_for(chrono::milliseconds(30));
    }
}
