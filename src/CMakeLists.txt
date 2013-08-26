set(myexe_EXEC_SRCS
    main.cpp
    apps/global.cpp
    apps/HTTP360buyStream.cpp
    apps/PageDownloader.cpp
    apps/URLElesupStream.cpp
    apps/BookInfo.cpp
    # 其它cpp文件
    )
#一定要包含main.cpp 包含的"*.h"文件
include_directories(
    ${PROJECT_SOURCE_DIR}/src/apps/
    ${PROJECT_SOURCE_DIR}/utils/
    ${PROJECT_SOURCE_DIR}/src/libs/
    #${PROJECT_SOURCE_DIR}/src/libs/markup 
    #${PROJECT_SOURCE_DIR}/src/modules/
    #/opt/Ice/include
    )
#库文件路径
link_directories(
    /usr/local/lib
    #$ENV{ORACLE_HOME}/lib
    )

#添加自己生成的动态库/静态库 设置目标所需要的链接库
#link_libraries(myexe markup)
link_libraries(zmcc threadpool_lib)

add_executable(zmcc ${myexe_EXEC_SRCS})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/)
#install(TARGETS main RUNTIME DESTINATION bin)
