#include "TypeListLinearization.hpp"


class NullType {};

template <typename THead, typename TTail>
struct TypeList {
  using Head = THead;
  using Tail = TTail;
};

namespace TL {
  template <typename TList>
  struct Length {
    static constexpr unsigned value = 1 + Length<typename TList::Tail>::value;
  }

  template <>
  struct Length <NullType> {
    static constexpr unsigned value = 0;
  };




};
