/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/PKMicaResizableView.h>

@class CALayer, NSArray, NSString;

@interface PKMicaLayer : CALayer <PKMicaResizableView> {

	CALayer* _rootLayer;
	NSArray* _publishedColorLayers;
	NSArray* _publishedColorShapeLayers;

}

@property (nonatomic,readonly) CALayer * rootLayer;                              //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,readonly) NSArray * publishedColorLayers;                   //@synthesize publishedColorLayers=_publishedColorLayers - In the implementation block
@property (nonatomic,readonly) NSArray * publishedColorShapeLayers;              //@synthesize publishedColorShapeLayers=_publishedColorShapeLayers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(double)pointScaleToMatchBoundsSize:(CGSize)arg1 ;
-(CGSize)boundsSizeToMatchPointScale:(double)arg1 ;
-(NSArray *)publishedColorLayers;
-(NSArray *)publishedColorShapeLayers;
-(id)init;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSublayers;
-(CALayer *)rootLayer;
@end

