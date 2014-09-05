//
//  AppDetails.m
//  Recipe 2-1 to 2-2:About Us
//
//  Created by ralbatr on 14-9-5.
//  Copyright (c) 2014年 ralbatr. All rights reserved.
//
//  Model Class

#import "AppDetails.h"

@implementation AppDetails

- (id)initWithName:(NSString *)name description:(NSString *)descr
{
    self = [super init];
    if (self) {
        self.name = name;
        self.description = descr;
    }
    return self;
}

@end
