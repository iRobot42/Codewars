std::pair< long long, long long> first_coefficient( long long n ) {
  const long long bound{ n & 1 ? n / 2 + 1 : 0 };
  return std::make_pair( -bound, +bound );
}
