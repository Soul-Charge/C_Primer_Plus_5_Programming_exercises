void add_arr1_arr2_to_arr3 (int ar1[],int ar2[],int ar3[],int size)
{
    int index;
    
    for (index = 0;index < size;index++)
        ar3[index] = ar1[index] + ar2[index];
    
    return;
}
