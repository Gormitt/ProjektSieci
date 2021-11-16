// libs
#include <iostream>
#include <memory>
// include
#include "../include/miseczka.h"
#include "../include/paleczka.h"

int main() {
    
    std::shared_ptr<Paleczka> p1(new Paleczka());
    std::shared_ptr<Paleczka> p2(new Paleczka());

    Miseczka m1(p1, p2);

    return 0;
}