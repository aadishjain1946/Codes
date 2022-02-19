function checkEmail(emailId) {
    let regexPattern = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/;
    if (emailId.match(regexPattern)) {
        return true;
    } else {
        return false;
    }
}

let emailId = "jahdjhad@gmail.com";
let emailId1 = "jahdjhad@gmail";
console.log(checkEmail(emailId));
console.log(checkEmail(emailId1));
