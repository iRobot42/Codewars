unsigned long long numPrimorial( unsigned short number ) {
  return std::vector< unsigned long long >{ 0, 2, 6, 30, 210, 2310, 30030,
    510510, 9699690, 223092870, 6469693230, 200560490130, 7420738134810,
    304250263527210, 13082761331670030, 614889782588491410 }[ number ];
}
