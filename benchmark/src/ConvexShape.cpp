#include <benchmark/benchmark.h>
#include <SFML/Graphics/ConvexShape.hpp>

static void ConvexShape_setPointCount(benchmark::State& state) {
    sf::ConvexShape shape;

    while (state.KeepRunning())
        shape.setPointCount(60);
}

BENCHMARK(ConvexShape_setPointCount);

static void ConvexShape_getPointCount(benchmark::State& state) {
    sf::ConvexShape shape;

    while (state.KeepRunning())
        volatile std::size_t x = shape.getPointCount();
}

BENCHMARK(ConvexShape_getPointCount);

static void ConvexShape_setPoint(benchmark::State& state) {
    sf::ConvexShape shape(60);

    while (state.KeepRunning())
        shape.setPoint(3, sf::Vector2f(3.f, 4.f));
}

BENCHMARK(ConvexShape_setPoint);

static void ConvexShape_getPoint(benchmark::State& state) {
    sf::ConvexShape shape(60);

    while (state.KeepRunning())
        volatile sf::Vector2f x = shape.getPoint(30);
}

BENCHMARK(ConvexShape_getPoint);
