int count_find=0;
int rec_bin_find(int b[], int key, int low, int high)
{
int mid;
if( low > high )  return -1;
count_find++;
mid = (low + high)/2;  if( key == b[mid] )
return mid;
else if( key > b[mid])
return rec_bin_find(b, key, mid+1, high);
else
return rec_bin_find(b, key, low, mid-1);
}
