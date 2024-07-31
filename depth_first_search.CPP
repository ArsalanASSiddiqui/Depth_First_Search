#include <iostream>
#include <vector>
using namespace std;
 
vector<int> g[10];
int visiter[10] = {false};
void edg(int src , int desc){
    g[src].push_back(desc);
    std::cout << "Source : Destination " << src << " : " << desc << std::endl;
}
void dfs(int val){
    if(visiter[val]== true) return;
    std::cout << val << std::endl;
    visiter[val]==true;
    vector<int>::iterator i;
    for(i=g[val].begin();i!=g[val].end();++i){
        if(visiter[*i]==false){
            std::cout << "*i " << *i << std::endl;
            dfs(*i);
        }
    }
    
 
    
}
int main()
{
    std::cout << "vector is" <<g<< std::endl;
    std::cout << "Array is " << visiter << std::endl;
    edg(0,1);
    edg(0,2);
    edg(1,4);
    edg(4,5);
    edg(2,8);
    edg(8,13);
    edg(8,15);
    edg(8,10);
    edg(10,18);
    edg(15,20);
    dfs(2);


    std::cout<<"Hello World";
 
    return 0;
}