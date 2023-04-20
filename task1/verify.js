function check(){
        var first = document.getElementById("first").value;
        var second = document.getElementById("second").value;
if (first.length < 8) {
        alert("The length of the first password is less than 8 letters!")
    } else if (second.length < 8) {
        alert("The length of the second password is less than 8 letters!")
    } else if (first != second) {
        alert("The passwords don't match")
    } else {
        alert("Looks good!")
    }
}
