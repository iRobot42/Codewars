class Arith {
  unsigned number;
  const std::vector< std::string > N{ "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
    "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty" };
  inline unsigned to_number( const std::string& s ) const {
    return find( N.cbegin(), N.cend(), s ) - N.cbegin(); }
public:
  explicit Arith( const std::string& n ) { number = to_number( n ); }
  std::string add( const std::string& n ) const { return N[ number + to_number( n ) ]; }
};
