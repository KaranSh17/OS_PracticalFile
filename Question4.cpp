/* a program to print file details including owner access permissions, file access time,
where file name is given as argument. */

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char **argv){
    if(argc<2){
        cout<<"\nProvide file name as command line argument\n";
        exit(1);
    }
    cout<<"\nDetails for file "<<argv[1]<<" :\n";
    cout<<"\nOwn|Grp|Otr|Created|Acc. time\n";

    char s[] = "ls -l ";
    //concatenate the file name in command
    strcat(s,argv[1]);
    strcat(s," | awk '{print $1, $6, $7, $8}'");

    system(s);

    cout<<"\n\n->Own: Owner permissions\n";
    cout<<"->Grp: Group members permissions\n";
    cout<<"->Oht: Other users permissions\n";
    cout<<"->  r: read   w: write   x: execute\n";

    return 0;
}

