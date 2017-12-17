int radius = 80;
float x = -radius;
float speed = 5.0; 

void setup() {
  size(800, 800);
  ellipseMode(RADIUS);
}

void draw() {
  background(255, 0, 127);
  //x += speed; // Increase the value of x
  x = x + speed;
  if (x > width+radius) { // If the shape is off screen,
    //x = -radius; // move to the left edge
    speed = -speed;
  }
  arc(x, height/2, radius, radius, 0.52, 5.76);
}