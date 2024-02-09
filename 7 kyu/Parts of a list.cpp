using st = std::string;
struct PartList {
  static std::vector< std::pair< st, st >> partlist( std::vector< st >& arr ) {
    const auto s{ arr.size() };
    std::vector< std::pair< st, st >> parts( s-1 );
    for ( size_t p{ 1 }; p < s; ++p ) {
      auto& [ a, b ]{ parts[ p-1 ] };
      for ( size_t i{ 0 }; i < p; ++i ) a += arr[ i ] + ' ';  a.pop_back();
      for ( size_t i{ p }; i < s; ++i ) b += arr[ i ] + ' ';  b.pop_back();
    }
    return parts;
  };
};
