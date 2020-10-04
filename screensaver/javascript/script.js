var temp,
  timer = 0,
  width,
  height,
  loop,
  color,
  id1;
var arr = ["square", "circle", "thug", "cat", "au"];
var alphabet = "abcdef0123456789".split("");

function color1() {
  color = "#";

  for (loop = 0; loop < 6; loop++) {
    color += alphabet[Math.floor(Math.random() * alphabet.length).toString()];
  }

  

  document.getElementById(id1).style.backgroundColor = color;
}

function timerStart() {
  timer = timer + 1;
  temp = setTimeout(timerStart, 1000);
  document.getElementById("txt").innerHTML = timer;
}

function start() {
  timerStart();
}

function pause() {
  clearTimeout(temp);
}

function after_click() {
  document.getElementById("txt1").innerHTML = timer;
  timer = 0;
  document.getElementById("txt").innerHTML = timer;
}

function reset() {
  /* function to reset everything as when it was first opened */
  pause();
  timer = 0;
  document.getElementById("txt1").innerHTML = timer;
  document.getElementById("txt").innerHTML = timer;
  document.getElementById(id1).style.display = "none";
}

function position() {
  id1 = arr[Math.floor(Math.random() * arr.length)];
  width = Math.floor(Math.random() * 1024);
  height = Math.floor(Math.random() * 550);
  document.getElementById(id1).style.top = height + "px";
  document.getElementById(id1).style.right = width + "px";
  width = Math.floor(Math.random() * 1024);
  heigth = Math.floor(Math.random() * 550);
  document.getElementById(id1).style.bottom = height + "px";
  document.getElementById(id1).style.left = width + "px";
}

function show() {
  position();
  document.getElementById(id1).style.display = "block";
  color1();
}

function square() {
  document.getElementById("square").style.display = "none";
  after_click();
  show();
}

function thug() {
  document.getElementById("thug").style.display = "none";
  after_click();
  show();
}

function cat() {
  document.getElementById("cat").style.display = "none";
  after_click();
  show();
}
function circle() {
  document.getElementById("circle").style.display = "none";
  after_click();
  show();
}
function au() {
  document.getElementById("au").style.display = "none";
  after_click();
  show();
}

document.getElementById("txt").innerHTML = timer;
document.getElementById("txt1").innerHTML = timer;

const cursor = document.querySelector(".cursor");
document.addEventListener("mousemove", (e) => {
  cursor.setAttribute(
    "style",
    "top: " + (e.pageY - 10) + "px; left: " + (e.pageX - 10) + "px;"
  );
});

document.addEventListener("click", () => {
  cursor.classList.add("expand");

  setTimeout(() => {
    cursor.classList.remove("expand");
  }, 500);
});
