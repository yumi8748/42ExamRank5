#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::~Fwoosh()
{

}

Fwoosh *Fwoosh::clone()
{
    return (new Fwoosh());
}
