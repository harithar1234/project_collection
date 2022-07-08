CREATE TABLE instructor (
name TEXT,
course_id TEXT);
INSERT INTO instructor (name, course_id)
VALUES('Amy','CS1000'),('Aaron','CS700'),('Anne','CS400');
CREATE TABLE student (
name TEXT,
course_id TEXT);
INSERT INTO student (name, course_id)
VALUES('Jack','CS800'),('Jones','CS1000'),('Jason', 'CS450');

select * from instructor;
select * from student;

SELECT  instructor.name as  "instructor_name",instructor.course_id as "course they teach" ,student.name as "student_name",
student.course_id as " course they take"  FROM instructor LEFT JOIN student ON instructor.course_id=student.course_id
union 
SELECT  instructor.name as  "instructor_name",instructor.course_id as "course they teach" ,student.name as "student_name",
student.course_id as " course they take"  FROM student LEFT JOIN instructor ON instructor.course_id=student.course_id;