/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface UIAccessibilityInformationLoader : NSObject {

	NSTimer* _coalesceTimer;

}
+(id)sharedInstance;
-(void)_loadAccessibilityInformationOnMainThread:(BOOL)arg1 ;
-(void)_setNeedsLoadAccessibilityInformationOnMainThread;
-(void)_coalesceTimerFired:(id)arg1 ;
-(void)loadAccessibilityInformation;
-(void)setNeedsLoadAccessibilityInformation;
-(id)_init;
@end
