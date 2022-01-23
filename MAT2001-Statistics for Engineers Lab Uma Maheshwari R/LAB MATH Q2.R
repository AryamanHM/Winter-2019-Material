df=c(3,4,1,1,3,4,3,3,1,3,2,1,2,1,2,3,2,3,1,1,1,1,4,3,1)
table(df)
barplot(table(df),
        main="Soft Drink Preferences of 25 people",
        xlab="People",
        ylab="Soft Drinks",
        names.arg=c("Limca","Cola","Pepsi","Mangola"),
        border="yellow",
        col="red"
)
