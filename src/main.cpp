#include <iostream>
#include "Config.h"

using namespace std;

int main() {
    Config config;
    config.readXml();
    cout << "Hola mundo" << endl;
    return 0;
}
