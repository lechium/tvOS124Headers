/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;
@interface SBSStatusBarStyleOverridesCoordinator : NSObject {

	int _styleOverrides;
	id<SBSStatusBarStyleOverridesCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBSStatusBarStyleOverridesCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int styleOverrides;                                                           //@synthesize styleOverrides=_styleOverrides - In the implementation block
-(void)_handleStatusBarTapWithContext:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_registrationInvalidated:(id)arg1 ;
-(void)setRegisteredStyleOverrides:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<SBSStatusBarStyleOverridesCoordinatorDelegate>)arg1 ;
-(id<SBSStatusBarStyleOverridesCoordinatorDelegate>)delegate;
-(int)styleOverrides;
@end

