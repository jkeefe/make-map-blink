Make, Map, Blink
==============

Info, code and deets for the "Make, Map, Blink" sessions I'm teaching at The New School university.

Click into one of the session folders for more information and the files you need to do the activities at home.

#Class 2: I *promised* we would cook stuff!

##Intro

First we'll pour a bunch of data onto a map of the United States to see people-patterns emerge. Bring a laptop if you'd like to try your hand as we go. Next we'll cook up a recipe for playing with LEDs using kitchen ingredients. And that's no metaphor! Come play with homemade conductive dough.

##Make a Choropleth Map: German Ancestry in the US

Introduction to blending Shapes + Data, using zip codes. (Slide deck)

For our project ...

- The *shapes* are US Counties. 
- The *data* is percentage of people in the county of German ancestry
- The *join* is the FIPS code (unique for each county)

###Upload Ancestry Data to Google Fusion Tables

I downloaded this data from the US Census Bureau web site. You can get it using the CSV this github folder: [german_ancestry.csv](https://github.com/jkeefe/make-map-blink/blob/master/class-02/german_ancestry.csv?raw=true)

Upload the CSV to Google Fusion Tables:
    
- http://drive.google.com
- -> Create
- -> Fusion Table
- -> Chose File
- -> german_ancestry.csv
- -> Next
- -> Next
- -> Finish
    
OK! Now we need the county SHAPES:

- Also can get from census
- I have a shapefile in this github folder as [us_counties.zip](https://github.com/jkeefe/make-map-blink/blob/master/class-02/us_counties.zip?raw=true)
- But WAIT!
    
Quick digression about SHP vs KML

- Difference between the two
- Can convert one to the other using 
    - cartodb.com (upload as SHP in a zip file, Export as KML)
    - shpescape.com (slower, but drops it right into Fusion Table)

I've given you a converted file as us_counties.kml

- You can upload it, like you did the CSV (Fusion tables accept KML files)
- BUT WAIT AGAIN! I've already done that, too
- I already uploaded it to fusion tables and then made it public using "Share"
- Open a new tab and view it at http://jkef.me/us-map-ft
- Click on "Map of Geometry" tab
        
Let's put them together!

- Be on the ancestry data tab
- File -> Merge
- Go copy the URL from the map tab and come back
- Paste it into the thin box at the bottom
- Next
- Need to tell Fusion Tables what data columns should be matched. Use these:
    - "id2"
    - "fips"
- Next
- Merge
- Click on the link for the new table
- See the merged data!
- Go to "Map of Geometry" tab
- Don't freak out if you see dots instead of counties (I did), just zoom in a click or two
    
Make it pretty (and interesting)

- "Map of Geometry" -> Change map
- New column on the left side (may have already been open)
- Feature Map -> Change feature styles...
- Polygons -> Fill Color -> Buckets
- Divide into 5 buckets
- Column: pct_german
- Click: Use this range

- Go back to try the gradient
- Feature Map -> Change feature styles... (I like to make the opacities 100% to demo)
 
- Add a legend
- Feature Map -> Change feature styles... -> Legend -> Automatic legend

- Fix the info window

- Share it!
    Share -> Make it public
    ALSO:
    "Map of Geometry" -> Publish ...
        Gives you
            link
            embed code
            html & javascript

##Brain Break!

##For Your Cupboard

Digital kitchenware that's great to have on hand for cooking up data projects. New items added each class, as they are used. The growing list is [here](link). 

###Utensils
Simple services you should sign up for to make thing easier to cook online Often free. 

- A [Google](http://accounts.google.com) account, if you don't already have one
- A blog if you don't have one. So you can embed and show your work.
	- [Tumblr](http://tumblr.com) is a good one. 
	- I use [Posthaven](http://posthaven.com).
- A domain name. Preferably your own name! I use [myhosting.com](http://myhosting.com)
	- Don't get the full hosting; just a "parked" domain for now

###Buy now, use in future classes
(shopping list from hackshackers event)

- Arduino Uno
- Cable
- Get them together here: [https://www.sparkfun.com/wish_lists/83994](https://www.sparkfun.com/wish_lists/83994)

##Make Conductive Dough

* [Recipe here](http://courseweb.stthomas.edu/apthomas/SquishyCircuits/conductiveDough.htm)
* Cook it up for reals.
* [Recipe here](http://courseweb.stthomas.edu/apthomas/SquishyCircuits/conductiveDough.htm)
* What's going on?
* Resistance
* Show the stretchy wire again; other examples
* RGB LEDs


