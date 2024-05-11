# Miscellaneous


## Google Test

```C++
#include "gtest/gtest.h"
```
```bash
g++ -lgtest gtest_main.cpp -o gtest_main.o
```

## Google Benchmark
```C++
#include <benchmark/benchmark.h>

static void BM_StringCreation(benchmark::State& state) {
  for (auto _ : state)
    std::string empty_string;
}
// Register the function as a benchmark
BENCHMARK(BM_StringCreation);

// Define another benchmark
static void BM_StringCopy(benchmark::State& state) {
  std::string x = "hello";
  for (auto _ : state)
    std::string copy(x);
}
BENCHMARK(BM_StringCopy);

BENCHMARK_MAIN();
```

```C++
#define REPEAT2(x) x x
#define REPEAT4(x) REPEAT2(x) REPEAT2(x)
#define REPEAT8(x) REPEAT4(x) REPEAT4(x)
#define REPEAT16(x) REPEAT8(x) REPEAT8(x)
#define REPEAT32(x) REPEAT16(x) REPEAT16(x)
#define REPEAT(x) REPEAT32(x)
```

```bash
g++ main.cpp -lbenchmark -o main.o
```

## Latex

```latex
\documentclass{article}
\usepackage[T5]{fontenc}
\usepackage[utf8]{inputenc}

\title{}

\begin{document}

\end{document}

```
