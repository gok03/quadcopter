FILE(REMOVE_RECURSE
  "../msg_gen"
  "../msg_gen"
  "../src/height_quad/msg"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/height_quad/msg/__init__.py"
  "../src/height_quad/msg/_full_pose.py"
  "../src/height_quad/msg/_state.py"
  "../src/height_quad/msg/_Attitude.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
