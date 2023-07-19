#include <fmt/format.h>
class SequenceSum {
  int count;
public:
  SequenceSum( int );
  std::string showSequence();
};
SequenceSum::SequenceSum( int c ) : count( c ) {}
std::string SequenceSum::showSequence() {
  if ( count < 0 ) return fmt::format( "{}<0", count );
  else if ( !count ) return "0=0";
  std::string s{ "0" };
  long sum{};
  for ( int i{ 1 }; i <= count; ++i )
    s += fmt::format( "+{}", i ), sum += i;
  return fmt::format( "{} = {}", s, sum );
}
