/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, NSNumber;

@interface TVPRelatedContent : NSObject {

	UIViewController* _detailViewController;
	UIViewController* _optionsViewController;
	NSNumber* _durationUntilPlaybackWillAdvance;

}

@property (nonatomic,retain) UIViewController * detailViewController;                //@synthesize detailViewController=_detailViewController - In the implementation block
@property (nonatomic,retain) UIViewController * optionsViewController;               //@synthesize optionsViewController=_optionsViewController - In the implementation block
@property (nonatomic,copy) NSNumber * durationUntilPlaybackWillAdvance;              //@synthesize durationUntilPlaybackWillAdvance=_durationUntilPlaybackWillAdvance - In the implementation block
-(UIViewController *)optionsViewController;
-(void)setDurationUntilPlaybackWillAdvance:(NSNumber *)arg1 ;
-(void)setOptionsViewController:(UIViewController *)arg1 ;
-(NSNumber *)durationUntilPlaybackWillAdvance;
-(void)setDetailViewController:(UIViewController *)arg1 ;
-(UIViewController *)detailViewController;
@end

