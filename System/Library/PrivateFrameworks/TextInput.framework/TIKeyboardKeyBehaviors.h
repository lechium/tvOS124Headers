/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIKeyboardKeyBehaviors : NSObject {

	unsigned long long _spaceKeyBehavior;
	unsigned long long _returnKeyBehavior;

}

@property (assign,nonatomic) unsigned long long spaceKeyBehavior;               //@synthesize spaceKeyBehavior=_spaceKeyBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long returnKeyBehavior;              //@synthesize returnKeyBehavior=_returnKeyBehavior - In the implementation block
+(id)behaviorForSpaceKey:(unsigned long long)arg1 forReturnKey:(unsigned long long)arg2 ;
-(id)initWithSpaceKeyBehavior:(unsigned long long)arg1 returnKeyBehavior:(unsigned long long)arg2 ;
-(void)setSpaceKeyBehavior:(unsigned long long)arg1 ;
-(void)setReturnKeyBehavior:(unsigned long long)arg1 ;
-(unsigned long long)spaceKeyBehavior;
-(unsigned long long)returnKeyBehavior;
@end
