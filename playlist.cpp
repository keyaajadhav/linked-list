#include<iostream>
using namespace std;

struct node{	
	 
	string title;
	string artist;
	node *next;
	};
node *header=NULL;


void add_song()
{
	string song_name;
	string art_name;
	node *song;
	song=new node;
	cout<<"Enter title of song:";
	cin>>song_name;
	cout<<"Enter artist";
	cin>>art_name;
	song->title=song_name;
	song->artist=art_name;
	song->next=NULL;
	
	if(header==NULL)
	{
	header=song;
	}  
	else
	{
	node *temp=header;
	//temp=header;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=song;
	}
	
	
	}
void remove(int val)
{	
	node *temp=header;
	
	//node *prev=NULL;
	int i=1;
	while( i<val-1)
	{
	i++;
	temp=temp->next;
	}
	node *curr=temp->next;
	temp->next=temp->next->next;
	}
	
void search_song(string s)
{
	
	node *temp=header;
	while(temp->title!=s)
	{
	temp=temp->next;
	}
	cout<<"Now"<<" "<<"Playing"<<" "<<temp->title<<" "<<"By"<<" "<<temp->artist;
	}


	
void print()
{
node *temp;
temp=header;
while(temp!=NULL){
cout<<temp->title<<endl;
temp=temp->next;
}
}
int main()
{
node s;
int n;
cout<<"Enter number of songs in the playlist:";
cin>>n;
for(int i=0;i<n;i++)
{
add_song();
}
cout<<"Your Playlist:";
print();
int m;
cout<<"Enter position of the song to be deleted:";
cin>>m;
remove(m);
cout<<"Updated Playlist:";
print();
string z;
cout<<"Enter the song you want to be played:";
cin>>z;
search_song(z);

return 0;
}

	



