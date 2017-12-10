PImage img;


void setup() {
  size(800, 800);
  img = loadImage("Ryan.png");
}

void draw() {
  image(img, 0, 0);
}