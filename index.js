document.addEventListener("DOMContentLoaded", function() {
	var elems = document.querySelectorAll(".autocomplete");
	var instances = M.Autocomplete.init(elems, {
		data: {
			dp: null,
			greedy: null,
			math: null,
			sortings: null,
			implementation: null,
			graphs: null,
			"constructive algorithms": null,
			"binary search": null,
			interactive: null,
			"shortest paths": null
		}
	});
});

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
