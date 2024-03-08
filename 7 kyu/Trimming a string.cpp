std::string trim( const std::string& st, size_t s ) {
  return s < st.size() ? st.substr( 0, s - 3 * ( s > 3 )) + "..." : st;
}
