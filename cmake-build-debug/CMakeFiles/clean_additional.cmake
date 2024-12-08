# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BullsAndCows_autogen"
  "CMakeFiles/BullsAndCows_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/BullsAndCows_autogen.dir/ParseCache.txt"
  )
endif()
