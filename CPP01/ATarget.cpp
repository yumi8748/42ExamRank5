#include "ATarget.hpp"

ATarget::ATarget(const std::string &type)
{

}

const std::string ATarget::getType()
{

}

void ATarget::getHitBySpell(ASpell const &aspell) const
{
    std::cout << type <<" has been " << aspell.getEffects() << "! "<< std::endl;
}
