#ifndef _URLElesupStream_
#define _URLElesupStream_
/// @name this class is use to make an object to suit the url.
/// @{ 
///  @} 

#include "ElesupStream.h"
#include "global.h"
#include <string>

class URLElesupStream : public ElesupStream
{
private:
    ElesupStream * mStream;
public:
    URLElesupStream(const std::string & url);
    virtual ~URLElesupStream();
    /*virtual char Peek() = 0;*/
    /*virtual char Read() = 0;*/
    /*virtual void Close() = 0;*/
    /*virtual bool IsOpen() const = 0;*/
    
    virtual bool ParseURL(std::string & url);
    
    /// @brief 
    virtual void DownLoadBookInfo();
    
    
    /// @brief use the factory. make a object which is inherit from ElesupStream.
    /// @param url : use this to decide the object  is  360buy or dangdang 's form.
    /// @return The father class .
    static ElesupStream * StreamFactory(const std::string & url);
};

#endif
