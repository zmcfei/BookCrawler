#include "URLElesupStream.h"
#include "HTTP360buyStream.h"
#include "ElesupStream.h"

ElesupStream * URLElesupStream::StreamFactory(const std::string & url)
{
    std::string tempUrl(url);
    if(global::IsPrefix(tempUrl,"http://"))
    {
        return new HTTP360buyStream(url);
    }
}

URLElesupStream::URLElesupStream(const std::string & Url):
                                   mStream(StreamFactory(Url))
{

}
URLElesupStream::~URLElesupStream()
{
    delete mStream;
}
bool URLElesupStream::ParseURL(std::string & url)
{
    return mStream -> ParseURL(url);
}
//char URLElesupStream::Peek()
//{
//return mStream -> Peek();
//}
//char URLElesupStream::Read()
//{
//return mStream -> Read();
//}
//void URLElesupStream::Close()
//{
//return mStream -> Close();
//}
//bool URLElesupStream::IsOpen() const
//{
//return mStream -> IsOpen();
//}

void URLElesupStream::DownLoadBookInfo()
{
    return mStream -> DownLoadBookInfo();
}

