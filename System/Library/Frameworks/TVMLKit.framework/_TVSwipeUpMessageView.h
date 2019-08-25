/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, _TVImageView, UILabel;

@interface _TVSwipeUpMessageView : UIView {

	int _swipeUpMessageState;
	BOOL _enabled;
	NSString* _message;
	_TVImageView* _chevronView;
	UILabel* _messageView;

}

@property (nonatomic,readonly) _TVImageView * chevronView;               //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,readonly) UILabel * messageView;                    //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,copy) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(_TVImageView *)chevronView;
-(void)_processSwipeUpMessageEvent:(int)arg1 ;
-(UILabel *)messageView;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

