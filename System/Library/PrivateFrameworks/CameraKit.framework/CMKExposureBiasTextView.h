/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKBadgeTextView.h>

@class NSString;

@interface CMKExposureBiasTextView : CMKBadgeTextView {

	float _exposureBias;
	NSString* __lastText;

}

@property (nonatomic,retain) NSString * _lastText;              //@synthesize _lastText=__lastText - In the implementation block
@property (assign,nonatomic) float exposureBias;                //@synthesize exposureBias=_exposureBias - In the implementation block
-(id)_textForExposureBias:(float)arg1 ;
-(void)setExposureBias:(float)arg1 ;
-(double)_textHorizontalInset;
-(double)_textHorizontalKerningOffset;
-(double)_textVerticalInset;
-(float)exposureBias;
-(NSString *)_lastText;
-(void)set_lastText:(NSString *)arg1 ;
-(id)_textAttributes;
-(id)_text;
-(CGSize)_textSize;
@end

