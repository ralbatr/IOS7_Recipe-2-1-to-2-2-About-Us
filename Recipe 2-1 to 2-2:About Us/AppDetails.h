//
//  AppDetails.h
//  Recipe 2-1 to 2-2:About Us
//
//  Created by ralbatr on 14-9-5.
//  Copyright (c) 2014年 ralbatr. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppDetails : NSObject

@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *description;

- (id)initWithName:(NSString *)name description:(NSString *)descr;

@end
