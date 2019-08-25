/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, NSObject;

@interface BWIrisMovieGenerator : NSObject {

	BOOL _sourceIsFrontFacingCamera;
	BOOL _sampleReferenceMoviesEnabled;
	SCD_Struct_BW2 _masterMovieDuration;
	OpaqueCMByteStreamRef _byteStream;
	OpaqueFigFormatReaderRef _masterMovieReader;
	BOOL _masterMovieParsingComplete;
	long long _masterMovieAudioExtractionID;
	OpaqueFigSimpleMutexRef _movieInfoAndCallbacksMutex;
	NSMutableArray* _movieInfoAndCallbacks;
	int _numberOfPendingReferenceMovies;
	NSObject*<OS_dispatch_queue> _movieGenerationQueue;
	BOOL _suspended;

}

@property (assign) BOOL suspended; 
@property (readonly) int numberOfPendingReferenceMovies; 
+(BOOL)_addStillImageTimeMetadataTrackToAssetWriter:(OpaqueFigAssetWriterRef)arg1 forTrackTimeScale:(int)arg2 yieldingTrackID:(int*)arg3 ;
+(void)initialize;
-(id)initWithReadableByteStream:(OpaqueCMByteStreamRef)arg1 metadataByteStream:(OpaqueCMByteStreamRef)arg2 forFrontFacingCamera:(BOOL)arg3 sampleReferenceMoviesEnabled:(BOOL)arg4 movieGenerationQueue:(id)arg5 ;
-(BOOL)_generateIrisMovies:(BOOL)arg1 ;
-(BOOL)suspended;
-(int)_generateRefMovieForInfo:(id)arg1 movieLevelMetadata:(id)arg2 generateMetadataMovie:(BOOL)arg3 ;
-(id)initWithReadableByteStream:(OpaqueCMByteStreamRef)arg1 forFrontFacingCamera:(BOOL)arg2 sampleReferenceMoviesEnabled:(BOOL)arg3 movieGenerationQueue:(id)arg4 ;
-(void)writeMovieWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)parseAdditionalFragments;
-(BOOL)flushAsync;
-(int)numberOfPendingReferenceMovies;
-(void)dealloc;
-(BOOL)flush;
-(void)setSuspended:(BOOL)arg1 ;
@end

