#ifndef CONFIG_H
#define CONFIG_H

#include <fstream>
#include <iostream>
#include <string>
#include <array>

using namespace std;



class Config{
private:
    int velocidad;
    float sleep;
    static const std::array<std::string, 4> MOVIMIENTOS;
    static int WINDOW_HEIGHT;
    static int WINDOW_WIDTH;
    static int GAME_FPS;
    static string GAME_TITLE;
public:

    Config();
    Config(int velocidad, float sleep);

    int getVelocidad();
    void setVelocidad(int velocidad);
    float getSleep();
    void setSleep(float sleep);

    int getWindowHeight();
    int getWindowWidth();
    int getFPS();
    string getTitle();


    void readXml();
    string toString();
    
    virtual ~Config();
};

#endif /* CONFIG_H_ */