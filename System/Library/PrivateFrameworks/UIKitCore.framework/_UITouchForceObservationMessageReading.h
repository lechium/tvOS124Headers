/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITouchForceObservationMessageReading <NSObject>
@property (nonatomic,readonly) double touchForce; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) CGPoint centroid; 
@property (nonatomic,readonly) BOOL shouldFilterDueToSystemGestures; 
@required
-(double)timestamp;
-(double)touchForce;
-(CGPoint)centroid;
-(BOOL)shouldFilterDueToSystemGestures;

@end

