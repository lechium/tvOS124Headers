/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>

@protocol OS_dispatch_source;
@class PBSDisplayMode, _TVSUIBlackScreenRecoveryImageViewController, NSObject;

@interface TVSUIBlackScreenRecoveryViewController : UIAlertController {

	BOOL _iterateAvailableModes;
	PBSDisplayMode* _displayMode;
	/*^block*/id _dismissBlock;
	double _timeout;
	_TVSUIBlackScreenRecoveryImageViewController* _bsrImageViewController;
	long long _remainingSeconds;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _iteratorDismissBlock;

}

@property (nonatomic,retain) _TVSUIBlackScreenRecoveryImageViewController * bsrImageViewController;              //@synthesize bsrImageViewController=_bsrImageViewController - In the implementation block
@property (nonatomic,retain) PBSDisplayMode * displayMode;                                                       //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) BOOL iterateAvailableModes;                                                         //@synthesize iterateAvailableModes=_iterateAvailableModes - In the implementation block
@property (assign,nonatomic) double timeout;                                                                     //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long remainingSeconds;                                                         //@synthesize remainingSeconds=_remainingSeconds - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                                                //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy) id iteratorDismissBlock;                                                              //@synthesize iteratorDismissBlock=_iteratorDismissBlock - In the implementation block
@property (nonatomic,copy) id dismissBlock;                                                                      //@synthesize dismissBlock=_dismissBlock - In the implementation block
+(id)_recoveryControllerWithDisplayMode:(id)arg1 timeoutDuration:(double)arg2 iterateAvailableModes:(BOOL)arg3 iteratorDismissBlock:(/*^block*/id)arg4 ;
+(id)recoveryControllerWithDisplayMode:(id)arg1 timeoutDuration:(double)arg2 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setDisplayMode:(PBSDisplayMode *)arg1 ;
-(void)setIteratorDismissBlock:(id)arg1 ;
-(void)setIterateAvailableModes:(BOOL)arg1 ;
-(void)_dismissForReason:(long long)arg1 ;
-(void)setBsrImageViewController:(_TVSUIBlackScreenRecoveryImageViewController *)arg1 ;
-(void)setRemainingSeconds:(long long)arg1 ;
-(void)_destroyTimer;
-(id)iteratorDismissBlock;
-(void)_updateTime;
-(_TVSUIBlackScreenRecoveryImageViewController *)bsrImageViewController;
-(BOOL)iterateAvailableModes;
-(long long)remainingSeconds;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(PBSDisplayMode *)displayMode;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
-(void)_resetTimer;
@end

