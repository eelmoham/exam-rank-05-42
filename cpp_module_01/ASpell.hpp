#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>
#include "ATarget.hpp"
class ASpell{
    private:
        std::string name;
        std::string effects;
    public:
        ASpell(const std::string &Name, const std::string &Effects);
        const std::string  &getName() const;
        const std::string  &getEffects() const;
        virtual ASpell *clone() const = 0;
};

#endif