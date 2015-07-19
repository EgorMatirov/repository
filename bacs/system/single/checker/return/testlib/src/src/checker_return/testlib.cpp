#include <bacs/system/single/checker.hpp>

namespace bacs {
namespace system {
namespace single {

problem::single::result::Judge::Status checker::return_cast(
    const int exit_status) {
  switch (exit_status) {
    case 0:
      return problem::single::result::Judge::OK;
    case 1:
      return problem::single::result::Judge::WRONG_ANSWER;
    case 2:
      return problem::single::result::Judge::PRESENTATION_ERROR;
    default:
      return problem::single::result::Judge::FAILED;
  }
}

}  // namespace single
}  // namespace system
}  // namespace bacs
