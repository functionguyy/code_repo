# 0x0D. SQL - Introduction
## Learning Objectives
- What's a database
- What's a relational database
- What does SQL stand for
- What's MySQL
- How to create a database in MySQL
- What does `DDL` and `DML` stand for
- How to `CREATE` or `ALTER` a table
- How to `SELECT` data from a table
- How to `INSERT`, `UPDATE` or `DELETE` data
- What are `subqueries`
## Notes
Sometimes, the information that we need is not actually stored in the database,
but has to computed in some way from the stored data.

We can compute values from information that is in a table simply showing the
computation in the SELECT clause. Each computation creates a new column in the
output table, just as if it were a named attribute.
```sql
SELECT <attribute 1>, <attribute n> , <attribute 2> * <attribute 4> FROM <table
name>;
```
Computations are not limited just to columns names; they may also include
constants.
```sql
SELECT <attribute 1>, <attribute n> , <attribute 2> * 1.06 FROM <table
name>;
```
When you write a computation directly like this into a `SELECT` statement, the
expression is used as the heading of the resulting column in the table that is
returned.
We can create our column heading or alias using the `AS` keyword.
```sql
SELECT <attribute 1>, <attribute n> , <attribute 2> * 1.06 AS subtotal FROM <table
name>;
```
if you want your column alias to have spaces in it, you will have to enclose it
in *double quote* marks.
SQL syntax requires the use of single quotes around literal strings like '90840'
**Aggregate functions**
aggregate functions let us compute values based on multiple rows in our tables.
They are also used as part of the `SELECT` clause, and also create new columns
in the output.
`SUM` is a type of aggregate function, we use it to find total amount
```sql
SELECT SUM(<attribute name> * <attribute name2>) AS totalsales FROM <table
name>;
```

## Resources
- [Basic SQL statements: DDL and DML](https://web.csulb.edu/colleges/coe/cecs/dbdesign/dbdesign.php?page=sql/ddldml.php)
- [Basic queries: SQL and RA](https://web.csulb.edu/colleges/coe/cecs/dbdesign/dbdesign.php?page=sql/queries.php)
- [SQL technique:functions](https://web.csulb.edu/colleges/coe/cecs/dbdesign/dbdesign.php?page=sql/functions.php)
- [SQL technique:subqueries](https://web.csulb.edu/colleges/coe/cecs/dbdesign/dbdesign.php?page=sql/subqueries.php)
- [MySQL Cheat Sheet](https://intellipaat.com/mediaFiles/2019/02/SQL-Commands-Cheat-Sheet.pdf?US)
- [MySQL 8.0 SQL Statement Syntax](https://dev.mysql.com/doc/refman/8.0/en/sql-statements.html)
- [difference between a backtick and an apostrophe in queries](https://stackoverflow.com/questions/29402361/what-makes-the-big-difference-between-a-backtick-and-an-apostrophe/29402458)
- [Installing MySQL in Ubuntu 20.04](https://phoenixnap.com/kb/install-mysql-ubuntu-20-04)
