size(400, 400);


for(int i=0;i<=400;i=i+40){
  for(int j=0;j<=400;j=j+40){
  	//fill(random(255), random(255), random(255));
  	fill(i, 0, 0);
  	rect(j, i, 40, 40);
  }
}
