#pragma once

#include <string>
#include <boost/filesystem/path.hpp>

/**
 * Class to create a temporary directory with a unique name
 * and destroy it once it is no longer needed.
 * */
class temp_directory {

public:
    temp_directory();
    ~temp_directory();
    std::string const& get_dir_name() const;

private:
    std::string dir_name;

};

/**
 * Class to create a temporary file with a unique name and
 * destroy it once it is no longer needed.
 */
class temp_file {

public:
    temp_file(std::string const& content);
    ~temp_file();
    std::string const& get_file_name() const;

private:
    std::string file_name;

};

/** Generates a unique string for use as a file path. */
boost::filesystem::path unique_fixture_path();