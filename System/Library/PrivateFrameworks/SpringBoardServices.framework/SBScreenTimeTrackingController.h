/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@protocol OS_dispatch_queue;
@class FBSDisplayLayoutMonitor, NSObject, FBSDisplayLayout, FBSDisplayLayoutTransitionContext, NSString;

@interface SBScreenTimeTrackingController : NSObject <FBSDisplayLayoutObserver> {

	FBSDisplayLayoutMonitor* _layoutMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _queue_isScreenOn;
	BOOL _queue_isPhoneOrFaceTimeActive;
	unsigned long long _queue_thisCategoryStartTime;
	double _queue_lastCategoryChangeTime;
	int _queue_activeContext;
	int _queue_activeCategory;
	FBSDisplayLayout* _queue_lastLayout;
	FBSDisplayLayoutTransitionContext* _queue_lastLayoutTransitionContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_queue_handleNewLayout:(id)arg1 withContext:(id)arg2 ;
-(void)_queue_setPhoneOrFaceTimeActive:(BOOL)arg1 ;
-(void)_queue_setScreenOn:(BOOL)arg1 withContext:(id)arg2 ;
-(void)_queue_setActiveCategory:(int)arg1 context:(int)arg2 ;
-(id)_nameForContext:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
@end

