/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OKPresentation, NSString, OKMediaItem, OKPresentationCanvas, OKProducerPlugin;

@interface OKPresentationGuideline : NSObject <NSCopying> {

	OKPresentation* _presentation;
	unsigned long long _type;
	double _timestamp;
	NSString* _key;
	id _value;
	OKMediaItem* _mediaItem;
	NSString* _mediaItemUniqueURLString;
	OKPresentationCanvas* _presentationCanvas;
	unsigned long long _presentationCanvasType;
	NSString* _presentationCanvasKeyPath;
	OKProducerPlugin* _producerPlugin;
	NSString* _producerPluginUUID;

}

@property (assign,nonatomic) OKPresentation * presentation;                          //@synthesize presentation=_presentation - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * key;                                           //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id value;                                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) OKMediaItem * mediaItem;                                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) OKProducerPlugin * producerPlugin;                      //@synthesize producerPlugin=_producerPlugin - In the implementation block
@property (nonatomic,retain) OKPresentationCanvas * presentationCanvas;              //@synthesize presentationCanvas=_presentationCanvas - In the implementation block
+(id)guidelineLiveAuthoringEnabled:(BOOL)arg1 ;
+(id)guidelineAuthoringDefaultMobileRecommendedResolutionSizes;
+(id)guidelineAuthoringTransitionSettings:(id)arg1 ;
+(id)guidelineWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3 ;
+(id)defaultMobileRecommendedResolutionSizes;
+(id)guidelineAuthoringRecommendedResolutionSizes:(id)arg1 ;
+(id)globalUniqueKeyForKey:(id)arg1 ;
+(id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2 ;
+(id)globalUniqueKeyForKey:(id)arg1 presentationCanvas:(id)arg2 ;
+(id)globalUniqueKeyForKey:(id)arg1 producerPlugin:(id)arg2 ;
+(id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2 presentationCanvas:(id)arg3 producerPlugin:(id)arg4 ;
+(id)guidelineAuthoringRandomSeed:(unsigned long long)arg1 ;
+(id)guidelineAuthoringSynopsis:(id)arg1 ;
+(id)guidelineAuthoringAudioURLs:(id)arg1 ;
+(id)guidelineAuthoringTitle:(id)arg1 ;
+(id)guidelineAuthoringAttributedTitle:(id)arg1 ;
+(id)guidelineAuthoringInteractiveTransitionSettings:(id)arg1 ;
+(id)guidelineAuthoringMediaAttributes:(id)arg1 ;
+(id)guidelineAuthoringPageDuration:(double)arg1 ;
+(id)guidelineAuthoringCurrentPageDuration:(double)arg1 ;
+(id)guidelineAuthoringTotalDuration:(double)arg1 ;
+(id)guidelineAuthoringDurationFactor:(double)arg1 ;
+(id)guidelineAuthoringMinimumDuration:(double)arg1 ;
+(id)guidelineAuthoringMaximumDuration:(double)arg1 ;
+(id)guidelineAuthoringFitToAudioDuration:(BOOL)arg1 ;
+(id)guidelineAuthoringDebuggingEnabled:(BOOL)arg1 ;
-(OKMediaItem *)mediaItem;
-(void)setMediaItem:(OKMediaItem *)arg1 ;
-(OKPresentation *)presentation;
-(id)initWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)presentationCanvasKeyPath;
-(void)setPresentationCanvas:(OKPresentationCanvas *)arg1 ;
-(void)setProducerPlugin:(OKProducerPlugin *)arg1 ;
-(OKPresentationCanvas *)presentationCanvas;
-(OKProducerPlugin *)producerPlugin;
-(id)globalUniqueKey;
-(id)init;
-(id)dictionary;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setPresentation:(OKPresentation *)arg1 ;
-(double)timestamp;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(NSString *)key;
-(id)initWithDictionary:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

