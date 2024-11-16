#include <unordered_set>
unsigned integer_depth( unsigned n ) {
  unsigned depth{};
  std::unordered_set< unsigned > digits;
  while ( digits.size() < 10 ) {
    auto multiple{ n * ++depth };
    do digits.insert( multiple % 10 );
    while ( multiple /= 10 );
  }
  return depth;
}
