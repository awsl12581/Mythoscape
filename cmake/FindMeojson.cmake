if (TARGET meojson)
    return()
endif()

include(FetchContent)

FetchContent_Declare(
    meojson
    GIT_REPOSITORY "https://github.com/MistEO/meojson"
    GIT_TAG "v4.4.1"
    GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(meojson)

# 设置 target 的属性，IDE 中分组归类
set_target_properties(meojson PROPERTIES FOLDER "external")

include(FindPackageHandleStandardArgs)

find_package_handle_standard_args(
    meojson
    DEFAULT_MSG
)