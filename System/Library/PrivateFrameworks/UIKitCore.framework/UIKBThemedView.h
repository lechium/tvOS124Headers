/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKBCacheableView.h>

@class CALayer, NSString;

@interface UIKBThemedView : UIView <UIKBCacheableView> {

	CALayer* _rightBorder;
	CALayer* _leftBorder;
	CALayer* _background;
	BOOL _lightKeyboard;
	BOOL _active;
	BOOL _usePersistentCaching;
	BOOL _showsTopBorder;
	BOOL _showsBottomBorder;
	BOOL _showsLeftBorder;
	BOOL _showsRightBorder;
	int _style;
	UIEdgeInsets _cacheInsets;

}

@property (assign,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int style;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cacheInsets;                    //@synthesize cacheInsets=_cacheInsets - In the implementation block
@property (assign,nonatomic) BOOL usePersistentCaching;                   //@synthesize usePersistentCaching=_usePersistentCaching - In the implementation block
@property (assign,nonatomic) BOOL showsTopBorder;                         //@synthesize showsTopBorder=_showsTopBorder - In the implementation block
@property (assign,nonatomic) BOOL showsBottomBorder;                      //@synthesize showsBottomBorder=_showsBottomBorder - In the implementation block
@property (assign,nonatomic) BOOL showsLeftBorder;                        //@synthesize showsLeftBorder=_showsLeftBorder - In the implementation block
@property (assign,nonatomic) BOOL showsRightBorder;                       //@synthesize showsRightBorder=_showsRightBorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
@property (nonatomic,readonly) long long cacheDeferPriority; 
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(void)setActive:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)displayLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(BOOL)active;
-(BOOL)_canDrawContent;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(void)setShowsRightBorder:(BOOL)arg1 ;
-(void)setUsePersistentCaching:(BOOL)arg1 ;
-(UIEdgeInsets)cacheInsets;
-(void)setCacheInsets:(UIEdgeInsets)arg1 ;
-(NSString *)cacheKey;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(BOOL)cacheDeferable;
-(double)cachedWidth;
-(BOOL)keepNonPersistent;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(void)_populateLayer:(id)arg1 withContents:(id)arg2 ;
-(void)setShowsTopBorder:(BOOL)arg1 ;
-(void)setShowsBottomBorder:(BOOL)arg1 ;
-(BOOL)showsTopBorder;
-(BOOL)showsBottomBorder;
-(BOOL)showsRightBorder;
-(BOOL)showsLeftBorder;
-(id)borderFilterTypeForCurrentStyle;
-(BOOL)_hasInsets;
-(id)traitsForCurrentStyle;
-(BOOL)usePersistentCaching;
@end
