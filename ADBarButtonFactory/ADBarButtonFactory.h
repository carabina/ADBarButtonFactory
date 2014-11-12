//
//  ADBarButtonItemFactory.h
//  ADBarButtonFactory
//
//  Created by Andrew Drozdov on 11/12/14.
//  Copyright (c) 2014 Andrew Drozdov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface ADBarButtonFactory : NSObject

+ (UIBarButtonItem *)createBarButtonItemWithTitle:(NSString *)t target:(id)tgt action:(SEL)a color:(UIColor*)color bgColor:(UIColor*)bgColor;

@end
