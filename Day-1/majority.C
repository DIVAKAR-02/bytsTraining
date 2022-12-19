int majorityElement(int* nums, int numsSize){
    int voter=nums[0];
    int votercount=0;
    for(int i=0;i<numsSize;i++){
        if(voter==nums[i]){
            ++votercount;
        }else{
            --votercount;
        }
        if(votercount==0){
            voter=nums[i];
            votercount=1;
        }
    }
    return voter;
}
