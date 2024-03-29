/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIPressesEventTerminalRegistration.h>

@class NSArray, UIPressesEvent, NSString;

@interface UIHBClickGestureRecognizer : UIGestureRecognizer <UIPressesEventTerminalRegistration> {

	UIPressesEvent* _registeredEventForTerminalEvents;
	unsigned long long _lastSeenClickCount;
	BOOL _recognizesOnPressPhaseBegan;
	unsigned long long _clickCount;

}

@property (assign,nonatomic) unsigned long long clickCount;                 //@synthesize clickCount=_clickCount - In the implementation block
@property (assign,nonatomic) BOOL recognizesOnPressPhaseBegan;              //@synthesize recognizesOnPressPhaseBegan=_recognizesOnPressPhaseBegan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * allowedPressTypes; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)_processPresses:(id)arg1 ;
-(unsigned long long)clickCount;
-(void)_succeed;
-(void)_fail;
-(void)pressesEventDidReceiveTerminal:(id)arg1 ;
-(void)setClickCount:(unsigned long long)arg1 ;
-(BOOL)recognizesOnPressPhaseBegan;
-(void)setRecognizesOnPressPhaseBegan:(BOOL)arg1 ;
@end

