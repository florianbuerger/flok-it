//
//  UIApplication+UIApplication_NetworkIndicator.m
//  Hackernews
//
//  Created by Florian Bürger on 05.04.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "UIApplication+NetworkIndicator.h"

static NSInteger activityCount = 0;

@implementation UIApplication (NetworkIndicator)

- (void)showNetworkIndicator
{
  if ([[UIApplication sharedApplication] isStatusBarHidden])
    return;
  @synchronized ([UIApplication sharedApplication])
  {
    if (activityCount == 0)
      [self setNetworkActivityIndicatorVisible:YES];

    ++ activityCount;
  }
  
}

- (void)hideNetworkIndicator
{
  if ([[UIApplication sharedApplication] isStatusBarHidden])
    return;
  @synchronized ([UIApplication sharedApplication])
  {
    -- activityCount;
    if (activityCount == 0) 
      [self setNetworkActivityIndicatorVisible:NO];
  }
}

@end
