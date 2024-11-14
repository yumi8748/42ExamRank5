#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

class SpellBook{
    public:
        SpellBook();
		SpellBook(SpellBook const &src);
		SpellBook &operator=();
        ~SpellBook();
};

#endif