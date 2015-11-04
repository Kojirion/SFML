#include <benchmark/benchmark.h>
#include <SFML/System/String.hpp>

static void string_replace(benchmark::State& state) {

    sf::String string("brown fox"), searchFor("fox"), replaceWith("wolf");

    while (state.KeepRunning())
        string.replace(searchFor, replaceWith);
}

BENCHMARK(string_replace);

//static void string_replace(benchmark::State& state) {

//    sf::String string("brown fox"), searchFor("fox"), replaceWith("wolf");

//    while (state.KeepRunning())
//        string.replace(searchFor, replaceWith);
//}

//BENCHMARK(string_replace);
