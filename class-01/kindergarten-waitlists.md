##Pins on Maps: Kindergarten Waitlists

###You'll need the bundle of files at: 
[http://jkef.me/mapping-workshop](http://jkef.me/mapping-workshop) (which points [here](https://github.com/jkeefe/mapping-workshop-data/archive/master.zip) ) Unzip them and put them in a place you'll remember.

###Finished story
[Lengthy Kindergarten Wait Lists Unveiled as Applicants Increase](http://www.wnyc.org/articles/wnyc-news/2012/apr/06/kindergarten-applicants-continue-grow-another-year-long-waiting-lists/)

###Original PDF we got from the Dept. of Education
[https://dl.dropbox.com/u/466610/K%20waitlist%20data_04.06.12.pdf](https://dl.dropbox.com/u/466610/K%20waitlist%20data_04.06.12.pdf)

Hocus-pocus: I turned the PDF into text, and then merged it on the school number with the school data spreadsheet [here](http://schools.nyc.gov/Offices/EnterpriseOperations/DIIT/OOD/default.htm) to make the `waitlist-with-addresses.csv` file in the bundle you downloaded above.

##Steps

###Upload the CSV to Google Fusion Tables
   
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
