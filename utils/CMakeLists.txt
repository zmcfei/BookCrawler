set(Threadpool_lib
    CXJob.cpp
    CThread.cpp
    CThreadPool.cpp
    CWorkerThread.cpp
    CThreadManage.cpp
)

include_directories(
    ${PROJECT_SOURCE_DIR}/utils/
)

link_directories(
    /usr/local/lib    
)

link_libraries(threadpool_lib curl)
add_library(threadpool_lib STATIC ${Threadpool_lib})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/src/libs/)
