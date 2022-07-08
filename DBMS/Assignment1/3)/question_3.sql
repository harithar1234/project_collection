select play_length,count(*) as "count of tracks" from (select 
  case 
    when Milliseconds<(60000) then 'short'
    when Milliseconds between (60000) and (300000) then 'medium'
    when Milliseconds>(300000) then 'long'
  end as 'play_length' from tracks) group by play_length;
  
  
