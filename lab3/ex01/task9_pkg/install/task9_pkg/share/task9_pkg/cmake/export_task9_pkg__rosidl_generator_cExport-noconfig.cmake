#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "task9_pkg::task9_pkg__rosidl_generator_c" for configuration ""
set_property(TARGET task9_pkg::task9_pkg__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(task9_pkg::task9_pkg__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtask9_pkg__rosidl_generator_c.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libtask9_pkg__rosidl_generator_c.dylib"
  )

list(APPEND _cmake_import_check_targets task9_pkg::task9_pkg__rosidl_generator_c )
list(APPEND _cmake_import_check_files_for_task9_pkg::task9_pkg__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libtask9_pkg__rosidl_generator_c.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)