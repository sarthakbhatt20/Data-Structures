#include<iostream>

using namespace std;
class stack{
    int t=-1;
    int arr[5];
    int count;
    public:
    stack(){
        for (int i = 0; i < 5; i++)
        {
            arr[i]=0;
        }
        
    }
    bool isEmpty(){
        if(t==-1)
        return(true);
        else
        return(false);
    }

    bool isFull(){
        if(t==4)
        return(true);
        else 
        return(false);
    }

    void push(){
        if(t==4)
        cout<<"stack overflow"<<endl;
        else{
        cout<<"Enter element\n";
        t++;
        cin>>arr[t];}
    }

    void pop(){
       if (t==-1)
       cout<<"stack underflow"<<endl;
       else{
       int temp=arr[t];
       arr[t]=0;
       cout<<"element "<<t<<" popped"<<endl;}
    }

    void cnt(){
     cout<<t+1<<endl;
    }

    int peek(int t){
        return(arr[t]);
    }

    void change(int pos, int temp){
     arr[pos]=temp;
    }

    void display(){
        for (int i = 4; i >= 0; i--)
        {
            cout<<arr[i]<<endl;
        }
        
    }
};

int main()
{
    stack obj;
    int x=0;
    do
    { cin>>x;
    switch (x){
    case 0:
        break;
    case 1: 
        if(obj.isEmpty()==1)
        cout<<"Stack is Empty"<<endl;
        else 
        cout<<"Stack is not Empty"<<endl;
        break;
    case 2:
        if(obj.isFull()==1)
        cout<<"Stack is full"<<endl;
        else 
        cout<<"Stack is not Full"<<endl;
        break;
    case 3:
        obj.cnt();
        break;
    case 4:
        obj.display();    
        break;      
    case 5:
        int i;
        cin>>i;
        cout<<obj.peek(i)<<endl;
        break;
    case 6:
        obj.pop();
        break;
    case 7:
        obj.push();
        break;
    case 8:
        int p,t;
        cin>>p>>t;
        obj.change(p,t);  
        break;       
    default:
        cout<<"Enter a number between 1 to 8"<<endl;
        break;
    }
        
    } while (x!=9);
    
   
    return 0;
}