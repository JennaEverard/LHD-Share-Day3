getwd()

setwd("./Documents/LHD/Day3/data-visuals")

getwd()

library(tidyverse)
library(ggplot2)
library(plyr)

ny <- read.table("wa.csv", header=TRUE, sep=",")

# HOW ABOUT A HISTOGRAM?

ggplot(data=ny, aes(x=WA)) +
  geom_histogram(bins = 100)

# BAR CHART TIME INSTEAD

ggplot(ny, aes(x=YEAR, y=WA)) +
  geom_bar(aes(), stat="identity")

ggplot(ny, aes(x=YEAR, y=WA)) +
  geom_bar(aes(), stat="identity") +
  theme_bw()

# Scatter Plot

d <- data.frame(x = ny$YEAR,
                y = ny$WA)

ggplot(ny, aes(x=YEAR, y=WA)) +
  geom_point(shape=1)

# Adding regression line

ggplot(d, aes(x,y)) +
  geom_point(shape = 1) +
  geom_smooth(method = lm) +
  theme_bw() +
  xlab("Year") +
  ylab("Pigeon Count")
