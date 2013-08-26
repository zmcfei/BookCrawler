/// @file global.cpp
/// @brief to crawl 360buy's information of books!
/// @author haitao
/// @version zmcc1.0
/// @date 2013-01-30
#include "global.h"

int global::httpport;
string global::starturl;

global::global(int argc, char *argv[])
{
    outendlist = new Fifo<string>();
    booklist = new Fifo<string>();
    bookinfolist = new Fifo<BookInfo>();
    char * configFile="zmcc.conf";
    if( 2 < argc) {
        if (!strcmp(argv[1], "-c") ) {
            configFile = argv[2];
        }else
        {
            fprintf(stderr,"should be./zmcc -c [filename]");
            exit(1);
        }
    }
    output_file.open("out_bookinfo.txt");
    readConfig(configFile); 
}
global::~global()
{}
bool global::readConfig(char * filename)
{
    ifstream infile((const char *)filename);
    if(!infile)
    {
        fprintf(stderr,"there is no this filename!");
        return false;
    }
    map<string,string> m;
    m.clear();
    string line,key,value;
    while( getline(infile,line) )
    {
        if( AnalyseLine(line,key,value) )
            m[key] = value;
    }
    infile.close();

    httpport = atoi(m["httpPort"].c_str());
    starturl = m["startUrl"];
    return true;
}
bool global::AnalyseLine( const string &line , string &key , string &value )
{
    if( line.empty() )
        return false;

    int start_pos=0,end_pos=line.size()-1,pos;
    if( (pos=line.find('#')) != -1 )
    {
        if( pos == 0 )
            return false;
        end_pos = pos-1;
    }
    string new_line = line.substr(start_pos , start_pos+1-end_pos);
    if( (pos=new_line.find('=')) == -1 )
        return false;
    key = new_line.substr( 0 , pos );
    value = new_line.substr( pos+1 , end_pos+1-(pos+1));
    Trim(key);
    if( key.empty() )
        return false;
    Trim(value);
    return true;
}
void global::Trim( string &str )
{
    if( str.empty() )
        return;

    int i,start_pos,end_pos;
    for( i=0 ; i<str.size() ; i++ )
    {
        class Config;		if( !IsSpace(str[i]) )
            break;
    }

    if( i==str.size() )
        return;

    start_pos = i;
    for( i=str.size()-1 ; i>=0 ; --i )
    {
        if( !IsSpace(str[i]) )
            break;
    }

    end_pos = i;
    str = str.substr( start_pos , end_pos-start_pos+1 );
}

bool global::IsPrefix(const std::string & str, const std::string & prefix)
{
    return (str.length() >= prefix.length() && 
            str.compare(0, prefix.length(), prefix) == 0);
}
