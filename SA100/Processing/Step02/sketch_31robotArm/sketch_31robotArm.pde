float angle = 0.0;
float angleDirection = 1;
float speed = 0.005;

void setup() {
  size(800, 800);
}

void draw() {
  background(204);
  translate(width/4, width/4); // Move to start position
  rotate(angle);
  strokeWeight(width/16);
  line(0, 0, width/4, 0);
  translate(width/4, 0);  // Move to next joint
  rotate(angle * 2.0);
  strokeWeight(width/32);
  line(0, 0, width/8, 0);
  translate(width/8, 0);  // Move to next joint
  rotate(angle * 2.5);
  strokeWeight(width/64);
  line(0, 0, width/16, 0);
  angle += speed * angleDirection;
  if ((angle > QUARTER_PI) || (angle < 0)) {
    angleDirection = -angleDirection;
  }
}