/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CABackdropLayer : CALayer {

	BOOL _disablesOccludedBackdropBlurs;

}

@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * groupName; 
@property (assign) BOOL usesGlobalGroupNamespace; 
@property (assign) double scale; 
@property (assign) CGRect backdropRect; 
@property (assign) double marginWidth; 
@property (assign) BOOL disablesOccludedBackdropBlurs;                                 //@synthesize disablesOccludedBackdropBlurs=_disablesOccludedBackdropBlurs - In the implementation block
@property (assign) BOOL captureOnly; 
@property (assign) BOOL allowsInPlaceFiltering; 
@property (assign) BOOL reducesCaptureBitDepth; 
@property (assign) double zoom; 
@property (assign) BOOL tracksLuma; 
@property (__weak) id<CABackdropLayerDelegate><CALayerDelegate> delegate; 
@property (copy) NSString * statisticsType; 
@property (assign) double statisticsInterval; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(id)statisticsValues;
-(BOOL)usesGlobalGroupNamespace;
-(void)setUsesGlobalGroupNamespace:(BOOL)arg1 ;
-(CGRect)backdropRect;
-(void)setBackdropRect:(CGRect)arg1 ;
-(BOOL)allowsInPlaceFiltering;
-(BOOL)reducesCaptureBitDepth;
-(void)setReducesCaptureBitDepth:(BOOL)arg1 ;
-(BOOL)tracksLuma;
-(void)setTracksLuma:(BOOL)arg1 ;
-(void)setStatisticsType:(NSString *)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(double)marginWidth;
-(void)setMarginWidth:(double)arg1 ;
-(NSString *)statisticsType;
-(double)scale;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setScale:(double)arg1 ;
-(BOOL)disablesOccludedBackdropBlurs;
-(void)setDisablesOccludedBackdropBlurs:(BOOL)arg1 ;
-(NSString *)groupName;
-(void)setStatisticsInterval:(double)arg1 ;
-(double)statisticsInterval;
-(void)setAllowsInPlaceFiltering:(BOOL)arg1 ;
-(BOOL)captureOnly;
-(void)setCaptureOnly:(BOOL)arg1 ;
@end

