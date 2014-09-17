Make, Map, Blink
==============

Info, code and deets for the "Make, Map, Blink" sessions I'm teaching at The New School university.

Click into one of the session folders for more information and the files you need to do the activities at home.

#Class 3: Hello, Arduino

##Intro

Blinky building and map making continue. First we'll get our computers to count dots inside shapes on a map (which is super useful). Bring a laptop if you'd like to try your hand as we go. Next, we'll learn the basics of Arduino, the tiny computer you can build with. First-timers always welcome!


##Intro to Arduino


##Make Arduino Blink


##Mapping: Points in a Polygon

==> DATA SHORTLINK: [http://jkef.me/mapping-workshop](http://jkef.me/mapping-workshop)
==> FILES USED: prek_sites_seats_demo.csv, nynta.zip

Challenge: Determine Pre-K availability, by NYC neighborhood

[WNYC Story](http://www.wnyc.org/story/map-pre-k-expands-some-neighborhoods-fair-better-others/)

###Upload List of Pre-K spots

- We'll be using prek_sites_seats_demo.csv

- First we geocoded all of the addresses to get lat/lons
    Can do on Google, if you're making a Google Map
    I like http://www.gpsvisualizer.com/geocoder/
    Also http://batchgeo.com/
    Cartodb.com also has a service (I haven't tried)

- Log into cartodb.com

- Drag/drop file onto dashboard to upload
    
Note that CartoDB detects a lat-lon column and makes points!

	- If it doesn't, use the "Georeference" option ...
	- Can also do addresses, for a fee

###Upload Neighborhood

- This is the nynta.zip file
- It's NYC neighbhorhoods, and they're made up of census tracts

- Got this from NYC.gov: [http://www.nyc.gov/html/dcp/html/bytes/applbyte.shtml#other](http://www.nyc.gov/html/dcp/html/bytes/applbyte.shtml#other)
    
- Note: This data (and almost all nyc data) is NOT in latitude & longitude
- It's in another projection called the New York - Long Island State Plane Coordinate System (feet)
- CartoDB fixes that on upload
- Upload by dragging nynta.zip to your carto.db dashboard

###Count Location Points in Polygons

- Open the neighborhoods file
- Click map view
- "Options" button at the top
- "Merge Tables ..."
- "Spatial Join"
- Pick the prek_sites_seats_demo table
- Pick "Count"
- Click "Merge Tables"
- Rename it something useful
- Map view
- "Paintbrush" wizard on the right
- Chloropleth
- Pick the intersect_count column

###Count *Seats* in Polygons
- First need to set seats as a number
- Back to neighborhood file
- "Options"
- "Merge"
- "Spatial Join"
- Pick the table
- Pick "SUM"
- Pick full_day_seats
- "Merge Tables"
- Rename it something useful
- Map view
- "Paintbrush" wizard on the right
- Chloropleth
- Pick the intersect_count column

###Make the tooltips nicer
- Click on a shape
- Click link to set the columns to show
- Pick the ntaname
- Pick the seats
- Change color if you want

###Share it
- "Visualize" button
- Give it a name
- Now the "Share" button
- Can share the public URL or the embed URL
- Can embed on a site with the Embed code (tho will cost once it goes over limit)

###Back to the table view:
- * Rename the column "seats"
- * Can Download

We took the extra step to compare these numbers census data to estimate how many 4-year-olds were in each neighborhood. The 2010 decennial census has single-age breakdowns all the way to block level. We used the tract-level data for the number of 1-year-olds in 2010 to determine the number of 5 year old


