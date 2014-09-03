Make, Map, Blink
==============

Info, code and deets for the "Make, Map, Blink" sessions I'm teaching at The New School university for Fall 2014.

Click into one of the session folders for more information and the files you need to do the activities at home.

#Class 1: Demos Not Memos

##Intro

![throwie photo](https://dl.dropboxusercontent.com/u/466610/blogelements/2-LED_Throwies.JPG)

Welcome to demo day! We'll put out a smorgasbord of digital delights to give you a taste of what's to come this term -- from data-driven blinkies to beautiful maps. You'll get to cook up some treats of your own to take home, too.

##Files, slides and code used in this class

[Class 1: Demos Not Memos](https://github.com/jkeefe/make-map-blink/tree/master/class-01)

##Attendance App

- how I made it
- the code is [here](https://github.com/jkeefe/projects-johnkeefe-net/blob/master/server.js)
- quick hello to git

##On-The-Fly Data Collection

- Journalism sign-in sheet ([pdf here](https://github.com/jkeefe/make-map-blink/blob/master/class-01/sign-in-sheet.pdf))
- Let's Google Forms-it!
    * http://drive.google.com
    * -> Create -> Form
    * Build the questions
    * View live form
- Shorten that link
- Fill it out (please)

##Make LED Throwies

- deets at [http://www.instructables.com/id/LED-Throwies/](http://www.instructables.com/id/LED-Throwies/)
- I get LEDs from [Evil Mad Scientist](http://shop.evilmadscientist.com/productsmenu/partsmenu/383-allled?qh=YTo0OntpOjA7czo0OiJsZWRzIjtpOjE7czozOiJsZWQiO2k6MjtzOjY6ImxlZHMnLCI7aTozO3M6NToibGVkJ3MiO30%3D)
- The batteries are CR2032 which you can get from Amazon or [Cheap Batteries](http://www.cheap-batteries.com/cn.html)
- Crazy-strong [rare-earth magnets](http://www.amazon.com/BYKES-Neodymium-Extremly-Powerful-Refrigerator/dp/B00I53PPS6/ref=sr_1_18?s=industrial&ie=UTF8&qid=1409539170&sr=1-18&keywords=bykes+technologies%C2%AE)
- Tape!

##Demos: On table

* Simple blink
* Minecraft matrix
* snowflake
* Stretch resistor
* light sensor
* heartbeat hoodie
* sleep monitor

###Applications to Journalism?

- [cicadas](http://project.wnyc.org/cicadas/)
- [clock your sleep](http://project.wnyc.org/sleep/)
- what do you think?

##Demo: On screen

- [evacuation map](http://project.wnyc.org/hurricane-zones/hurricane-zones.html)
- [school zones](http://project.wnyc.org/speed-zones/)
- [subway times](http://project.wnyc.org/transit-time/)
- [90 degree days chart](http://project.wnyc.org/90-degree-days/)
- [911 tapes](http://project.wnyc.org/convent-fire/)

##Make: Pins on a Map

###Example: Mad Men Map
[http://www.wnyc.org/articles/features/2012/jun/04/map-new-york-city-mad-men/](http://www.wnyc.org/articles/features/2012/jun/04/map-new-york-city-mad-men/)

###Create a new, blank FT

- Go to [http://drive.google.com](http://drive.google.com) and login with your Google ID
- -> Create
- -> Fusion Table (If it's not there, use "Connect More Apps" and search for "Fusion Table")
- -> Create Empty Table

Gives you four sample columns. You can have many more, or many fewer. And we only need two of these, anyway. 

###Now let's add info:

- Click on the blank row
- Put "This is where I work" in the Text box
- Put "160 Varick Street, New York, NY 10013" in Address
- Edit -> Add row
- Put "This is ... whatever you want"
- View in MAP tab.

###Change the icons.

- From MAP tab, pick "Change Map Styles ..."

##Make: Story Map with Pins

(If we have time)

###You'll need the csv file above:
Right-click and download `waitlist-with-addresses.csv` 

###Finished story
[Lengthy Kindergarten Wait Lists Unveiled as Applicants Increase](http://www.wnyc.org/articles/wnyc-news/2012/apr/06/kindergarten-applicants-continue-grow-another-year-long-waiting-lists/)

###Original PDF we got from the Dept. of Education
[https://dl.dropbox.com/u/466610/K%20waitlist%20data_04.06.12.pdf](https://dl.dropbox.com/u/466610/K%20waitlist%20data_04.06.12.pdf)

Hocus-pocus: I turned the PDF into text, and then merged it on the school number with the school data spreadsheet [here](http://schools.nyc.gov/Offices/EnterpriseOperations/DIIT/OOD/default.htm) to make the `waitlist-with-addresses.csv` file in the bundle you downloaded above.

###Steps

Upload the CSV to Google Fusion Tables
   
- Go to [http://drive.google.com](http://drive.google.com) and login with your Google ID
- -> Create
- -> Fusion Table (If it's not there, use "Connect More Apps" and search for "Fusion Table")
- -> Choose File
- -> waitlist-with-addresses.csv
- -> Next
- -> Next
- -> Finish
- -> SHARE -> Anyone with link

###Look at the columns: 
Yellow highlighting = Thinks it can geocode it

###View on the Map
On Map Tab's name, Go to "Select Location ..." and change to "Full_Address" 

    2 MINUTE GEOCODING BREAK!
	(Google is turning the addresses into latitude-longitude pairs)

###My final version: 
https://www.google.com/fusiontables/DataSource?docid=1SrjF9IDNboev7Z0d3JeWST6okfOHab80iYvdrhc

###Style the pins 

We can make them be different colors depending on the length of the school's waitlist:

- Map -> Change Map Styles ...
- Marker Icon -> Buckets
- Divide into CUSTOM buckets
- Use + buttons to add rows here
- `0` in first box, change pin color
- `20` in second box, change pin color
- `80` in thrid box, change pin color
- `1000` (way beyond max of data) in bottom box.
- Screen shot here: [http://cl.ly/3I1b1B2F302u2V280k44](http://cl.ly/3I1b1B2F302u2V280k44)

###Style the popup window:

- Map -> Change Info Window Layout ...
- Can pick with checkboxes or click CUSTOM tab to play with html

###Icons:

- [jkef.me/ft-icons](http://jkef.me/ft-icons)

###Adding a legend ... 

- Click on Map tab -> Change Map Styles ... -> Automatic Legend



