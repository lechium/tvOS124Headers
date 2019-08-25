/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting;
@class VUICardFloatingContentView, UIView, NSString;

@interface VUIFocusableCollectionViewCell : UICollectionViewCell <TVAuxiliaryViewSelecting> {

	BOOL pressIsAnimating;
	BOOL unpressOnEndAnimating;
	BOOL _allowsFocus;
	VUICardFloatingContentView* _floatingView;
	UIView*<TVAuxiliaryViewSelecting> _selectingView;

}

@property (nonatomic,retain) VUICardFloatingContentView * floatingView;                           //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic,__weak) UIView*<TVAuxiliaryViewSelecting> selectingView;              //@synthesize selectingView=_selectingView - In the implementation block
@property (assign,nonatomic) BOOL allowsFocus;                                                    //@synthesize allowsFocus=_allowsFocus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowsFocus:(BOOL)arg1 ;
-(BOOL)allowsFocus;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(UIView*<TVAuxiliaryViewSelecting>)selectingView;
-(VUICardFloatingContentView *)floatingView;
-(void)setFloatingView:(VUICardFloatingContentView *)arg1 ;
-(void)setSelectingView:(UIView*<TVAuxiliaryViewSelecting>)arg1 ;
-(void)_updateBackgroundAndHighlightColor;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(id)_selectingView;
-(void)_showPressState;
-(void)_clearPressState;
@end

