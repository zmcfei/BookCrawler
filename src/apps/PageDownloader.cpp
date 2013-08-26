#include "PageDownloader.h"

PageDownloader::PageDownloader()
{
}
PageDownloader::~PageDownloader()
{
}
void PageDownloader::downloadPage(std::string & url)
{
    InputStream = new URLElesupStream(global::starturl);
    InputStream -> ParseURL(global::starturl);
    InputStream -> DownLoadBookInfo();
}
