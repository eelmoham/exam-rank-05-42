#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock{
    private:
        std::string name;
        std::string title;
    public:
        Warlock(const std::string &Name, const std::string &Title);
        const std::string  &getName() const;
        const std::string  &getTitle() const;
        void setTitle(const std::string &t);
        void introduce() const;
        ~Warlock();
        
};


#endif
