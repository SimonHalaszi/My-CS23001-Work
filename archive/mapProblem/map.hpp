#ifndef CS2_MAP_HPP
#define CS2_MAP_HPP

#include <iostream>

//            0     1     2      3      4
enum pallete {red, blue, green, yellow, none};

const int mapSize = 10;

class color {
    public:
        color() : hue(none) {}
        color(pallete x) : hue(x) {}
        bool operator==(color rhs) const { return hue == rhs.hue; }
        color& operator++() { hue = pallete(hue + 1); return *this; }
        
        friend std::ostream& operator<<(std::ostream&, color);
    private:
        pallete hue;
};

class map {
    public:
        map();
        bool isValidColoring(int, color) const;
        void colorCountry(int country, color c) { coloring[country] = c; }
        int getNumberOfCountries() const { return numberOfCountries; }

        friend std::ostream& operator<<(std::ostream&, const map&);
        friend std::istream& operator>>(std::istream&, map&);

    private:
        bool neighbor[mapSize][mapSize];
        color coloring[mapSize];
        int numberOfCountries;
};





#endif