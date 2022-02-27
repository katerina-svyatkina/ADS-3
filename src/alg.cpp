// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
   int right=size-1, left = 0, k=0;
   int half_size = (right + left) / 2;
   if(size == 0) {
       return 0;
   }
   if (arr[half_size] == value) {
       k++;
   }
   else if (arr[half_size] > value) {
       right = half_size;
   }
   else {
       left = half_size;
   }
       return k + cbinsearch(arr, half_size-left, value) + cbinsearch(&(arr[half_size+1]), right-half_size, value);
}
