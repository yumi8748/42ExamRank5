#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <map>

class Warlock{
    private:
        std::string name;
        std::string title;
        SpellBook spellBook;
        // std::map<std::string, ASpell*> spellBook; //!!
    public:
        Warlock();
		// Warlock(Warlock const &src);
		// Warlock &operator=(Warlock const &other);
        Warlock(const std::string &n, const std::string &t);
        ~Warlock();
        const std::string &getName() const;
        const std::string &getTitle() const;
        void    setTitle(const std::string &str);
        void    introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget &target);
};

#endif