/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel;

@interface CMKAvalancheIndicatorView : UIView {

	BOOL _showsWhenStarted;
	UIView* __backgroundView;
	UILabel* __countLabel;
	long long __numberOfPhotos;

}

@property (nonatomic,readonly) UIView * _backgroundView;               //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * _countLabel;                  //@synthesize _countLabel=__countLabel - In the implementation block
@property (nonatomic,readonly) long long _numberOfPhotos;              //@synthesize _numberOfPhotos=__numberOfPhotos - In the implementation block
@property (assign,nonatomic) BOOL showsWhenStarted;                    //@synthesize showsWhenStarted=_showsWhenStarted - In the implementation block
-(long long)_numberOfPhotos;
-(void)_updateCountLabelWithNumberOfPhotos;
-(void)_commonCMKAvalancheIndicatorViewInitialization;
-(void)_performCaptureAnimation;
-(BOOL)showsWhenStarted;
-(void)finishIncrementingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)incrementWithCaptureAnimation:(BOOL)arg1 ;
-(void)setShowsWhenStarted:(BOOL)arg1 ;
-(UILabel *)_countLabel;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)_backgroundView;
-(CGSize)intrinsicContentSize;
-(void)reset;
@end

