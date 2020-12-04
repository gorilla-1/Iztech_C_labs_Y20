#include <stdio.h>
#include<math.h>

/*Mert Korkmaz */
//It doesn't give the exact values but prints closer ones to them 
//Total headache

int get_Closest(int val1, int val2, int target) { 
    if (target-val1>=val2-target) 
        return val2; 
    else
        return val1; 
} 

int find_Closest(int arr[], int n, int target) { 
    if (target <= arr[0]) 
        return arr[0]; 
        
    if (target >= arr[n - 1]) 
        return arr[n - 1]; 
  
    int i = 0,j = n, mid = 0; 
    while (i<j) { 
        mid=(i+j)/2; 
  
        if (arr[mid] == target) 
            return arr[mid]; 
  
        
		if (target<arr[mid]) { 
            if (mid>0 && target > arr[mid-1]) 
            return get_Closest(arr[mid - 1],arr[mid], target); 
            j = mid; 
        } 

        else { 
            if (mid<n-1 && target < arr[mid+1]) 
            return get_Closest(arr[mid],arr[mid+1], target); 
            i = mid+1;  
        } 
    }  
    return arr[mid]; 
}

int main() {
    
    float sum,n_0,n,r,p,mean,var,closest;
    sum=0;
    mean=0;
    var=0;
    printf("Please add your starting point: ");
    scanf("%f",&n_0);
    
    printf("Please add your final value: ");
    scanf("%f",&n);
    
    printf("Please add your 'r' value: ");
    scanf("%f",&r);
    
    printf("Please add your 'p' value: ");
    scanf("%f",&p);
    
    int i,arr[(int)(n-n_0)];
    
    
    for(i=n_0; i<=n; i++){
	
	arr[(int)(i-n_0)] = pow(i,2)*pow(r,i);
    sum+=arr[(int)(i-n_0)];
    
	printf("arr[%d] %.2f\n",i,sum);
    
	}
    
    printf("Sum= %.2f\n",sum);
    
    
    
    for(i=n_0; i<=n; i++){
        if(n_0<= n){
        mean+= (1/(n-n_0+1))*arr[(int)(i-n_0)];
        }
    }
    printf("Mean= %.3f\n",mean);
    
    for(i=n_0; i<=n; i++){
        if(n_0<=n){
        var+=(1/(n-n_0+1))*pow((arr[(int)(i-n_0)]-mean),2);
        }
    }

    printf("Var= %f\n",var);
        
    closest=find_Closest(arr, n , p);
    printf("Closest value %.2f",closest);

    return 0;
}
