float angle = 0.0;
float offset = 400;
float scalar = 100;
float speed = 0.05;

void setup() {
  size(800, 800);
}

void draw() {
  background(0);
  float y1 = offset + sin(angle) * scalar;
  float y2 = offset + sin(angle + 0.4) * scalar;
  float y3 = offset + sin(angle + 0.8) * scalar;
  ellipse(320, y1, 40, 40);
  ellipse(400, y2, 40, 40);
  ellipse(480, y3, 40, 40);
  angle += speed;
}