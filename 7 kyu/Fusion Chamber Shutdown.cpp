std::array<int,3> burner( int c, int h, int o ) {
  int w, d;
  return { w = std::min( h/2, o ), // water
    d = std::min( c, ( o-w )/2 ),  // carbon dioxide
    std::min( c-d, ( h-w*2 )/4 )}; // methane
}
