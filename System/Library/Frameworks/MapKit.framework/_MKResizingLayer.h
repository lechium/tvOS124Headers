/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableArray, NSArray;

@interface _MKResizingLayer : CALayer {

	NSMutableArray* _sizedLayers;
	BOOL _needsLayoutOnBoundsChange;

}

@property (assign,nonatomic) BOOL needsLayoutOnBoundsChange;                   //@synthesize needsLayoutOnBoundsChange=_needsLayoutOnBoundsChange - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sizeToBoundsLayers; 
-(NSArray *)sizeToBoundsLayers;
-(void)sizeSublayerToBounds:(id)arg1 ;
-(BOOL)needsLayoutOnBoundsChange;
-(void)setNeedsLayoutOnBoundsChange:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setMask:(id)arg1 ;
-(void)setContentsScale:(double)arg1 ;
@end

