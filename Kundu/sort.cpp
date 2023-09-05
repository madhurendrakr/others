

    -2 30 0 40 -10 5 20 -30 
    -2 -30 0 40 -10 5 20 30 
 
 void sort( vector<int> arr){

int i=0;
int j= arr.size()-1 ;

   while ( i<j)
   {
    int temp=0;
     if(arr[i]<0){
        i++;
     }
     if(arr[j]>0){
        j--;
     }

      else{
        temp=arr[i];
        arr[i]=arr[j] ;
        arr[j] =temp;
        i++
        j--;
      }
   }
   

 }