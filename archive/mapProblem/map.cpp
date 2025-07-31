#include "map.hpp"

map::map() {
    for(int i = 0; i < mapSize; ++i) {
        coloring[i] = none;
        for(int j = 0; j < mapSize; ++j) {
            neighbor[i][j] = false;
        }
    }
}

std::istream& operator>>(std::istream& in, map& matrix) {
    in >> matrix.numberOfCountries;
    for(int i = 0; i < matrix.numberOfCountries; ++i) { 
        for(int j = 0; j < matrix.numberOfCountries; ++j) {
            int borders;
            in >> borders;
            if(borders == 1) {
                matrix.neighbor[i][j] = true;
            } else {
                matrix.neighbor[i][j] = false;
            }
        }
    }
    return in;
}

bool map::isValidColoring(int country, color hue) const {
    for(int i = 0; i < numberOfCountries; ++i) {
        if(neighbor[country][i] && coloring[i] == hue) {
            return false;
        }
    }
    return true;
}

std::ostream& operator<<(std::ostream& out, color c) {
    switch(c.hue) {
        case red: 
            out << "red";
            break;
        case blue:
            out << "blue";
            break;
        case green:
            out << "green";
            break;
        case yellow:
            out << "yellow";
            break;
        case none:
            out << "none";
            break;
    }
    return out;
}

std::ostream& operator<<(std::ostream& out, const map& graph) {
    out << "Number of Countries: " << graph.numberOfCountries << std::endl;
    for(int i = 0; i < graph.numberOfCountries; ++i) {
        out << "Country " << i << " is " << graph.coloring[i] << std::endl;
    }
    return out;
}