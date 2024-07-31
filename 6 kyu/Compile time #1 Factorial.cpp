template< int x >
struct factorial {
  static constexpr long value{ []{
    long f{ 1 }, n{ 1 };
    while ( n <= x ) f *= n++;
    return f; }()
  };
};
