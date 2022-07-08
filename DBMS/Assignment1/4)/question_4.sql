create TABLE X(id_num integer,id_str text);
insert into X(id_num,id_str)VALUES(1,'A'),(2,'B'),(3,'C'),(4,'D'),(5,'E');
SELECT * FROM X;
SELECT p.id_num||','||q.id_num||','||r.id_num as "ID_num", p.id_str||','||q.id_str||','||r.id_str AS "ID_str" 
from X as p,X as q,X as r where p.id_num<q.id_num and q.id_num<r.id_num ;