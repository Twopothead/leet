// #include <stdio.h>
// #include <stdlib.h>
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

int firstBadVersion(int n) {
    int lo = 1,hi = n,mid = 0;
    while (lo<=hi)
    {
        mid = (((double)lo)/2+((double)hi)/2);// testcase:2126753390 1702766719
        if(isBadVersion(mid)){
            if(mid==1)
                return 1;
            else{
                if(!isBadVersion(mid-1))
                    return mid;
            }
        }
        if(isBadVersion(mid))
            hi = mid -1;
        else
            lo = mid +1;
    } 
    return -1;
}
// int main(){
//     return 0;
// }