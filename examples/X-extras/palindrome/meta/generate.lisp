;;;
;;; generate Html5; uses <canvas>, JS
;;;

(defun generate-html (image-count &key (width 450) (pause 1000) (delay 50) (background "black"))
  (let ((width/2 (truncate (+ 0.5 (/ width 2)))))
    (with-open-file (s "html/palindrome.htm" :direction :output :if-exists :supersede)
      (format s "<!doctype html>~
                 ~%<html>~
                 ~%  <head>~
                 ~%    <title>PATERNOSTER</title>~
                 ~%    <meta charset=\"utf-8\">~
                 ~%  </head>~
                 ~%  <body style=\"background-color: ~A; overflow: hidden;\" onload=\"ini()\">~
                 ~%    <table id=main style=\"width: 100%; margin: auto; background-color: black;\">~
                 ~%      <tr style=\"height: 100%;\">~
                 ~%        <td style=\"text-align: center;\">~
                 ~%          <canvas id=canvas width=~D height=~D></canvas>~
                 ~%        </td>~
                 ~%      </tr>~
                 ~%    </table>~
                 ~%    <script>~
                 ~%~
                 ~%  var images = new Array(~D);~
                 ~%~
                 ~%  for(var n = 0; n < ~D; n++) {~
                 ~%    images[n] = new Image;~
                 ~%    images[n].src = \"img/\" + (n + 1) + \".png\"; }~%"
              background
              width width
              image-count
              image-count)
      (with-open-file (in "meta/positions.js" :direction :input)
        (let ((buf (make-string (file-length in))))
          (read-sequence buf in)
          (write-sequence buf s)))
      (format s "~%  var positions = [p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, null];~
                 ~%  var p = positions[0];~
                 ~%  var canvas = document.getElementById(\"canvas\");~
                 ~%  var painter = canvas.getContext(\"2d\");~
                 ~%  var i = 0;~
                 ~%  var j = 0;~
                 ~%~
                 ~%  painter.rect(0, 0, ~D, ~D);~
                 ~%  painter.fillStyle = ~S;~
                 ~%~
                 ~%  function ini() {~
                 ~%    if(!painter) {~
                 ~%      alert(\"Sorry, your browser is too old for this website.\\nPlease upgrade your browser.\"); }~
                 ~%    adjustSize();~
                 ~%    window.onresize = adjustSize;~
                 ~%    draw(); }~
                 ~%~
                 ~%  function draw() {~
                 ~%    painter.fill();~
                 ~%    for(var n = 0; n < ~D; n++) {~
                 ~%      painter.drawImage(images[n], p[i++], p[i++]); }~
                 ~%    if(p[i] == null) {~
                 ~%      i = 0;~
                 ~%      j++;~
                 ~%      if(positions[j] == null) {~
                 ~%        j = 0; }~
                 ~%      p = positions[j];~
                 ~%      setTimeout(draw, ~D); }~
                 ~%    else {~
                 ~%      setTimeout(draw, ~D); }}~
                 ~%~
                 ~%  function adjustSize() {~
                 ~%    var h = Math.min(screen.height, window.innerHeight);~
                 ~%    document.getElementById(\"main\").style.height = (h - 20) + \"px\";~
                 ~%    var w = (Math.min(screen.width, window.innerWidth, h) - 20) + \"px\";~
                 ~%    canvas.style.width = w;~
                 ~%    canvas.style.height = w; }~
                 ~%~
                 ~%    </script>~
                 ~%  </body>~
                 ~%</html>"
              width width
              background
              image-count
              pause
              delay
              width width))))

