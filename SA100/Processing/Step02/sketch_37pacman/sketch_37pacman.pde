int radius = 40;
float x = -radius;
float speed = 2.0;

void setup() {
  size(800, 800);
  ellipseMode(RADIUS);
}

void draw() {
  background(0);
  x += speed; // Increase the value of x
  arc(x, height/2, radius, radius, 0.52, 5.76);
}