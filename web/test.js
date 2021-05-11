function getFlightStatus() {
    var carrier = $("#carrier").val();      //Getting value from input tags
    var flightNumber = $("#flightNumber").val();
    var flightDate = $("#flightDate").val();
    //ajax get request at /flights/status with given parameters
    $.get("/flights/status", { "carrier": carrier, "flightNumber": flightNumber, "flightDate": flightDate }, function (data, status, xhr) {
        //if request status is 200 the in div flightStatus status gets updates
        if (xhr.status == 200) {
            $("#flightStatus").val() = data.status;
        }
        //if request status is 200 the div flightStatus updated with flight not found
        if (xhr.status == 201) {
            $("#flightStatus").html('<p>Flight not found.</p>')
        }
    })
}
//onclick event attatched with submit button of input form to get flight status.
$("#Place_Input_Form_submitButton_ID_here").click(function () {
    getFlightStatus();
});