#include <string>
#include "global.h"
#include "URLElesupStream.h"
using namespace std;
class PageDownloader
{
private:
    std::string URL;
    URLElesupStream *InputStream;
public:
    PageDownloader();
    ~PageDownloader();

    void downloadPage(std::string & url);

};
