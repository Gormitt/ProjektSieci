#ifndef MISECZKA_HPP
#define MISECZKA_HPP

#include <memory>
#include "paleczka.h"

class Miseczka {
private:
    std::shared_ptr<Paleczka> lewa;
    std::shared_ptr<Paleczka> prawa;
    
    bool czyDostepna();
public:
    Miseczka() = delete;
    Miseczka(std::shared_ptr<Paleczka>, std::shared_ptr<Paleczka>);

    bool rozpocznijPosilek();
};

#endif