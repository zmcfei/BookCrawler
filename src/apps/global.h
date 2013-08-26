#ifndef _global_
#define _global_

#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <Fifo.h>
#include "BookInfo.h"
using namespace std;
struct global
{
   global(int argc,char *argv[]);
   ~global();

    static int httpport;
    static string starturl;
    static ofstream output_file;
    static Fifo<string> * outendlist;
    /// @brief to store the list of html which contains books.
    static Fifo<string> * booklist;
    /// @brief to store the list of bookinformation.
    static Fifo<BookInfo> * bookinfolist;	
    bool AnalyseLine( const string &line , string &key , string &value );
    /// @brief to read the config file. default file is "zmcc.conf"
    ///
    /// @param filename
    ///
    /// @return ture or false
	bool readConfig(char *filename);
    

	bool defaultConfig()
	{
	}
    bool IsSpace( char c )
	{
		if( c==' ' || c=='\t' )
			return true;
		return false;
	}

	bool IsCommentChar( char c )
	{
		switch(c)
		{
			case '#':
				return true;
			default:
				return false;
		}
	}
	void Trim( string &str );
static bool IsPrefix(const std::string & str, const std::string & prefix);

};
#endif
