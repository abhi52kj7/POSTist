#include <bits/stdc++.h>

using namespace std;

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
	vector<string> childReferenceNodeID;
	string genesisReferenceNodeID;
	string hashValue;
	int childNO;
}*genesis = NULL;

template <typename T>
std::string convertPointerToStringAddress(const T* obj)
{
  int address(reinterpret_cast<int>(obj));
  std::stringstream ss;
  ss << address;
  return ss.str();
}

template <typename T>
T* convertAddressStringToPointer(const std::string& address)
{
  std::stringstream ss;
  ss << address;
  int tmp(0);
  if(!(ss >> tmp)) throw std::runtime_error("Failed - invalid address!");
  return reinterpret_cast<T*>(tmp);
}

void getData(string ownerId, float value, string ownerName,struct node* parent = NULL)
{
	if(genesis == NULL)
	{
		struct node* ptr = new node;
		genesis = ptr;
		struct node* null = new node;
		null = NULL;
		ptr->timeStamp = time(0);
		ptr->set->ownerId = ownerId;
		ptr->set->value = value;
		ptr->set->ownerName = ownerName;
		ptr->nodeNumber = 1;
		//ptr.nodeID = 
		ptr->referenceNodeId = convertPointerToStringAddress(null);
		ptr->genesisReferenceNodeID = convertPointerToStringAddress(genesis);
	}
	else
	{

	}
}

void print(struct node* ptr)
{
	cout<<"OwnerId"<<ptr->set->ownerId<<endl;
	cout<<"Value"<<ptr->set->value<<endl;
	cout<<"ownerName"<<ptr->set->ownerName<<endl;
}

int main()
{
	string OwnerId = "QKOO276TKX0X";
	float value = 10;
	string ownerName = "Abhishek";

	/////////////////  Add Genesis Block /////////////////
	getData(string OwnerId, float value, string ownerName);
	///////////////////////////////////////////////////////

	print(genesis); 

}