#include <fmt/format.h>
class X {
  int m_a, m_b;
public:
  explicit X( int a = 1, int b = 2 ) : m_a( a ), m_b( b ) {}
  X& operator+=( const X& x ) { m_a += x.m_a, m_b += x.m_b; return *this; }
  X& operator++() { ++m_a, ++m_b; return *this; }
  X operator++( int ) { X x{ *this }; return operator++(), x; }
  X operator+( const X& x ) const { return X{ m_a + x.m_a, m_b + x.m_b }; }
  friend auto& operator<<( std::ostream& os, const X& x ) { return os << x.print(); }
  std::string print() const { return fmt::format( "[{},{}]", m_a, m_b ); }
};
