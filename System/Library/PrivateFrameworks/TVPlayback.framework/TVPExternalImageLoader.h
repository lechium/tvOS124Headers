/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPPlaybackImageLoader.h>

@class TVPExternalImageConfig, NSMutableSet, NSMutableDictionary, NSString;

@interface TVPExternalImageLoader : NSObject <TVPPlaybackImageLoader> {

	TVPExternalImageConfig* _config;
	NSMutableSet* _imageProxies;
	NSMutableDictionary* _imageProxyMappings;
	NSMutableSet* _loadedImageActualTimes;

}

@property (nonatomic,retain) TVPExternalImageConfig * config;                       //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSMutableSet * imageProxies;                           //@synthesize imageProxies=_imageProxies - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageProxyMappings;              //@synthesize imageProxyMappings=_imageProxyMappings - In the implementation block
@property (nonatomic,retain) NSMutableSet * loadedImageActualTimes;                 //@synthesize loadedImageActualTimes=_loadedImageActualTimes - In the implementation block
@property (nonatomic,readonly) double firstImageTime; 
@property (nonatomic,readonly) double lastImageTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfig:(id)arg1 ;
-(void)cancelImageLoadingForIdentifiers:(id)arg1 ;
-(id)loadImagesForTimes:(id)arg1 maxSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3 ;
-(double)closestImageTimeForTime:(double)arg1 ;
-(NSMutableDictionary *)imageProxyMappings;
-(double)closestImageTimeForTime:(double)arg1 imageInterval:(double)arg2 ;
-(unsigned long long)_closestImageIndexForTime:(double)arg1 actualTime:(double*)arg2 imageInterval:(double)arg3 ;
-(id)_closestURLForImageTime:(double)arg1 actualTime:(double*)arg2 ;
-(NSMutableSet *)loadedImageActualTimes;
-(double)firstImageTime;
-(double)lastImageTime;
-(BOOL)imageIsLoadedForTime:(double)arg1 ;
-(id)loadedImageForTime:(double)arg1 ;
-(void)setImageProxyMappings:(NSMutableDictionary *)arg1 ;
-(void)setLoadedImageActualTimes:(NSMutableSet *)arg1 ;
-(void)invalidate;
-(TVPExternalImageConfig *)config;
-(void)setConfig:(TVPExternalImageConfig *)arg1 ;
-(NSMutableSet *)imageProxies;
-(void)setImageProxies:(NSMutableSet *)arg1 ;
@end

