#include "object_construction.hpp"

int main() {
    Dynamo dOne;
    Dynamo dTwo(5);

    dOne = dTwo;

    Dynamo dThree = dOne;

    Dynamo dFour = Dynamo(6);

}