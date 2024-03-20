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

public:
    Config();
    Config(int velocidad, float sleep);

    int getVelocidad() const;
    void setVelocidad(int velocidad);
    float getSleep() const;
    void setSleep(float sleep);

    void readXml();
    
    virtual ~Config();
};

#endif /* CONFIG_H_ */
