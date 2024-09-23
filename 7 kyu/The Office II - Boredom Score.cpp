#include <numeric>
std::string boredom( const std::map< std::string, std::string >& staff ) {
  std::unordered_map< std::string, int > score{{ "accounts", 1 },
    { "finance", 2 }, { "canteen", 10 }, { "regulation",     3 },
    { "trading", 6 }, { "change",   6 }, { "IS",             8 },
    { "retail",  5 }, { "cleaning", 4 }, { "pissing about", 25 }};
  switch ( std::accumulate( staff.cbegin(), staff.cend(), 0, [ &score ]
         ( int acc, const auto& p ){ return acc + score[ p.second ]; })) {
    case 1 ... 80: return "kill me now";
    case 81 ... 100: return "i can handle this";
    default: return "party time!!";
  }
}
