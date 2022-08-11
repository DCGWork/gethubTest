#include <iostream>
#include <string>
using namespace std;




int main()
{
    string x="abggffaaoobbbddnndd", *p,x2="";
    int i=0,j=1;
    p=&x;
    char temp='m';
	//j=i;
//kk

//lllllllllllllllllllllllllllll

    while (i<x.length())
    {
// cout << x.at(1) <<"\n";
        //temp=shar(x);
// cout << temp <<"\n";
//x2=x2+x.at(i);
        if (i+1<x.length())
        {
            if(x.at(i)==x.at(i+1))
            {
                j++;
                // cout << temp <<"\n";
            }
            if(x.at(i)!=x.at(i+1))
            {
                x2=x2+x.at(i)+ to_string(j)+ " ";
                j=1;
            }

        }


        i++;
    }
    cout <<x<<" ===  "<<x2;
    return 0;
}

                        