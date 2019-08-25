/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NSURL, UIView;

@interface SBSAppDragLocalContext : NSObject {

	BOOL _cancelsViaScaleAndFade;
	NSString* _applicationBundleIdentifier;
	NSSet* _launchActions;
	NSURL* _launchURL;
	long long _startLocation;
	UIView* _portaledPreview;

}

@property (nonatomic,copy) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * launchActions;                      //@synthesize launchActions=_launchActions - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                                   //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,readonly) long long startLocation;                         //@synthesize startLocation=_startLocation - In the implementation block
@property (nonatomic,retain) UIView * portaledPreview;                          //@synthesize portaledPreview=_portaledPreview - In the implementation block
@property (assign,nonatomic) BOOL cancelsViaScaleAndFade;                       //@synthesize cancelsViaScaleAndFade=_cancelsViaScaleAndFade - In the implementation block
-(id)initWithApplicationBundleIdentifier:(id)arg1 withLaunchActions:(id)arg2 startLocation:(long long)arg3 ;
-(NSSet *)launchActions;
-(UIView *)portaledPreview;
-(void)setPortaledPreview:(UIView *)arg1 ;
-(BOOL)cancelsViaScaleAndFade;
-(void)setCancelsViaScaleAndFade:(BOOL)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(NSURL *)launchURL;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(long long)startLocation;
@end

