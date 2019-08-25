/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@interface _KeypadButton : UIButton {

	long long _keyType;
	unsigned long long _digit;

}

@property (nonatomic,readonly) long long keyType;                     //@synthesize keyType=_keyType - In the implementation block
@property (nonatomic,readonly) unsigned long long digit;              //@synthesize digit=_digit - In the implementation block
-(long long)keyType;
-(id)initWithKeyType:(long long)arg1 digit:(unsigned long long)arg2 target:(id)arg3 ;
-(id)initWithKeyType:(long long)arg1 target:(id)arg2 ;
-(id)initWithDigit:(unsigned long long)arg1 target:(id)arg2 ;
-(unsigned long long)digit;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateBackgroundColor;
@end

