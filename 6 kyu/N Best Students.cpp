#include <range/v3/numeric/accumulate.hpp>
#include <range/v3/algorithm/partial_sort.hpp>

using Names_t = std::vector< std::string >;
Names_t nBestStudents( Names_t students, std::vector< std::vector< float >> grades, int n ) {
  std::vector< std::pair< float, std::string >> vs( students.size() );
  for ( size_t i{}; i < vs.size(); ++i )
    vs[ i ] = { ranges::accumulate( grades[ i ], 0. ), students[ i ] };
  ranges::partial_sort( vs, vs.begin() + n, std::greater() );
  for ( int i{}; i < n; ++i ) students[ i ] = vs[ i ].second;
  return students.resize( n ), students;
}

// NB: in this kata, calculation of the average is redundant,
// since students will all have the same number of grades.
