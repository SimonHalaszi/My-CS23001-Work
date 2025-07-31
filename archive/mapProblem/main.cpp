#include "map.hpp"
#include <fstream>

bool colorMap(int country, map& world) {
    if(country == world.getNumberOfCountries()) {
        return true;
    } else {
        bool done = false;
        bool colorsRemain = true;
        color tint = red;
        while(colorsRemain && !done) {
            if(world.isValidColoring(country, tint)) {
                world.colorCountry(country, tint);
                done = colorMap(country + 1, world);
            }
            if(tint == yellow) {
                colorsRemain = false;
            } else {
                ++tint;
            }
        }
        if(!done) {
            world.colorCountry(country, none);
        }
        return done;
    }
}

int main() {

    map world;
    std::ifstream in("map1.txt");
    in >> world;
    std::cout << world << std::endl;

    colorMap(0, world);

    std::cout << world << std::endl;

}