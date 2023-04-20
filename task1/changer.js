function change() {
    var R = document.getElementById("R").value;
    var G = document.getElementById("G").value;
    var B = document.getElementById("B").value;
    var width = document.getElementById("width").value;
    var bgR = document.getElementById("bgR").value;
    var bgG = document.getElementById("bgG").value;
    var bgB = document.getElementById("bgB").value;

    var par = document.getElementById("paragraph");
    par.style.borderColor = `rgb(${R},${G},${B})`;
    par.style.borderWidth = width
    par.style.backgroundColor = `rgb(${bgR},${bgG},${bgB})`;
}
