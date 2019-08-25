/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIScrollViewScrollObserver_Internal.h>

@protocol _UIScrollViewScrollObserver_Internal;
@class UIScrollView, NSString;

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollViewScrollObserver_Internal> {

	id<_UIScrollViewScrollObserver_Internal> _controller;
	UIScrollView* _scrollView;

}

@property (assign,nonatomic,__weak) id<_UIScrollViewScrollObserver_Internal> controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didScroll;
-(UIScrollView *)scrollView;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id<_UIScrollViewScrollObserver_Internal>)controller;
-(void)setController:(id<_UIScrollViewScrollObserver_Internal>)arg1 ;
@end

