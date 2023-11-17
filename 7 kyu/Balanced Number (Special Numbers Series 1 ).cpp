#include <numeric>
std::string balancedNum( unsigned long long number ) {
  const auto s{ std::to_string( number )};
  const auto mid{( s.size()-1 ) / 2 };
  return accumulate( s.cbegin(), s.cbegin() + mid, 0 )
      - accumulate( s.crbegin(), s.crbegin() + mid, 0 )
    ? "Not Balanced" : "Balanced";
}
