
#include<iostream>
#include"Cssh.h"

 
int main(int argc, const char * argv[])
{
    using namespace std;
//    using namespace fish;
    
    SSH2_HELPER::Ssh2 ssh("127.0.0.1");
    ssh.Connect("root","123456");
	SSH2_HELPER::Channel* channel = ssh.CreateChannel();
    channel->Write("cd /root/jyxworking/123/; pwd");
    cout<<channel->Read()<<endl;
    channel->Write("cat jyx123file");
    //channel->Write("touch jyx123file");
    cout<<channel->Read()<<endl;
    delete channel;
    return 0;
}
