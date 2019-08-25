/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIVectorOperatable;
@interface _UIViewPropertyInfo : NSObject {

	id<UIVectorOperatable> _previousValue;
	id<UIVectorOperatable> _value;

}

@property (nonatomic,retain) id<UIVectorOperatable> previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
@property (nonatomic,retain) id<UIVectorOperatable> value;                      //@synthesize value=_value - In the implementation block
+(id)viewPropertyInfoWithValue:(id)arg1 previousValue:(id)arg2 ;
-(id<UIVectorOperatable>)value;
-(void)setValue:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)previousValue;
-(void)setPreviousValue:(id<UIVectorOperatable>)arg1 ;
@end
