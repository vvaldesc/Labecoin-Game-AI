#include "Config.h"
#include "constants.h"




using namespace std;

int Config::WINDOW_HEIGHT = WINDOW_HEIGHT_LABECOIN;
int Config::WINDOW_WIDTH = WINDOW_WIDTH_LABECOIN;
const std::array<std::string, 4> Config::MOVIMIENTOS = {"I","D","AR","AB"};
int Config::GAME_FPS= GAME_FPS_LABECOIN;
string Config::GAME_TITLE=WINDOW_TITLE_LABECOIN;

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

int Config::getFPS() {
    return GAME_FPS;
}

string Config::getTitle() {
    return GAME_TITLE;
}

string Config::toString() {
    std::string result = "Config:\n";
    result += "Velocidad: " + std::to_string(this->getVelocidad()) + "\n";
    result += "Sleep: " + std::to_string(this->getSleep()) + "\n";
    result += "Window Height: " + std::to_string(Config::WINDOW_HEIGHT) + "\n";
    result += "Window Width: " + std::to_string(Config::WINDOW_WIDTH) + "\n";
    result += "Game FPS: " + std::to_string(Config::GAME_FPS) + "\n";
    result += "Game Title: " + Config::GAME_TITLE + "\n";
    for (size_t i = 0; i < sizeof(Config::MOVIMIENTOS) / sizeof(Config::MOVIMIENTOS[0]); i++) {
        result += Config::MOVIMIENTOS[i];
    }

    return result;
}