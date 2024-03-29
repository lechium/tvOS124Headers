/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UISApplicationSupportDisplayEdgeInsetsWrapper, NSNumber, NSString;

@interface UISApplicationSupportDisplayEdgeInfo : NSObject <BSXPCCoding, NSCopying> {

	SCD_Union_UI2 _infoFlags;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _peripheryInsets;
	NSNumber* _systemMinimumMargin;
	NSNumber* _homeAffordanceOverlayAllowance;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsPortrait;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsLandscapeLeft;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsPortraitUpsideDown;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsLandscapeRight;

}

@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * peripheryInsets;                               //@synthesize peripheryInsets=_peripheryInsets - In the implementation block
@property (nonatomic,retain) NSNumber * systemMinimumMargin;                                                                //@synthesize systemMinimumMargin=_systemMinimumMargin - In the implementation block
@property (nonatomic,retain) NSNumber * homeAffordanceOverlayAllowance;                                                     //@synthesize homeAffordanceOverlayAllowance=_homeAffordanceOverlayAllowance - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsPortrait;                        //@synthesize safeAreaInsetsPortrait=_safeAreaInsetsPortrait - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsLandscapeLeft;                   //@synthesize safeAreaInsetsLandscapeLeft=_safeAreaInsetsLandscapeLeft - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsPortraitUpsideDown;              //@synthesize safeAreaInsetsPortraitUpsideDown=_safeAreaInsetsPortraitUpsideDown - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsLandscapeRight;                  //@synthesize safeAreaInsetsLandscapeRight=_safeAreaInsetsLandscapeRight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDisplayEdgeInfoForceInsets:(BOOL)arg1 ;
+(id)defaultDisplayEdgeInfo;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsPortrait;
-(NSNumber *)homeAffordanceOverlayAllowance;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsLandscapeLeft;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsPortraitUpsideDown;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsLandscapeRight;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)peripheryInsets;
-(NSNumber *)systemMinimumMargin;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setPeripheryInsets:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setSystemMinimumMargin:(NSNumber *)arg1 ;
-(void)setSafeAreaInsetsPortrait:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setHomeAffordanceOverlayAllowance:(NSNumber *)arg1 ;
-(void)setSafeAreaInsetsLandscapeLeft:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setSafeAreaInsetsPortraitUpsideDown:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setSafeAreaInsetsLandscapeRight:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)_performIvarUpdateIfAllowed:(/*^block*/id)arg1 ;
-(void)_copyFromOtherInfo:(id)arg1 ;
@end

