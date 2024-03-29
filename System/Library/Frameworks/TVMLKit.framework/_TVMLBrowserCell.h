/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVUIKit/_TVFullScreenBrowserViewCell.h>

@class _TVAppDocumentRequestController, UIView, UIImageView;

@interface _TVMLBrowserCell : _TVFullScreenBrowserViewCell {

	/*^block*/id _onLockupImageCancel;
	struct {
		BOOL loadDataSent;
	}  _flags;
	id _lockupImageProxy;
	_TVAppDocumentRequestController* _documentController;
	/*^block*/id _onLoadData;
	UIView* _contentBorderView;
	UIView* _contentDimmingView;
	UIImageView* _lockupImageView;

}

@property (nonatomic,readonly) UIView * contentBorderView;                                        //@synthesize contentBorderView=_contentBorderView - In the implementation block
@property (nonatomic,readonly) UIView * contentDimmingView;                                       //@synthesize contentDimmingView=_contentDimmingView - In the implementation block
@property (nonatomic,readonly) UIImageView * lockupImageView;                                     //@synthesize lockupImageView=_lockupImageView - In the implementation block
@property (nonatomic,retain) id lockupImageProxy;                                                 //@synthesize lockupImageProxy=_lockupImageProxy - In the implementation block
@property (nonatomic,readonly) UIViewController*<TVMediaController> mediaController; 
@property (nonatomic,retain) _TVAppDocumentRequestController * documentController;                //@synthesize documentController=_documentController - In the implementation block
@property (nonatomic,copy) id onLoadData;                                                         //@synthesize onLoadData=_onLoadData - In the implementation block
-(UIViewController*<TVMediaController>)mediaController;
-(void)setLockupImageProxy:(id)arg1 ;
-(void)setOnLoadData:(id)arg1 ;
-(_TVAppDocumentRequestController *)documentController;
-(void)setDocumentController:(_TVAppDocumentRequestController *)arg1 ;
-(UIImageView *)lockupImageView;
-(void)_loadDataConditionally:(BOOL)arg1 ;
-(UIView *)contentBorderView;
-(id)onLoadData;
-(void)normalizedPositionDidChange;
-(id)lockupImageProxy;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)prepareForReuse;
-(void)willMoveToWindow:(id)arg1 ;
-(UIView *)contentDimmingView;
@end

