/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/ISIconManagerObserver.h>

@class ISIcon;

@interface ISIconLayer : CALayer <ISIconManagerObserver> {

	ISIcon* _icon;
	unsigned long long _variantOptions;
	unsigned long long _badgeOptions;
	unsigned long long _backgroundStyle;
	unsigned long long _shape;
	BOOL _shouldApplyMask;
	BOOL _drawBorder;
	unsigned long long _iconShape;

}

@property (nonatomic,retain) ISIcon * icon;                                   //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned long long variantOptions;               //@synthesize variantOptions=_variantOptions - In the implementation block
@property (assign,nonatomic) unsigned long long badgeOptions;                 //@synthesize badgeOptions=_badgeOptions - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) unsigned long long iconShape;                    //@synthesize iconShape=_iconShape - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyMask;                            //@synthesize shouldApplyMask=_shouldApplyMask - In the implementation block
@property (assign,nonatomic) BOOL drawBorder;                                 //@synthesize drawBorder=_drawBorder - In the implementation block
-(unsigned long long)badgeOptions;
-(void)setBadgeOptions:(unsigned long long)arg1 ;
-(void)setVariantOptions:(unsigned long long)arg1 ;
-(unsigned long long)variantOptions;
-(unsigned long long)iconShape;
-(BOOL)shouldApplyMask;
-(void)setShouldApplyMask:(BOOL)arg1 ;
-(id)initWithIcon:(id)arg1 ;
-(void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2 ;
-(void)setIconShape:(unsigned long long)arg1 ;
-(BOOL)drawBorder;
-(void)setDrawBorder:(BOOL)arg1 ;
-(id)init;
-(ISIcon *)icon;
-(void)setIcon:(ISIcon *)arg1 ;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(unsigned long long)backgroundStyle;
@end

