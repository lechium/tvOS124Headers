//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SVSPagerView, UIView;

@protocol SVSPagerViewDelegate <NSObject>
- (void)pagerViewDidChangeTransitionState:(SVSPagerView *)arg1;
- (void)pagerView:(SVSPagerView *)arg1 didActivatePageView:(UIView *)arg2 oldActivePageView:(UIView *)arg3;
@end

