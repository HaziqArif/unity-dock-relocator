//
//
//
//
//
//

#include <iostream>
using namespace std;

//int dockPost(string location);
class Docker{
private:
    char post;
    string postLoc;
    int state;
public:
    Docker(){
        post='';
        postLoc="";
        state=0;      //fail
    };
    ~Docker(){};
    int location(string input){
        if (input=="Left" || input=="left" || input=="l") post='l';
        if (input=="Bottom" || input=="bottom" || input=="b") post='b';
        while(post=='l' || post=='b'){
            switch(post){
                case 'l':
                    state=1;
                    return system("gsettings set com.canonical.Unity.Launcher launcher-position Left ");
                    break;
                case 'b':
                    state=1;
                    return system("gsettings set com.canonical.Unity.Launcher launcher-position Bottom ");
                    break;
                default:
                    break;
            }
        }
        if(post!='l' && post!='b'){ state=-1; post='q';}
        return state;
    };
};


int main(){
    Docker position;
    int fnState;
    string dockPosition="";
    cout<<"Dock position <cancel by q>: ";
    cin>>dockPosition;
    fnState=position.location(dockPosition);
    cout<<"Returned with "<<fnState<<endl;
    if (fnState==-1) cout<<"Aborted"<<endl;
    if (fnState==1) cout<<"Success"<<endl;
    return 0;
}

