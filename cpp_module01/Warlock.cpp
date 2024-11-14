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
    if (spell) {
        spellBook[spell->getName()] = spell->clone();
    }
}

void Warlock::forgetSpell(std::string spellName)
{
	if (spellBook.find(spellName) != spellBook.end())
	{
		delete(spellBook[spellName]);
		spellBook.erase(spellName); //!!
	}
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	if (spellBook.find(spellName) != spellBook.end())
	{
		spellBook[spellName]->launch(target);
	}
}
