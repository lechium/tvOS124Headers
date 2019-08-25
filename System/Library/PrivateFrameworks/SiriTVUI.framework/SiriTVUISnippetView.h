/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriTVUISnippetViewDelegate;
@interface SiriTVUISnippetView : UIView {

	id<SiriTVUISnippetViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriTVUISnippetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<SiriTVUISnippetViewDelegate>)arg1 ;
-(id<SiriTVUISnippetViewDelegate>)delegate;
@end

