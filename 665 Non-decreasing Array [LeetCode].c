bool checkPossibility(int* nums, int numsSize) {
  int i ;
  int j=-1,nb=0;
  for(i=0; i<numsSize -1 ;i++){
      if(nums[i]>nums[i+1]){
          j = i;
          nb++;
          if(nb== 2){
              return false ;
          }
      }
  }
  if(nb==0){
      return true;
  }
  if(j==0){
      return true;
  }
  if(j==numsSize -2){
      return true;
  }
  if(nums[j-1] <= nums[j+1] ||  nums[j] <= nums[j+2] ){
      return true;
  }
  return false;
  
}