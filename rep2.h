 void swap_batter(struct batter *u,struct batter *v){
struct batter temp;
temp = *u;
*u = *v;
*v = temp;
}

void bubblesort_daritsu(struct batter a[], int n){
 int i, j, sorted;
 j = n;
 do{
    sorted = 1;
    j = j - 1;
    for(i = 1; i <= j; i++)
    if(a[i].daritsu > a[i+1].daritsu){
     swap_batter(&a[i], &a[i+1]);
     sorted=0;
    }
 }while(!sorted);
}

