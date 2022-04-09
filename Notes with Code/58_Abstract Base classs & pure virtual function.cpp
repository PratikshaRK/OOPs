#include<iostream>
#include <cstring>
using namespace std;
/* Abstract class have atleast one pure virtual function.
Abstract base class: ham ye class isi liye banate hai ki us class ko derive karate or new feature add karane hai ani ek virtual function la override karave lagte(dispay).
we create abstract class to derived new classes and then we work on function/virtual function of derived classes.

Pure virtual function: we need to redefine virtual function is manendatory in derived class and to avoid call of by default function base class.
*/

class CodeWH
{
protected:
    string title;
    float rating;

public:
    CodeWH(string s, float r) // constructor ,s is string
    {
        title = s;
        rating = r;
    }
    virtual void display()=0;  // do-nothing function--> pure virtual function
    // if we do not write virtual keyword here ,then object of CodeWHVideo and CodeWHTect class bydefaultly class display of base class
};

class CodeWHVideo: public CodeWH{
    float videolength;
    public:
    CodeWHVideo(string s, float r, float vl): CodeWH(s,r)  // refer constructor in derived class
    {
        videolength = vl;
    }

    void display()
    {
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Lenght of this video is: "<<videolength<<" minites"<<endl;
    }
};

class CodeWHText: public CodeWH{
    int wordcount;
    public:
    CodeWHText(string  s, float r, int wc): CodeWH(s,r)  // refer constructor in derived class
    {
        wordcount = wc;
    }

    
    void display()
    {
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Rating of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
        cout<<"No of words in this text tutorial is: "<<wordcount<<" words"<<endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for code with Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating =4.89;
    CodeWHVideo djvideo(title,rating,vlen); //djvideo is object of CodeWHVideo class
    // djvideo.display();

    // for code with Harry Text
    title = "Django tutorial text";
    words = 433;
    rating =4.10;
    CodeWHText djText(title,rating,words);
    djText.display();

    // create two pointers of CodeWH
    CodeWH * tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djText;

    tuts[0]->display(); // derived class version of display function is call
    tuts[1]->display();

    return 0;
}

