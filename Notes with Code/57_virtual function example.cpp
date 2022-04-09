#include <iostream>
#include <cstring>
using namespace std;

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
    virtual void display(){} // if we do not write virtual keyword here ,then object of CodeWHVideo and CodeWHTect class bydefaultly class display of base class
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

/* Rules for virtual function
1. They can not be static
2. They are access by object pointers
3. Virtual function can be a friend of another class
4. A virtual function in base class might not be used.
5. if a virtual function is defined in abase class , there is no necessity of redefining it in the derived class
    (if we do not redefine display then it pointer of video or text class call CodeWH display function)
*/