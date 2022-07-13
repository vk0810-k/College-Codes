<?php
error_reporting(0);
include('includes/config.php');
?>
<!DOCTYPE html>
<html lang="en">

<head>

    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>E-BloodBank Management System | Home</title>
    <link href="vendor/bootstrap/css/bootstrap.min.css" rel="stylesheet">
    <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
    <link href="css/modern-business.css" rel="stylesheet">
    <style>
    .navbar-toggler {
        z-index: 1;
    }
    
    @media (max-width: 576px) {
        nav > .container {
            width: 100%;
        }
    }
    .carousel-item.active,
    .carousel-item-next,
    .carousel-item-prev {
        display: block;
    }
    </style>

</head>

<body>

    <!-- Navigation -->
<?php include('includes/header.php');?>
<?php include('includes/slider.php');?>
   
    <!-- Page Content -->
    <div class="container">

        <h1 class="my-4">Welcome to BloodBank & Donor Management System</h1>

        <!-- Marketing Icons Section -->
        <div class="row">
            <div class="col-lg-4 mb-4">
                <div class="card">
                    <h4 class="card-header">The need for blood</h4>
                    <p class="card-text" style="padding-left:2%">1. Every year our nation requires about 5 Crore units of blood, out of which only a meager 2.5 Crore units of blood are available.</p>
                    <p class="card-text" style="padding-left:2%">2. The gift of blood is the gift of life. There is no substitute for human blood.</p>
                    <p class="card-text" style="padding-left:2%">3. More than 38,000 blood donations are needed every day.</p>
                    <p class="card-text" style="padding-left:2%">4. Every two seconds someone needs blood.</p>
                </div>
            </div>
            <div class="col-lg-4 mb-4">
                <div class="card">
                    <h4 class="card-header">Blood Donation Tips</h4>
                    <p class="card-text" style="padding-left:2%">
                    1. Please have a good meal at least 3 hours before donating blood.</p>
                    <p class="card-text" style="padding-left:2%">2. Please accept the snacks offered to you after the donation, it is vital you have them. You are recommended to have a good meal later.</p>
                    <p class="card-text" style="padding-left:2%">3. Please avoid smoking on the day before donating. You can smoke 3 hours after donation.</p>
                    <p class="card-text" style="padding-left:2%">4. You are not be eligible to donate blood if you have consumed alcohol 48 hours before donation
                    </p>
                </div>
            </div>
            <div class="col-lg-4 mb-4">
                <div class="card">
                    <h4 class="card-header">Who you could Help</h4>
                        <a class="card-text" style="padding-left:2%" href="https://www.cedars-sinai.org/programs/blood-donor-services/about-donation.html#collapseWhole-Blood-308126893">By donating Whole Blood</a>
                        <a class="card-text" style="padding-left:2%" href="https://www.cedars-sinai.org/programs/blood-donor-services/about-donation.html#collapsePlatelets-308126892">By donating Platelets</a>
                        <a class="card-text" style="padding-left:2%" href="https://www.cedars-sinai.org/programs/blood-donor-services/about-donation.html#collapsePlasma-308126891">By donating Plasma</a>
                        <a class="card-text" style="padding-left:2%" href="https://www.cedars-sinai.org/programs/blood-donor-services/about-donation.html#collapseDouble-Red-Cells-308126890">By donating Double Red Cells</a>
                        <a class="card-text" style="padding-left:2%" href="https://www.cedars-sinai.org/programs/blood-donor-services/about-donation.html#collapseDonating-for-Yourself-Autologous-Donation-308126889">By Donating for Yourself (Autologous Donation)</a>
                        <a class="card-text" style="padding-left:2%" href="https://www.cedars-sinai.org/programs/blood-donor-services/about-donation.html#collapseDonating-for-Someone-Else-Directed-Donation--308126888">Donating for Someone Else (Directed Donation)</a>

                    </div>
            </div>
        </div>
        <!-- /.row -->

        <!-- Portfolio Section -->
        <h2>Some of the Donar</h2>

        <div class="row">
                   <?php 
$status=1;
$sql = "SELECT * from tblblooddonars where status=:status order by rand() limit 6";
$query = $dbh -> prepare($sql);
$query->bindParam(':status',$status,PDO::PARAM_STR);
$query->execute();
$results=$query->fetchAll(PDO::FETCH_OBJ);
$cnt=1;
if($query->rowCount() > 0)
{
foreach($results as $result)
{ ?>

            <div class="col-lg-4 col-sm-6 portfolio-item">
                <div class="card h-100">
                    <a href="#"><img class="card-img-top img-fluid" src="images/blood-donor.jpg" alt="" ></a>
                    <div class="card-block">
                        <h4 class="card-title"><a href="#"><?php echo htmlentities($result->FullName);?></a></h4>
<p class="card-text"><b>  Gender :</b> <?php echo htmlentities($result->Gender);?></p>
<p class="card-text"><b>Blood Group :</b> <?php echo htmlentities($result->BloodGroup);?></p>

                    </div>
                </div>
            </div>

            <?php }} ?>
          
 



        </div>
        <!-- /.row -->

        <!-- Features Section -->
        <div class="row">
            <div class="col-lg-6">
                <h2>BLOOD GROUPS</h2>
          <p>  blood group of any human being will mainly fall in any one of the following groups.</p>
                <ul>
                
                
<li>A positive or A negative</li>
<li>B positive or B negative</li>
<li>O positive or O negative</li>
<li>AB positive or AB negative.</li>
                </ul>
                <p>A healthy diet helps ensure a successful blood donation, and also makes you feel better! Check out the following recommended foods to eat prior to your donation.</p>
            </div>
            <div class="col-lg-6">
                <img class="img-fluid rounded" src="images/blood-donor (1).jpg" alt="">
            </div>
        </div>
        <!-- /.row -->

        <hr>

        <!-- Call to Action Section -->
        <div class="row mb-4">
            <div class="col-md-8">
            <h4>UNIVERSAL DONORS AND RECIPIENTS</h4>
                <p>
The most common blood type is O, followed by type A.

Type O individuals are often called "universal donors" since their blood can be transfused into persons with any blood type. Those with type AB blood are called "universal recipients" because they can receive blood of any type.</p>
            </div>
            <div class="col-md-4">
                <a class="btn btn-lg btn-secondary btn-block" href="become-donar.php">Become a Donor</a>
            </div>
        </div>

    </div>
    <!-- /.container -->

    <!-- Footer -->
  <?php include('includes/footer.php');?>

    <!-- Bootstrap core JavaScript -->
    <script src="vendor/jquery/jquery.min.js"></script>
    <script src="vendor/tether/tether.min.js"></script>
    <script src="vendor/bootstrap/js/bootstrap.min.js"></script>

</body>

</html>
