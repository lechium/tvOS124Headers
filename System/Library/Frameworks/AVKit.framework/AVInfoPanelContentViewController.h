/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIView, UIVisualEffectView;

@interface AVInfoPanelContentViewController : UIViewController {

	BOOL _hasContent;
	UIView* _contentView;
	UIVisualEffectView* _backdropView;

}

@property (nonatomic,readonly) UIView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) BOOL hasContent;                                //@synthesize hasContent=_hasContent - In the implementation block
+(void)setCornerRadius:(double)arg1 ;
+(double)cornerRadius;
-(CGSize)contentSizeForWidth:(double)arg1 ;
-(UIView *)contentView;
-(void)loadView;
-(UIVisualEffectView *)backdropView;
-(BOOL)hasContent;
@end

