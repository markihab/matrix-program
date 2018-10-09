#include <iostream>
#include <vector>
#include<cstring>
using namespace std;
vector<string> split(string target, string delimiter)
{
string container = "";

vector<string> carrier;


    for(int i=0 ; i < target.length() ; i++)
    {
        if(target[i] != delimiter[0])
        {
           container+=target[i];
        }
        else
        {
            carrier.push_back(container);
            container="";
            continue;
        }
    }
    carrier.push_back(container);
    container="";
        return carrier;

}
int main()
{
    string target,delimiter;
target= ("10,20,30");
delimiter =",";
vector<string> res = split(target,delimiter);
for (int i = 0; i < res.size(); i++)
{
    cout << "\"" << res[i] << "\"";
    if (i != res.size()-1)
        cout << ",";
}
return 0;
}
