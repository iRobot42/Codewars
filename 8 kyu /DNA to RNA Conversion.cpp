std::string DNAtoRNA( std::string dna ) {
  for ( char& c : dna ) if ( c == 'T' ) c = 'U';
  return dna;
}
