ptrdiff_t least_larger( const std::vector< int >& a, size_t tar ) {
  ptrdiff_t res{ -1 };
  for ( size_t cur{}; cur < a.size(); ++cur )
    if ( a[ cur ] > a[ tar ] && ( res == -1 || a[ cur ] < a[ res ] ))
      res = cur;
  return res;
}
