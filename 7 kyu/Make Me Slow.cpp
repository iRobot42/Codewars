#include <thread>
void make_me_slow() {
  std::this_thread::sleep_for( std::chrono::seconds( 7 ));
}
