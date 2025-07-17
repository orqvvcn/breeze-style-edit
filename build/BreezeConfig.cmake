
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was BreezeConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

set(BREEZE_WITH_KDECORATION ON)
if(${BREEZE_WITH_KDECORATION})
    set(BREEZE_KDECORATION_PLUGIN_ID "org.kde.breeze")
else()
    set(BREEZE_KDECORATION_PLUGIN_ID "")
endif()

set(BREEZE_STYLE_NAME "breeze")
set(BREEZE_COLOR_INSTALL_ROOT "${PACKAGE_PREFIX_DIR}/share/color-schemes/")
