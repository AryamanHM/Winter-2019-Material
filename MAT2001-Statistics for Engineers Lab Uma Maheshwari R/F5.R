data1<-c(2,3,7,8,10)
moment(data1)
all.moments(data1)
moment(data1,order=3,absolute=TRUE)
moment(data1,order=4,absolute=TRUE)
d<-all.moments(data1,order.max=4,central=FALSE,absolute=TRUE,na.rm=FALSE) #all 4 moments together
d