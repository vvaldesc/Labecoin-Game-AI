#include <iostream>
#include "Config.h"
#include "constants.h"
#include "Prueba.h"

using namespace std;

int main() {
    Prueba p;
    p.saludar();
    Config config;
    config.readXml();
    cout << "Hola mundo" << FAV_NUM << endl;
    return 0;
}
