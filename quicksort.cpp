#include <list>

template <typename T>
std::list<T> recursive_sort(std::list<T>& chunk_data) {

    if (chunk_data.empty()) {
        return chunk_data;
    }
    std::list<T> result;
    result.splice(result.begin(), chunk_data, chunk_data.begin());

    T const& partition_val = *result.begin();
    typename std::list<T>::iterator divide_point =
        std::partition(chunk_data.begin(), chunk_data.end(),
            [&](T const& val) {return val < partition_val; });

    std::list<T> lower_chunk_data;
    lower_chunk_data.splice(lower_chunk_data.begin(), chunk_data, chunk_data.begin(), divide_point);

    if (!lower_chunk_data.empty()) {
        auto l = recursive_sort(lower_chunk_data);
        result.splice(result.begin(), l, l.begin(), l.end());
    }

    if (!chunk_data.empty()) {
        auto r = recursive_sort(chunk_data);
        result.splice(result.end(), r, r.begin(), r.end());
    }
    return result;
}
