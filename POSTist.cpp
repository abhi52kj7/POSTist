#include <bits/stdc++.h>

using namespace std;
/*
string hashing(string ownerId, float value, string ownerName)
{

	return hash;
}


class block
{
	time_t timeStamp;
	struct data = new data;
	int nodeNumber;
	string nodeID;
	string referenceNodeId;
	string childReferenceNodeID[];
	string genesisReferenceNodeID;
	string hashValue;
	
	block(struct data)
	{

	}

public:
	void getData()
	{

	}
};
*/

struct data
{
	string ownerId;
	float value;
	string ownerName;
	string hash;	
};

struct node{
	time_t timeStamp;
	struct data* set = new data;
	int nodeNumber;
	string nodeID;
	string referenceNodeId;
	string childReferenceNodeID;
	string genesisReferenceNodeID;
	string hashValue;
	int childNO;
	//string childNode[];
}*genesis;

void getData(string ownerId, float value, string ownerName,struct node* parent = NULL)
{
	if(genesis == NULL)
	{
		struct node* ptr = new node;
		genesis = ptr;
		ptr->timeStamp = time(0);
		ptr->set->ownerId = ownerId;
		ptr->set->value = value;
		ptr->set->ownerName = ownerName;
		ptr->nodeNumber = 1;
		//ptr.nodeID = 
		//ptr->referenceNodeId;
		//ptr->genesisReferenceNodeID;
	}
	else
	{

	}
}

void print(struct node* ptr)
{
	cout<<ptr->set->ownerId;
}

int main()
{
	genesis = NULL;
	getData("Abhi", 3.0, "Abhi");
	print(genesis);
	//getData(string OwnerId, float value, string ownerName); 

}