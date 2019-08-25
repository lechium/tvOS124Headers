/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EARCaesuraSilencePosteriorGeneratorDelegate.h>

@protocol CSSPGEndpointAnalyzerDelegate, OS_dispatch_queue;
@class NSObject, EARCaesuraSilencePosteriorGenerator, NSString;

@interface CSSPGEndpointAnalyzer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {

	BOOL _hasReported;
	float _endpointThreshold;
	id<CSSPGEndpointAnalyzerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	EARCaesuraSilencePosteriorGenerator* _caesuraSPG;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) EARCaesuraSilencePosteriorGenerator * caesuraSPG;               //@synthesize caesuraSPG=_caesuraSPG - In the implementation block
@property (assign,nonatomic) float endpointThreshold;                                        //@synthesize endpointThreshold=_endpointThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasReported;                                               //@synthesize hasReported=_hasReported - In the implementation block
@property (assign,nonatomic,__weak) id<CSSPGEndpointAnalyzerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)initWithEndpointThreshold:(float)arg1 ;
-(void)clientSilenceFeaturesAvailable:(id)arg1 ;
-(EARCaesuraSilencePosteriorGenerator *)caesuraSPG;
-(void)setCaesuraSPG:(EARCaesuraSilencePosteriorGenerator *)arg1 ;
-(float)endpointThreshold;
-(void)setEndpointThreshold:(float)arg1 ;
-(BOOL)hasReported;
-(void)setHasReported:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CSSPGEndpointAnalyzerDelegate>)arg1 ;
-(id<CSSPGEndpointAnalyzerDelegate>)delegate;
-(void)reset;
-(void)stop;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
@end

