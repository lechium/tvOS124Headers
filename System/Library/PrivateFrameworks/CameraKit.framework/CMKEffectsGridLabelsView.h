/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIBackdropViewObserver.h>

@class CMKEffectsGridView, NSArray, _UIBackdropView, _UILegibilitySettingsProvider;

@interface CMKEffectsGridLabelsView : UIView <_UIBackdropViewObserver> {

	BOOL _disableLayoutForLabels;
	CMKEffectsGridView* _gridView;
	long long _orientation;
	NSArray* _filterLabelViews;
	NSArray* _filterIndices;
	_UIBackdropView* __backdropView;
	_UILegibilitySettingsProvider* __legibilitySettingsProvider;

}

@property (setter=_setFilterLabelViews:,nonatomic,retain) NSArray * filterLabelViews;                   //@synthesize filterLabelViews=_filterLabelViews - In the implementation block
@property (setter=_setFilterIndices:,nonatomic,retain) NSArray * filterIndices;                         //@synthesize filterIndices=_filterIndices - In the implementation block
@property (nonatomic,retain) _UIBackdropView * _backdropView;                                           //@synthesize _backdropView=__backdropView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettingsProvider * _legibilitySettingsProvider;               //@synthesize _legibilitySettingsProvider=__legibilitySettingsProvider - In the implementation block
@property (nonatomic,retain) CMKEffectsGridView * gridView;                                             //@synthesize gridView=_gridView - In the implementation block
@property (assign,getter=isDisabledLayoutForLabels,nonatomic) BOOL disableLayoutForLabels;              //@synthesize disableLayoutForLabels=_disableLayoutForLabels - In the implementation block
@property (assign,nonatomic) long long orientation;                                                     //@synthesize orientation=_orientation - In the implementation block
-(void)updateFilterLabels;
-(NSArray *)filterLabelViews;
-(NSArray *)filterIndices;
-(CGRect)frameForLabelView:(id)arg1 withinGridFrame:(CGRect)arg2 ;
-(void)updateToContentSize:(id)arg1 ;
-(void)_replaceLabelViews:(BOOL)arg1 ;
-(void)_rebuildLabelViews;
-(void)_setFilterIndices:(id)arg1 ;
-(void)_setFilterLabelViews:(id)arg1 ;
-(CGAffineTransform)_transformForOrientation:(long long)arg1 ;
-(BOOL)isDisabledLayoutForLabels;
-(void)setDisableLayoutForLabels:(BOOL)arg1 ;
-(_UIBackdropView *)_backdropView;
-(void)set_backdropView:(_UIBackdropView *)arg1 ;
-(_UILegibilitySettingsProvider *)_legibilitySettingsProvider;
-(void)set_legibilitySettingsProvider:(_UILegibilitySettingsProvider *)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)backdropViewDidChange:(id)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)setGridView:(CMKEffectsGridView *)arg1 ;
-(CMKEffectsGridView *)gridView;
@end

