/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSString;

@interface UIKBSplitImageView : UIView {

	BOOL _canStretchAsFullWidth;
	UIImageView* _fullView;
	UIImageView* _splitLeft;
	UIImageView* _splitRight;
	NSString* _currentFilterType;

}

@property (nonatomic,retain) NSString * filterType;              //@synthesize currentFilterType=_currentFilterType - In the implementation block
-(void)dealloc;
-(void)setFilterType:(NSString *)arg1 ;
-(NSString *)filterType;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(void)setContentsMultiplyColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 canStretchAsFullWidth:(BOOL)arg2 ;
-(void)prepareForDisplay:(BOOL)arg1 ;
-(void)insertSubviewAtBottom:(id)arg1 ;
-(void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3 ;
-(void)clearImages;
-(void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4 ;
@end

