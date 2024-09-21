#include <numeric>
std::string outed( const std::map< std::string, int >& meet, const std::string& boss ) {
  return ( std::accumulate( meet.cbegin(), meet.cend(), 0., []( int acc, const auto& p ) {
    return acc + p.second; }) + meet.at( boss )) / meet.size() <= 5
      ? "Get Out Now!" : "Nice Work Champ!";
}
