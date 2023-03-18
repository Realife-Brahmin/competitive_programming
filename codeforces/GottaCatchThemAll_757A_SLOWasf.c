#include<stdio.h>
#include<string.h>

int main()
{
	char A[100000];
	scanf("%s",A);
	int N = strlen(A);
	int count=0;
	
        for(int i=0;i<N;i++)
	{
	 if(A[i]=='B')
	 {
	//	printf("Found B at number %d\n",i);
	  A[i]='#';
	  for(int j=0;j<N;j++)
	  {		
	  if(A[j]=='u')		
	  {
	//	printf("Found u at number %d\n",j);
	   A[j]='#';
	   for(int k=0;k<N;k++)
	   {
	    if(A[k]=='l')
	    {	
	  //   printf("Found l at number %d\n",k);
	     A[k]='#';
	     for(int l=0;l<N;l++)
	     {
	     if(A[l]=='b')
	     {
	    //  printf("Found b at number %d\n",l);
	      A[l]='#';
	      for(int m=0;m<N;m++)
              {	
	       if(A[m]=='a')
	       {
	      //  printf("Found a at number %d\n",m);
	        A[m]=='#';
	        for(int n=0;n<N;n++)
	        {
	        if(A[n]=='s')
		{
		// printf("Found s at number %d\n",n);
	         A[n]='#';
	         for(int o=0;o<N;o++)
	         {
	          if(A[o]=='a')
		  {
		  // printf("Found a at number %d\n",o);
	           A[o]='#';
	           for(int p=0;p<N;p++)
	           {
	           if(A[p]=='u')
		   {
	            //printf("Found u at number %d\n",p);
		    A[p]='#';
		    for(int q=0;q<N;q++)
		    {
		     if(A[q]=='r')
		     {
		      //printf("Found r at number %d\n",q);
		      A[q]='#';
		      count++;	
		     // printf("So count is now: %d\n",count);
		      i++;
			goto C;
		     }	//q
		   }	
		  }	//p
		  }
		}	//o
		}
	}	//n
	}
	}	//m
	}
	}	//l
	}
	}	//k
	}
	}	//j
	}
	}	//i
	C:
	;
	}

	printf("%d\n",count);					
	return 0;
}	
																																																																														
