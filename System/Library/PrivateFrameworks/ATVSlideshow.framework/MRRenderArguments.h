/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRRenderer, NSOperationQueue, NSDictionary;

@interface MRRenderArguments : NSObject {

	MRRenderer* _renderer;
	NSOperationQueue* _preloadQueue;
	NSDictionary* _forcedState;
	double _unalteredTime;
	double _displayLinkTimestamp;
	double _morphingProgress;
	int _thumbnailPolicy;
	unsigned char _currentLayoutIndex;
	BOOL _isPreloading;
	BOOL _freezesSizeOfImageRequests;
	BOOL _skipsAnimations;

}

@property (retain) NSOperationQueue * preloadQueue;               //@synthesize preloadQueue=_preloadQueue - In the implementation block
@property (assign) double unalteredTime;                          //@synthesize unalteredTime=_unalteredTime - In the implementation block
@property (assign) double displayLinkTimestamp;                   //@synthesize displayLinkTimestamp=_displayLinkTimestamp - In the implementation block
@property (assign) double morphingProgress;                       //@synthesize morphingProgress=_morphingProgress - In the implementation block
@property (assign) int thumbnailPolicy;                           //@synthesize thumbnailPolicy=_thumbnailPolicy - In the implementation block
@property (assign) unsigned char currentLayoutIndex;              //@synthesize currentLayoutIndex=_currentLayoutIndex - In the implementation block
@property (assign) BOOL freezesSizeOfImageRequests;               //@synthesize freezesSizeOfImageRequests=_freezesSizeOfImageRequests - In the implementation block
@property (retain,readonly) MRRenderer * renderer;                //@synthesize renderer=_renderer - In the implementation block
@property (retain) NSDictionary * forcedState;                    //@synthesize forcedState=_forcedState - In the implementation block
@property (readonly) BOOL isPreloading;                           //@synthesize isPreloading=_isPreloading - In the implementation block
@property (assign,nonatomic) BOOL skipsAnimations;                //@synthesize skipsAnimations=_skipsAnimations - In the implementation block
-(MRRenderer *)renderer;
-(NSOperationQueue *)preloadQueue;
-(double)unalteredTime;
-(id)copyForPreloading;
-(BOOL)isPreloading;
-(NSDictionary *)forcedState;
-(unsigned char)currentLayoutIndex;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(void)setForcedState:(NSDictionary *)arg1 ;
-(BOOL)skipsAnimations;
-(int)thumbnailPolicy;
-(void)setThumbnailPolicy:(int)arg1 ;
-(id)initWithRenderer:(id)arg1 ;
-(void)setPreloadQueue:(NSOperationQueue *)arg1 ;
-(void)setDisplayLinkTimestamp:(double)arg1 ;
-(void)setSkipsAnimations:(BOOL)arg1 ;
-(void)setUnalteredTime:(double)arg1 ;
-(void)setMorphingProgress:(double)arg1 ;
-(void)setFreezesSizeOfImageRequests:(BOOL)arg1 ;
-(double)displayLinkTimestamp;
-(double)morphingProgress;
-(BOOL)freezesSizeOfImageRequests;
-(void)dealloc;
-(void)cleanup;
@end

