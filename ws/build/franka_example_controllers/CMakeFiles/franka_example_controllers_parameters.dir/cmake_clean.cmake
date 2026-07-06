file(REMOVE_RECURSE
  "include/franka_example_controllers/franka_example_controllers_parameters.hpp"
  "include/franka_example_controllers_parameters.hpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/franka_example_controllers_parameters.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
