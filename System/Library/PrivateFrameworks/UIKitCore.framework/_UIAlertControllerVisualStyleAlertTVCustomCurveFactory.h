/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBasicAnimationFactory.h>

@class NSString;

@interface _UIAlertControllerVisualStyleAlertTVCustomCurveFactory : NSObject <_UIBasicAnimationFactory> {

	unsigned long long _curve;

}

@property (assign,nonatomic) unsigned long long curve;              //@synthesize curve=_curve - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCustomCurve:(unsigned long long)arg1 ;
-(unsigned long long)curve;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setCurve:(unsigned long long)arg1 ;
@end

