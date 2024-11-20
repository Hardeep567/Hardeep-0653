#include<stdio.h>
#include<math.h>
struct dist{
	int x;
	int y;
};

int dist(int x1,int y1,int x2,int y2){
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
}

int main(){
	struct dist p1;
	struct dist p2;
	struct dist distn[4];
	
	printf("enter points of p1:");
	scanf("%d %d",&p1.x,&p1.y);
	printf("enter points of p2:");
	scanf("%d %d",&p2.x,&p2.y);
	float dis;
	dis=dist(p1.x,p1.y,p2.x,p2.y);
	printf("distance between two points %.2f\n",dis);
	
	for(int i=0;i<4;i++){
		printf("Enter points of %c each side:",'A'+i);
	    scanf("%f %f",&distn[i].x,&distn[i].y);
    }
    if((p1.x>=distn[0].x && p2.x<=distn[1].x) && (p1.y>=distn[0].y && p2.y<=distn[3].y)){	
       printf("1 point lies between boundaries\n");
   }
   else{
    printf("1 point does not lie between boundries\n");
   }
   if((p1.x>=distn[0].x && p2.x<=distn[1].x) && (p1.y>=distn[0].y && p2.y<=distn[3].y)){
      printf("2 point lies between boundaries\n");
    }
    else{
	  printf("2 point does not lie between boundaries\n");
    }
}
