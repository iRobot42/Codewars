std::string DNAStrand( const std::string& dna ) {
  std::string s{ dna };
  for ( char& c : s )
    switch ( c ) {
      case 'A': c = 'T'; break;
      case 'T': c = 'A'; break;
      case 'C': c = 'G'; break;
      case 'G': c = 'C'; break;
    }
  return s;
}
