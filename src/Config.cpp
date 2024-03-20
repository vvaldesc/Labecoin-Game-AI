#include "Config.h"

Config::Config() {
    this->velocidad = 0;
    this->sleep = 0;
}

void Config::readXml() {
    std::ifstream file("config.xml");
    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            std::cout << line << std::endl;
            //set velocidad
            //set sleep
        }
        file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
}

Config::Config(int velocidad, float sleep) {
    this->velocidad = velocidad;
    this->sleep = sleep;
}

Config::~Config() {
    // Destructor
}

int Config::getVelocidad() const {
    return velocidad;
}

void Config::setVelocidad(int velocidad) {
    this->velocidad = velocidad;
}

float Config::getSleep() const {
    return sleep;
}

void Config::setSleep(float sleep) {
    this->sleep = sleep;
}
