std::string gimme_the_letters( const std::string& s ) {
  std::string r{ s.front() };
  while ( r.back() != s.back() ) r += r.back() + 1;
  return r;
}
