#include <thread>
template< class Callback >
class Timer {
  std::chrono::seconds time;
  Callback call;
public:
  explicit Timer( size_t t, Callback c ) : time( t ), call( c ) {};
  void Start() {
    auto t{ [ & ](){ std::this_thread::sleep_for( time ), call(); }};
    std::thread( t ).detach();
  }
};
