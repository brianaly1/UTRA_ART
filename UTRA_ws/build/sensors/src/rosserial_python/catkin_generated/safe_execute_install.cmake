execute_process(COMMAND "/home/utra-art/UTRA/UTRA_ws/build/sensors/src/rosserial_python/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/utra-art/UTRA/UTRA_ws/build/sensors/src/rosserial_python/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
