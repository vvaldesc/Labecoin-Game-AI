#include "Config.h"
#include "constants.h"
using namespace std;

int Config::WINDOW_HEIGHT = WINDOW_HEIGHT_LABECOIN;
int Config::WINDOW_WIDTH = WINDOW_WIDTH_LABECOIN;

Config::Config() {
    this->velocidad = 0;
    this->sleep = 0;
}

void Config::readXml() {
    ifstream file("config.xml");
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
            //set velocidad
            //set sleep
        }
        file.close();
    } else {
        cout << "Unable to open file" << endl;
    }
}

Config::Config(int velocidad, float sleep) {
    this->velocidad = velocidad;
    this->sleep = sleep;
}

Config::~Config() {
    // Destructor
}

int Config::getVelocidad() {
    return velocidad;
}

void Config::setVelocidad(int velocidad) {
    this->velocidad = velocidad;
}

float Config::getSleep() {
    return sleep;
}

void Config::setSleep(float sleep) {
    this->sleep = sleep;
}

int Config::getWindowHeight() {
    return WINDOW_HEIGHT;
}

int Config::getWindowWidth() {
    return WINDOW_WIDTH;
}
