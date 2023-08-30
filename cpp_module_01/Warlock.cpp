#include "Warlock.hpp"

Warlock::Warlock(const std::string &Name, const std::string &Title):name(Name), title(Title)
{
    std::cout << this->getName() <<": This looks like another boring day."<<std::endl;
}

const std::string &Warlock::getName() const
{
    return this->name;
}

const std::string &Warlock::getTitle() const
{
    return this->title;
}

void Warlock::setTitle(const std::string &t)
{
    this->title = t;
}

void Warlock::introduce() const
{
    std::cout << this->getName() <<": I am "<<this->getName()<<", "<<this->getTitle()<<"!"<<std::endl;
}


Warlock::~Warlock()
{
    std::cout<<this->getName()<<": My job here is done!"<<std::endl;
}