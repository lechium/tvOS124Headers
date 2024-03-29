/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIButton.h>

@class VUICircleProgressIndicator, NSString;

@interface VUITransactionButton : VUIButton {

	BOOL _waitingForTransactionToStart;
	BOOL _monitorTransaction;
	VUICircleProgressIndicator* _progressIndicator;
	NSString* _textContentTitleBackup;

}

@property (assign,getter=isWaitingForTransactionToStart,nonatomic) BOOL waitingForTransactionToStart;              //@synthesize waitingForTransactionToStart=_waitingForTransactionToStart - In the implementation block
@property (assign,nonatomic) BOOL monitorTransaction;                                                              //@synthesize monitorTransaction=_monitorTransaction - In the implementation block
@property (nonatomic,retain) VUICircleProgressIndicator * progressIndicator;                                       //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,copy) NSString * textContentTitleBackup;                                                      //@synthesize textContentTitleBackup=_textContentTitleBackup - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
-(void)updateWithElement:(id)arg1 ;
-(id)_carouselView;
-(void)_buttonTapped:(id)arg1 eventName:(id)arg2 ;
-(void)_unregisterTransactionNotifications;
-(void)_layoutProgressIndicatorIfNeeded;
-(id)_transactionBuyParams;
-(void)setMonitorTransaction:(BOOL)arg1 ;
-(void)_handleTransactionDidStartNotification:(id)arg1 ;
-(VUICircleProgressIndicator *)progressIndicator;
-(void)_updateProgressIndicatorTintColor:(id)arg1 ;
-(BOOL)monitorTransaction;
-(void)_addProgressIndicatorWithFrame:(CGRect)arg1 ;
-(void)_registerForTransactionNotification;
-(void)setProgressIndicator:(VUICircleProgressIndicator *)arg1 ;
-(BOOL)isWaitingForTransactionToStart;
-(void)setWaitingForTransactionToStart:(BOOL)arg1 ;
-(void)_handleTransactionDidFinishNotification:(id)arg1 ;
-(NSString *)textContentTitleBackup;
-(void)setTextContentTitleBackup:(NSString *)arg1 ;
@end

