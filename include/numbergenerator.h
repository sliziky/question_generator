#ifndef NUMBERGENERATOR_H
#define NUMBERGENERATOR_H
#include <random>
class numberGenerator {
    std::mt19937 eng;
    std::uniform_int_distribution<> distr;
public:
    numberGenerator(int lower, int upper)
        : eng(std::random_device()())
        , distr(lower, upper)
    {}

    int operator()() {
         return distr(eng);
    }
};
#endif // NUMBERGENERATOR_H
