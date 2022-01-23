annual_sales=c(15.0,25.0,27.0,28.0,26.0,26.6)
barplot(annual_sales,
        main = "Annual Sales of Pharmaceutical Company",
        xlab = "Sales",
        ylab = "Year",
        names.arg = c(1995,1996,1997,1998,1999,2000),
        col = "darkred",
        horiz = TRUE)

