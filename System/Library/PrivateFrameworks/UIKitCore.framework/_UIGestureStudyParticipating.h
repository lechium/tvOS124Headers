/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _UIGestureStudyParticipating <NSObject>
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double movement; 
@required
-(double)duration;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(NSString *)eventName;
-(double)movement;

@end
