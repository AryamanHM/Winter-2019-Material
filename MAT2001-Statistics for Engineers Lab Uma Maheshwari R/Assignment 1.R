emp_id=c(1,2,3,4,5)
emp_name=c("Ram","Rajesh","Mano","Rao","Glory")
salary=c(643.30,515.20,671.00,729.00,943.25)
start_date=c("2012-01-01","2013-09-23","2014-11-15","2014-05-11","2015-03-27")
df=data.frame(emp_id,emp_name,salary,start_date)
df
df[,c(2,3)]
df[1:2,]
df[c(3,5), c(2,4)]
dept=c("Finance","Section","Maintenance","Production","Research and Development")
cbind(df,dept)
emp_reg=c(1002,1003,1004,1005,1006)
gender=c("Male","Male","Male","Male","Female")
country=c("India","Russia","United States Of America","England","Nigoha")
children=c(1,2,2,1,5)
dataframe2=data.frame(emp_reg,gender,country,children)
dataframe2
cbind(df,dataframe2)


