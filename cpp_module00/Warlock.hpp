#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock{
    private:
        std::string name;
        std::string title;
    public:
        // Warlock();
        Warlock(const std::string &n, const std::string &t);
        ~Warlock();
        const std::string &getName() const;
        const std::string &getTitle() const;
        void    setTitle(const std::string &str);
        void    introduce() const;
};

#endif