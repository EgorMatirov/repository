#include "native_compilable.hpp"

namespace bacs{namespace system{namespace single{namespace builders
{
    class gcc: public native_compilable
    {
    public:
        explicit gcc(const std::vector<std::string> &arguments);

    protected:
        ProcessPointer create_process(const ProcessGroupPointer &process_group,
                                      const name_type &name) override;

    private:
        std::string m_executable;
        std::vector<std::string> m_flags;

    private:
        static const bool factory_reg_hook;
    };
}}}}
