#include <benchmark/benchmark.h>
#include <SFML/Graphics/Image.hpp>

static void Image_getSize(benchmark::State& state) {
    sf::Image image;
    image.create(100, 100);

    while (state.KeepRunning())
        volatile sf::Vector2u x = image.getSize();
}

BENCHMARK(Image_getSize);

static void Image_createMaskFromColor(benchmark::State& state) {
    sf::Image image;
    image.create(100, 100);

    while (state.KeepRunning())
        image.createMaskFromColor(sf::Color::Red);
}

BENCHMARK(Image_createMaskFromColor);

static void Image_setPixel(benchmark::State& state) {
    sf::Image image;
    image.create(100, 100);

    while (state.KeepRunning())
        image.setPixel(40, 40, sf::Color::Red);
}

BENCHMARK(Image_setPixel);

static void Image_getPixel(benchmark::State& state) {
    sf::Image image;
    image.create(100, 100);

    while (state.KeepRunning())
        volatile sf::Color x = image.getPixel(40,40);
}

BENCHMARK(Image_getPixel);

static void Image_flipHorizontally(benchmark::State& state) {
    sf::Image image;
    image.create(100, 100);

    while (state.KeepRunning())
        image.flipHorizontally();
}

BENCHMARK(Image_flipHorizontally);

static void Image_flipVertically(benchmark::State& state) {
    sf::Image image;
    image.create(100, 100);

    while (state.KeepRunning())
        image.flipVertically();
}

BENCHMARK(Image_flipVertically);
