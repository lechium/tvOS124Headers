/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BBBiometricResource : NSObject {

	BOOL _isPasscodeSet;
	BOOL _isBiometricUnlockAllowed;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_updateIsPasscodeSet;
-(void)_updateIsBiometricUnlockAllowed;
-(void)_registerForBiometricUnlockAllowedChange;
-(void)_registerForPasscodeChange;
-(void)_unregisterForBiometricUnlockAllowedChange;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
@end

