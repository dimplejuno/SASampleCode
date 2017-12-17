int x = 0;
int speed = 10;
void setup() {
  size(800, 800);
}

void draw() {
  background(255);
  strokeWeight(10);
  stroke(255, 0, 0);
  if(x > 380 && x < 420) {
  	line(400,0,400,height);
  }

  strokeWeight(2);
  stroke(0, 0, 0);
  x = x + speed;
  if(x > width || x < 0) {
  	speed = -speed;
  }


  ellipse(x, 400, 100, 100);
}