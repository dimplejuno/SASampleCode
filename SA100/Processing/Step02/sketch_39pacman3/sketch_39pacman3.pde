int radius = 40;
float x = 110;
float speed = 4.0;
int direction = 1;

void setup() {
  size(800, 800);
  smooth(2);
  ellipseMode(RADIUS);

}

void draw() {
  background(0);
  x += speed * direction;
  if ((x > width-radius) || (x < radius)) {
    direction = -direction; // Flip direction
  }
  if (direction == 1) {
    arc(x, height/2, radius, radius, 0.52, 5.76); // Face right
  } else {
    arc(x, height/2, radius, radius, 3.67, 8.9); // Face left
  }
}