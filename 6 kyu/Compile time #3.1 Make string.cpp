template < char... C >
struct make_string {
  static constexpr char data[]{ C..., 0 };
  static constexpr auto* value{ data };
};
