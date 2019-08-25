/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface VUITVLibraryView : UIView {

	UIView* _menuView;
	UIView* _gridView;

}

@property (nonatomic,retain) UIView * menuView;              //@synthesize menuView=_menuView - In the implementation block
@property (nonatomic,retain) UIView * gridView;              //@synthesize gridView=_gridView - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)menuView;
-(void)setMenuView:(UIView *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)setGridView:(UIView *)arg1 ;
-(UIView *)gridView;
@end
