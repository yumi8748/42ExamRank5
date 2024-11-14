#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"

class ASpell;

class ATarget{
    private:
        std::string type;
    public:
		ATarget();
		ATarget(ATarget const &src);
		ATarget &operator=(ATarget const &src);
		virtual ~ATarget();
        ATarget(const std::string &t);
        const std::string getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(ASpell const &aspell) const;
};

#endif