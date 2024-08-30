#include "stats.h"
#include <algorithm>
#include <limits>
#include <numeric>

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    Stats stats;

    if (numbers.empty()) {
        stats.average = std::numeric_limits<float>::quiet_NaN();
        stats.min = std::numeric_limits<float>::quiet_NaN();
        stats.max = std::numeric_limits<float>::quiet_NaN();
    } else {
        stats.average = std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
        stats.min = *std::min_element(numbers.begin(), numbers.end());
        stats.max = *std::max_element(numbers.begin(), numbers.end());
    }
     return stats;
}
