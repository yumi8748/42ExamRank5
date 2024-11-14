#include "ATarget.hpp"

ATarget::ATarget(const std::string &t): type(t)
{

}

ATarget::ATarget(ATarget const &src)
{
	*this = src;
}
ATarget &ATarget::operator=(ATarget const &src)
{
	type = src.getType();
	return (*this);
}

ATarget::~ATarget(){}

const std::string ATarget::getType() const
{
	return (type);
}

void ATarget::getHitBySpell(ASpell const &aspell) const
{
    std::cout << type <<" has been " << aspell.getEffects() << "!"<< std::endl;
}
