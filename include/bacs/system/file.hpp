#pragma once

#include <bacs/file.pb.h>

#include <boost/filesystem/path.hpp>

#include <string>

namespace bacs{namespace system{namespace file
{
    std::string read(const boost::filesystem::path &path,
                     const bacs::file::Range &range);

    std::string read_first(
        const boost::filesystem::path &path,
        const std::uint64_t size);

    std::string read_last(
        const boost::filesystem::path &path,
        const std::uint64_t size);
}}}
