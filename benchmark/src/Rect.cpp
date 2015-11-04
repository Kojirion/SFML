#include <benchmark/benchmark.h>
#include <SFML/Graphics/Rect.hpp>

static void Rect_Contains(benchmark::State& state) {
    sf::IntRect rectangle(0, 0, 10, 10);

    while (state.KeepRunning())
        volatile bool x = rectangle.contains(9, 9);
}

BENCHMARK(Rect_Contains);

static void Rect_Intersects(benchmark::State& state) {
    sf::IntRect rectangle(0, 0, 10, 10);
    sf::IntRect intersectingRectangle(5, 5, 10, 10);

    while (state.KeepRunning())
        volatile bool x = rectangle.intersects(intersectingRectangle);
}

BENCHMARK(Rect_Intersects);
