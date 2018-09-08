#include <bits/stdc++.h>

using namespocae std;
/*
string hashing(string ownerId, float value, string ownerName)
{

	return hash;
}

struct data
{
	string ownerId;
	float value;
	string ownerName;
	string hash;	
};

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

struct node{
	time_t timeStamp;
	struct data = new data;
	int nodeNumber;
	string nodeID;
	string referenceNodeId;
	string childReferenceNodeID[];
	string genesisReferenceNodeID;
	string hashValue;
	int childNO;
	string childNode[];
}*genesis;

void getData(string ownerId, float value, string ownerName,struct node* parent = NULL)
{
	if(genesis == NULL)
	{
		timeStamp = time(0);
		data.ownerId = ownerId;
		data.value = value;
		data.ownerName = ownerName;
		nodeNumber = 1;
		referenceNodeId = NULL;
		genesisReferenceNodeID = ;
	}
	else
	{

	}
}

int main()
{
	genesis = NULL;
	getData(string OwnerId, float value, string ownerName); 
}