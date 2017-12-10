size(800, 800);
int s = 1;

background(255);

textSize(14);
textAlign(CENTER);
fill(255);

strokeWeight(s);
for(int i=0;i<=width;i=i+width/16){
  line(i, 0, i, width);
  line(0, i, width, i);
}


strokeWeight(2*s);
for(int i=0;i<=width;i=i+width/8){
  line(i, 0, i, width);
  line(0, i, width, i);
}

strokeWeight(4*s);
for(int i=0;i<=width;i=i+width/4){
  line(i, 0, i, width);
  line(0, i, width, i);

}
strokeWeight(8*s);
for(int i=0;i<=width;i=i+width/2){
  line(i, 0, i, width);
  line(0, i, width, i);

}

fill(0,0,255);
for(int i=width/8;i<width;i=i+width/8){
	for(int j=width/8;j<width;j=j+width/8){
  		text("("+i+","+j+")", i, j - textDescent()); 
  	}
}

save("BasicGrid.png");
