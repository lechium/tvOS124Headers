/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/FigPiPableLayer.h>

@interface FigBaseCALayer : CALayer <FigPiPableLayer> {

	BOOL _preventsChangesToSublayerHierarchy;

}

@property (assign,nonatomic) BOOL preventsChangesToSublayerHierarchy;              //@synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(id)getLayerDisplay;
-(float)getDisplayScale;
-(BOOL)preventsChangesToSublayerHierarchy;
-(void)setPreventsChangesToSublayerHierarchy:(BOOL)arg1 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(id)init;
-(void)setNeedsDisplay;
-(void)addSublayer:(id)arg1 ;
-(void)setSublayers:(id)arg1 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeFromSuperlayer;
-(id)actionForKey:(id)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
@end

