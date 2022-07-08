select DISTINCT artists.Name as "artists who have albums" from albums,artists where albums.ArtistId=artists.ArtistId;

SELECT artists.Name as "artists who do not have albums" FROM artists WHERE (ArtistId NOT IN (SELECT ArtistId FROM albums));

select substring(Name,1,1) as "first alphabet of the artist name", count(*) as "count of artists per alphabet"
from (select artists.Name from albums,artists where albums.ArtistId=artists.ArtistId 
UNION ALL
SELECT artists.Name FROM artists WHERE (ArtistId NOT IN (SELECT ArtistId FROM albums))) GROUP by substring(Name,1,1);
