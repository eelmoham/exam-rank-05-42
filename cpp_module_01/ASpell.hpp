#include <iostream>

class ASpell{
    private:
        std::string name;
        std::string effects;
    public:
        ASpell(const std::string &Name, const std::string &Effects);
        const std::string  &getName() const;
        const std::string  &getEffects() const;
        virtual void doSomething() const = 0;
        
}