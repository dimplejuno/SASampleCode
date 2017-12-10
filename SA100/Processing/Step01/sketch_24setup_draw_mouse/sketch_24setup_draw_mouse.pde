void setup() {
  size(480, 400);

}

void draw() {
  background(255);

  line(0,0, mouseX, mouseY);
  line(width,0, mouseX, mouseY);
  line(0,height, mouseX, mouseY);
  line(width,height, mouseX, mouseY);
}