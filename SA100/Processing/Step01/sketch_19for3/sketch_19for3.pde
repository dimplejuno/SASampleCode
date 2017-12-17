size(800, 800);

for(int i=0;i<=width;i=i+width/8){
  line(i, 0, i, height);
  line(0, i, width, i);

  line(0, i, i, 0);
  line(i, height, width, i);

  //line(0, height-i, i, height);
  //line(i, 0, width, height-i);

}
