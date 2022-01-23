empid=c(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15)
age=c(30,37,45,32,50,60,35,32,34,43,32,30,43,50,60)
sex=c(0,1,0,1,1,1,0,0,1,0,0,1,1,0,0)
status=c(1,1,2,2,1,1,1,2,2,1,2,1,2,1,2)
empinfo=data.frame(empid,age,sex,status)
empinfo
empinfo$sex=factor(empinfo$sex,labels=c("male","female"))
empinfo$status=factor(empinfo$status,labels=c("staff","faculty"))
empinfo
sexm=subset(empinfo,empinfo$sex='male')
sexm
summary(empinfo)
summary(sexm)
table1=table(empinfo$sex) #table for sex
table1
table3=table(empinfo$sex,empinfo$status)
table3
plot(empinfo$age,type="l",main="age of subjects",xlab="empid",ylab="age in years",col="blue")
table4<-table(empinfo$sex)
pie(table4)
