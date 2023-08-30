#include "ATarget.hpp"

ATarget::ATarget(){
    std::cout << "done"<< std::endl;
}

ATarget::ATarget(const ATarget &atr)
{
    this->type = atr.getType();
}

ATarget & ATarget::operator=(const ATarget &rhs)
{
    this->type = rhs.type;

    return (*this);
}

std::string &ATarget::getType() const
{
    return this->type;
}

