<?php
if ($_SERVER["REQUEST_METHOD"] == "POST")
{
    if (empty($_POST["name"])) {
        $message = "name is reuired.";
        echo $message;
    }
    else {
        $name = $_POST["name"];
        $message = "Welcome, $name";
        echo $message;
    }
}
?>