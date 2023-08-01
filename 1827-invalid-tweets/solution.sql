/* Write your T-SQL query statement below */
select tweet_id
from Tweets 
Where Len(content) > 15
