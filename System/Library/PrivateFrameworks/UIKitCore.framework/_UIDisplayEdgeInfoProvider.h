/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDisplayEdgeInfoProviding.h>

@class UISApplicationSupportDisplayEdgeInfo, NSString;

@interface _UIDisplayEdgeInfoProvider : NSObject <_UIDisplayEdgeInfoProviding> {

	UISApplicationSupportDisplayEdgeInfo* _displayEdgeInfo;

}

@property (nonatomic,readonly) UISApplicationSupportDisplayEdgeInfo * displayEdgeInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
+(id)nullDisplayEdgeInfoProvider;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(UIEdgeInsets)peripheryInsets;
-(double)systemMinimumMargin;
-(id)initWithDisplayEdgeInfo:(id)arg1 ;
-(UISApplicationSupportDisplayEdgeInfo *)displayEdgeInfo;
@end

