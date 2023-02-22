
#include<iostream>
#include<vector>
using namespace std;
/*
    STL:(Standard Template Library)[conatiners+Algo+Iterators]
        1.Library of genric classes and function.
        2.Resue well tested components.
        3.In limited time it can resize,sort,search so its saves time.
        4.Alex and Meng gave this concept os STL.
    Components of STL:
        1.Containers: Stores data and use template classes.
        2.Alogorithms:Sorting,Searching,Use template Functions.
        3.Iterators:
            #Objsect points to an elemetns in container.
            #Handled just like pointers.
            #Connects algo with containers.
    STL is used bcz its a good idea not reinvent the wheel.

    !!Conatiners!!:
        #Sequence Containers: Linear fashion(Vector,List,Dequeue).
            1.Vector(Random Acess fast and inseration deletion slow at middle and at ends fast).
            2.List(Random Acess slow and inseration deletion fast at middle and at ends slow).
        Associative Container:Direct Acess Tree  like(Set/Multiset,Map/Multimap).
            All Operation are fast except Random Acess.
        Derived Container:Real world Modelling (stack,Queue,Priority-Queue).
            Depends on Data structure and alogorithm.
*/
//Vector(automatically manage the size while this is not happen in array ) in C++:
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<" "<<v[i];
        //cout<<" "<<v.at(i);
    }
    cout<<endl;
}

int main()
{
    vector <int> vec1;
    int element,size=5;
    //cout<<"Enter the size of the vector"<<endl;
    //cin>>size;
    //for(int i=0;i<size;i++)
    //{
    //    cout<<"Enter an element you want add in vector"<<endl;
    //    cin>>element;
    //    vec1.push_back(element);
    //}
    //vec1.pop_back();   
    //display(vec1);
    //vector<int>::iterator iter=vec1.begin();
    //vec1.insert(iter+1,2,566);
    //display(vec1);
    vector <char> vec2(4);//4-element charcter vector
    vec2.push_back('5');
    //display(vec2);
    //vector <char> vec3(vec2);//4-element charcter vector from vec2
    //display(vec3);
    vector<int> vec4(4,13);//4-element vector 
    display(vec4);
    cout<<vec4.size();//return size 4
    return 0;
}