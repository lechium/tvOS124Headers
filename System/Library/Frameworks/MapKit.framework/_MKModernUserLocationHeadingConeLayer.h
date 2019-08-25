/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationHeadingConeLayer.h>

@interface _MKModernUserLocationHeadingConeLayer : MKUserLocationHeadingConeLayer
-(id)initWithUserLocationView:(id)arg1 ;
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(id)_headingImage:(CGPoint*)arg1 ;
-(void)_createMaskLayer;
-(CGRect)_normalizedHeadingMaskRectForIndex:(unsigned long long)arg1 ;
-(unsigned long long)_keyframeIndexForAccuracy:(double)arg1 ;
-(BOOL)_shouldShowHeadingForAccuracy:(double)arg1 ;
-(void)_updateHeadingMaskForAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(void)_updateShowHeadingForAccuracy:(double)arg1 ;
@end

