size(800, 800);


for(int i=0;i<=width;i=i+width/8){
  for(int j=0;j<=width;j=j+width/8){
  	//fill(random(255), random(255), random(255));
  	fill(map(i, 0, width, 0, 255), 0, 0);
  	rect(j, i, width/8, width/8);
  }
}
