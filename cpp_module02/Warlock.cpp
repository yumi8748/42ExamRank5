# include "Warlock.hpp"

Warlock::Warlock(){}

// Warlock::Warlock(Warlock const &src)
// {
// 	if (this != src)
// 		return (*this);
// }

// Warlock &Warlock::operator=(Warlock const &other)
// {

// }

Warlock::Warlock(const std::string &n, const std::string &t): name(n), title(t)
{
    std::cout << n << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const
{
    return (this->name);
}

const std::string &Warlock::getTitle() const
{
    return (this->title);
}

void    Warlock::setTitle(const std::string &str)
{
    this->title = str;
}

void    Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
	spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	if (spellBook.createSpell(spellName))
        spellBook.createSpell(spellName)->launch(target);
}
