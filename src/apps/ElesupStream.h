/// @file ElesupStream.h
/// @brief the virtual class for base of 360buy . dangdang & zhuoyue input
/// @author haitao
/// @version zmcc1.0
/// @date 2013-01-30
#ifndef _ElesupStream_h
#define _ElesupStream_h
#include <string>
class ElesupStream
{
public:
    virtual ~ElesupStream(){}
    /*virtual char Peek() = 0;*/
    /*virtual char Read() = 0;*/
    /*virtual void Close() = 0;*/
    /*virtual bool IsOpen() const = 0;*/
    /// @brief Get the context of the url;
    ///
    /// @return html context!
    virtual bool ParseURL(std::string & url) = 0;
    virtual void DownLoadBookInfo() =0;
};

#endif
