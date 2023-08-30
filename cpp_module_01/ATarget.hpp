#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"
class ASpell;

class ATarget
{
    private:
        std::string type;
    public:
        ATarget();
        ATarget(const ATarget &atr);
        ATarget & operator=(const ATarget &rhs);
        std::string &getType() const ;
        virtual ATarget *clone() const = 0;
        void  getHitBySpell( const ASpell &obj) const;
        ~ATarget();
};

#endif