#pragma once

#include <bacs/system/single/common.hpp>

#include <bacs/problem/single/result.pb.h>

#include <yandex/contest/invoker/Forward.hpp>

#include <boost/noncopyable.hpp>
#include <boost/optional.hpp>

#include <memory>

namespace bacs {
namespace system {
namespace single {

/// \note must be implemented in problem
class checker : private boost::noncopyable {
 public:
  static problem::single::result::Judge::Status return_cast(int exit_status);

 public:
  explicit checker(const yandex::contest::invoker::ContainerPointer &container);
  ~checker();

  bool check(const file_map &test_files, const file_map &solution_files,
             problem::single::result::Judge &result);

 private:
  class impl;

  std::unique_ptr<impl> pimpl;
};

}  // namespace single
}  // namespace system
}  // namespace bacs
