function OpenRadar_ValidateUpload() {
	var bugTitle = $("input[name='37.29.1']").val();
	log_debug("bugTitle: "+bugTitle);
	OpenRadar.setRadarValue_forKey_(bugTitle, "title");
	
	var bugProduct = $("#prodList :selected").text();
	log_debug("bugProduct: "+bugProduct);
	OpenRadar.setRadarValue_forKey_(bugProduct, "product");
	
	var bugProductVersion = $("input[name='configSummary']").val();
	log_debug("bugProductVersion: "+bugProductVersion);
	OpenRadar.setRadarValue_forKey_(bugProductVersion, "productVersion");
	
	var bugClassification = $("#classList :selected").text();
	log_debug("bugClassification: "+bugClassification);
	OpenRadar.setRadarValue_forKey_(bugClassification, "classification");
	
	var bugReproducible = $("select[name='37.29.11'] :selected").text();
	log_debug("bugReproducible: "+bugReproducible);
	OpenRadar.setRadarValue_forKey_(bugReproducible, "reproducible");
	
	var bugDetails = $("#probDescID").val();
	log_debug("bugDetails: "+bugDetails+"\n\n");
	OpenRadar.setRadarValue_forKey_(bugDetails, "details");
	
	//ValidateUpload();
}
$("input[name='Save']").attr("onClick","OpenRadar_ValidateUpload()");

function log_debug(x) {
	if (false) {
		//console.log(x);
		alert(x);
	}
}