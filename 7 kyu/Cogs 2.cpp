std::pair< double, double> cog_rpm( const std::vector< int >& cogs, int n ) {
  return { ( n & 1 ? -1.0 : 1 ) * cogs[ n ] / cogs.front(),
           ( ( cogs.size() - n ) & 1 ? 1.0 : -1 ) * cogs[ n ] / cogs.back() };
}
