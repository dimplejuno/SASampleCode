size(400, 400);

for(int i=0;i<=400;i=i+40){
  line(i, 0, i, 400);
  line(0, i, 400, i);
  line(i, 0, 400, 400-i);
  line(0, i, 400-i, 400);
  line(i, 400, 400, 0+i);
  line(0, 400-i, 400-i, 0);
}
