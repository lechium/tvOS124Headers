/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class AVFocusableScrollView, UILabel, UIVisualEffectView, NSString, AVPlayerController;

@interface AVInfoPanelFullScreenSummaryViewController : UIViewController {

	AVFocusableScrollView* _scrollView;
	UILabel* _textLabel;
	UIVisualEffectView* _backdropView;
	BOOL _shouldResumePlayback;
	NSString* _text;
	AVPlayerController* _playerController;

}

@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL shouldResumePlayback;                                 //@synthesize shouldResumePlayback=_shouldResumePlayback - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerController * playerController;              //@synthesize playerController=_playerController - In the implementation block
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerController;
-(BOOL)shouldResumePlayback;
-(void)setShouldResumePlayback:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
@end

