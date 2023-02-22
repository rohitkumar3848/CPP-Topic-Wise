#include<iostream>
using namespace std;
class CWH
{
    protected:
    string title;
    float  rating;
    public:
    CWH(string t, float r)
    {
        title=t;
        rating=r;
    }
    virtual void Display()
    {

    }
};
class CWHVideo:public CWH
{
    protected:
    float  videolength;
    public:
    CWHVideo(string t,float r,float vl):CWH(t, r)
    {
        videolength=vl;
    }
    void Display()
    {
        cout<<"This is the amazing videos with title name "<<title<<endl;
        cout<<"Ratings "<<rating<<" out of 5 stars "<<endl;
        cout<<"Length of this video is "<<videolength<<"minutes"<<endl;
    }
};
class CWHText:public CWH
{
    protected:
    int  text;
    public:
    CWHText(string t,float r,int tw):CWH(t, r)
    {
        text=tw;
    }
    void Display()
    {
        cout<<"This is the amazing Description with title name "<<title<<endl;
        cout<<"Ratings "<<rating<<" out of 5 stars "<<endl;
        cout<<"NO. of words in text tutorial "<<text<<"minutes"<<endl;
    }
};
int main()
{
    string title;
    float rating,vlen;
    int words;
    //For CWHVideo
    title="C++";
    vlen=4.56;
    rating=4;
    CWHVideo djvideo(title,rating,vlen);

    //For CWHText
    title="DSA";
    words=433;
    rating=5;
    CWHText djtext(title,rating,words);

    CWH *tuts[2];
    tuts[0]=& djvideo;
    tuts[1]=& djtext;
    
    tuts[0]->Display();
    tuts[1]->Display();
    return 0;
}