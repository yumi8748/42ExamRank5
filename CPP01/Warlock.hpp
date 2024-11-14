#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *> spellBook; //!!
    public:
        // Warlock();
        Warlock(const std::string &n, const std::string &t);
        ~Warlock();
        const std::string &getName() const;
        const std::string &getTitle() const;
        void    setTitle(const std::string &str);
        void    introduce() const;

        void learnSpell(ASpell *aspell);
        void forgetSpell(std::string str);
        void launchSpell(std::string str, ATarget &atarget);
};

#endif