#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "actions::actions__rosidl_typesupport_fastrtps_cpp" for configuration ""
set_property(TARGET actions::actions__rosidl_typesupport_fastrtps_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(actions::actions__rosidl_typesupport_fastrtps_cpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libactions__rosidl_typesupport_fastrtps_cpp.so"
  IMPORTED_SONAME_NOCONFIG "libactions__rosidl_typesupport_fastrtps_cpp.so"
  )

list(APPEND _cmake_import_check_targets actions::actions__rosidl_typesupport_fastrtps_cpp )
list(APPEND _cmake_import_check_files_for_actions::actions__rosidl_typesupport_fastrtps_cpp "${_IMPORT_PREFIX}/lib/libactions__rosidl_typesupport_fastrtps_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
