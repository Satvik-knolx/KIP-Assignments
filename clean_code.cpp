#include<iostream>
#include<algorithm>
using namespace std;

int main()	{
    
    //declaring an array which we want to print into reduced form
	int arrayToReducedForm[] = {5,10,40,30,20};
	
	int length=sizeof(arrayToReducedForm)/sizeof(arrayToReducedForm[0]);
	
	cout<<"Given array is: "<<endl;
	for(int index=0; index<length; index++){
		cout<<arrayToReducedForm[index]<<" ";
		}
		cout<<"\n";
	
	
	
	int tempArray[] = {5,10,40,30,20};
	
	//sorted the tempArray using merge sort
    sort(tempArray, tempArray + length);
    
    for(int index1=0; index1<length; index1++){
		for(int index2=0;index2<length;index2++)	{
		  
		//replacing elements with reduced value  
		if (arrayToReducedForm[index1]==tempArray[index2])
		arrayToReducedForm[index1]=index2;
		}
	}
	
	    //printing the reduced array
	    cout<<"Reduced array is: "<<endl;
		for(int index=0; index<length; index++){
		cout<<arrayToReducedForm[index]<<" ";
		}
		cout<<"\n";
	}
