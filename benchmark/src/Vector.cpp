#include <benchmark/benchmark.h>
#include <SFML/System/Vector2.hpp>

static void Vector_self_minus(benchmark::State& state) {
    sf::Vector2i vector(1, 2);

    while (state.KeepRunning())
        volatile sf::Vector2i negatedVector = -vector;
}

BENCHMARK(Vector_self_minus);

static void Vector_plus(benchmark::State& state) {
    sf::Vector2i firstVector(2, 5);
    sf::Vector2i secondVector(8, 3);

    while (state.KeepRunning())
        volatile sf::Vector2i result = firstVector + secondVector;
}

BENCHMARK(Vector_plus);
