/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIKeyboardArbitrationClient
@required
-(void)queue_keyboardChanged:(id)arg1 onComplete:(/*^block*/id)arg2;
-(void)queue_keyboardChangedWithCompletion:(/*^block*/id)arg1;
-(void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(/*^block*/id)arg4;
-(void)queue_keyboardSuppressed:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)queue_applicationLostFocusWithCompletion:(/*^block*/id)arg1;
-(void)queue_getDebugInfoWithCompletion:(/*^block*/id)arg1;
-(void)queue_setKeyboardDisabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;

@end
