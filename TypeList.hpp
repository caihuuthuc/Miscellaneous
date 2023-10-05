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

  template <typename TList, unsigned int index>
  struct TypeAt {
    using type = typename TypeAt<typename TList::Tail, index - 1>::type;
  };

  template <typename TList>
  struct TypeAt <TList, 0> {
    using typename type = TList::Head;
  };

  // Page 56
};
