# include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects)
{

}

std::string ASpell::getName() const
{
    return (name);
}

std::string ASpell::getEffects() const
{
    return (effects);
}

void ASpell::launch(ATarget const&atarget) const
{
    atarget.getHitBySpell(*this);
}