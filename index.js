document.addEventListener("DOMContentLoaded", function() {
  var elems = document.querySelectorAll(".fixed-action-btn");
  var instances = M.FloatingActionButton.init(elems, {
    direction: "left",
    hoverEnabled: false
  });
});

function ajaxGet(url, callback) {
  // Creación de la petición HTTP
  var req = new XMLHttpRequest();
  // Petición HTTP GET asíncrona si el tercer parámetro es "true" o no se especifica
  req.open("GET", url, true);
  // Gestor del evento que indica el final de la petición (la respuesta se ha recibido)
  req.addEventListener("load", function() {
    // La petición ha tenido éxito
    if (req.status >= 200 && req.status < 400) {
      callback(req.responseText);
    } else {
      // Se muestran informaciones sobre el problema ocasionado durante el tratamiento de la petición
      console.error(req.status + " " + req.statusText);
    }
  });
  // Gestor del evento que indica que la petición no ha podido llegar al servidor
  req.addEventListener("error", function() {
    console.error("Error de red"); // Error de conexión
  });
  // Envío de la petición
  req.send(null);
}

ajaxGet("https://codeforces.com/api/contest.list", resp => {
  var contest = JSON.parse(resp);
  state = true;
  for (let i = 0; state; i++) {
    // const date = new Date(null);
    // console.log(contest.result[i].startTimeSeconds);
    const url = "http://codeforces.com/contests/" + contest.result[i].id;
    const date = new Date(null);
    date.setSeconds(contest.result[i].startTimeSeconds);
    const startTime = date.toISOString();
    const newNode =
      '<div class="col s6"><div class="card hoverable"><div class="card-image waves-effect waves-block waves-light"></div><div class="card-content"><span class="card-title activator grey-text text-darken-4">' +
      contest.result[i].name +
      '<i class="material-icons right">more_vert</i></span><p><a class="waves-effect waves-light btn" href="' +
      url +
      '">Go</a><span class="right" >' +
      date.toDateString() +
      '</span></p></div><div class="card-reveal"><span class="card-title grey-text text-darken-4">Card Title<i class="material-icons right">close</i></span><p>Faltan ' +
      startTime +
      " para que inicie el contest </p></div></div></div>";
    document
      .getElementById("contests")
      .insertAdjacentHTML("beforeend", newNode);
    state = contest.result[i].phase == "BEFORE";
  }
  console.log(contest.result[0]);
});
