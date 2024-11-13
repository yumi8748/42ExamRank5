#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ASpell{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell(const std::string &name, const std::string &effects);
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell *clone() = 0;
        void launch(const ATarget &atarget) const; //continue
};

#endif