//
//  ModelController.h
//  ShopperShop
//
//  Created by ChauhanSidd on 9/13/12.
//  Copyright (c) 2012 Siddharth. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
