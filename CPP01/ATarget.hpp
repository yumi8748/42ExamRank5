#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"

class ATarget{
    private:
        std::string type;
    public:
        ATarget(const std::string &type);
        const std::string getType();
        virtual ATarget *clone() = 0;
        void getHitBySpell(ASpell const &aspell) const;
};

#endif