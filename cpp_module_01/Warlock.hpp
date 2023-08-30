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


/*
Richard: This looks like another boring day.$
Richard: I am Richard, Mistress of Magma!$
Richard - Mistress of Magma$
Jack: This looks like another boring day.$
Jack: I am Jack, the Long!$
Jack: I am Jack, the Mighty!$
Jack: My job here is done!$
Richard: My job here is done!$


Richard: This looks like another boring day.$
Richard: I am Richard, Mistress of Magma!$
Richard - Mistress of Magma$
Jack: This looks like another boring day.$
Jack: I am Jack, the Long!$
Jack: I am Jack, the Mighty!$
Jack: My job here is done!$
Richard: My job here is done!$
*/