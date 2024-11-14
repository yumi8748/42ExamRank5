# include "ASpell.hpp"

ASpell::ASpell(const std::string &n, const std::string &e): name(n), effects(e)
{

}

ASpell &ASpell::operator=(ASpell &src)
{
	if (this != &src)
	{
		this->name = src.name;
		this->effects = src.effects;
	}
	return (*this);
}

ASpell::ASpell(ASpell const &src):name(src.name), effects(src.effects)
{
}

ASpell::~ASpell(){}

const std::string &ASpell::getName() const
{
    return (name);
}

const std::string &ASpell::getEffects() const
{
    return (effects);
}

void ASpell::launch(ATarget const &target) const
{
    target.getHitBySpell(*this);
}