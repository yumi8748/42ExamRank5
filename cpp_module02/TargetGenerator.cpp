#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}


void TargetGenerator::learnTargetType(ATarget* t)
{
    if (t)
        target[t->getType()] = t;
}

void TargetGenerator::forgetTargetType(std::string const &t)
{
    if (target.find(t) != target.end())
        target.erase(target.find(t));
}

ATarget* TargetGenerator::createTarget(std::string const &t)
{
    ATarget *tmp = NULL;
    if (target.find(t) != target.end())
        tmp = target[t];
    return (tmp);
}
