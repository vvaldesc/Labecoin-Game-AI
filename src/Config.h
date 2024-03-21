#ifndef CONFIG_H
#define CONFIG_H

#include <fstream>
#include <iostream>
#include <string>

using namespace std;



class Config {
private:
    int velocidad;
    float sleep;

    static int WINDOW_HEIGHT;
    static int WINDOW_WIDTH;
    
    public:
    Config();
    Config(int velocidad, float sleep);

    int getVelocidad();
    void setVelocidad(int velocidad);
    float getSleep();
    void setSleep(float sleep);

    int getWindowHeight();
    int getWindowWidth();


    void readXml();
    
    virtual ~Config();
};

#endif /* CONFIG_H_ */