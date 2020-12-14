#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <regex>

using namespace std;
int main()
{
    string filename;
    cin >> filename;
    ifstream in;
    ofstream out;
    in.open(filename);
    out.open(filename+"new");
    string line;
    while(getline(in,line))
    {
        //output files changes
        if (filename.find("out")!=string::npos)
        {
            if (line.find("AddArtist:")!=string::npos)
            {
                line=regex_replace(line,regex("Artist"),"Course");
                out<<line<<endl;
            }
            else if (line.find("RemoveArtist:")!=string::npos)
            {
                line=regex_replace(line,regex("Artist"),"Course");
                out<<line<<endl;
            }
            else if (line.find("AddToSongCount:")!=string::npos)
            {
                line=regex_replace(line,regex("AddToSongCount"),"WatchClass");
                out<<line<<endl;
                
            }
            else if (line.find("NumberOfStreams:")!=string::npos)
            {
                line=regex_replace(line,regex("NumberOfStreams"),"TimeViewed");
                out<<line<<endl;
            }
            else if (line.find("GetRecommendedSongs:")!=string::npos)
            {
                line=regex_replace(line,regex("GetRecommendedSongs"),"GetMostViewedClasses");
                out<<line<<endl;
            }
            else if (line.find("Artist	|	Song")!=string::npos)
            {
                out<<"Course	|	Class"<<endl;
            }
            else if (line.find("--End of recommended songs--")!=string::npos)
            {
                line=regex_replace(line,regex("--End of recommended songs--"),"--End of most viewed classes--");
                out<<line<<endl;
            }
            else
            {
                out<<line<<endl;
            }
            
        }
        else
        {
               //input files changes
            if (line.find("AddArtist")!=string::npos)
            {
                line=regex_replace(line,regex("AddArtist"),"AddCourse");
                out<<line<<endl;
            }
            else if (line.find("RemoveArtist")!=string::npos)
            {
                line=regex_replace(line,regex("RemoveArtist"),"RemoveCourse");
                out<<line<<endl;   
            }
            else if (line.find("AddToSongCount")!=string::npos)
            {
                line=regex_replace(line,regex("AddToSongCount"),"WatchClass");
                line.insert(line.length()-1," 1");
                out<<line<<endl;
            }
            else if (line.find("NumberOfStreams")!=string::npos)
            {
                line=regex_replace(line,regex("NumberOfStreams"),"TimeViewed");
                out<<line<<endl;
            }
            else if (line.find("GetRecommendedSongs")!=string::npos)
            {
                line=regex_replace(line,regex("GetRecommendedSongs"),"GetMostViewedClasses");
                out<<line<<endl;
            }   
            else
            {
                out<<line<<endl;
            }
            
        }
    }
    out.flush();   
    in.close();
    out.close();
}