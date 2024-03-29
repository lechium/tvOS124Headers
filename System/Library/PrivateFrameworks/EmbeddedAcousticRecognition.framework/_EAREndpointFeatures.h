/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _EAREndpointFeatures : NSObject {

	float _silencePosteriorNF;
	float _serverFeaturesLatency;
	long long _wordCount;
	long long _trailingSilenceDuration;
	double _endOfSentenceLikelihood;
	NSArray* _pauseCounts;
	double _silencePosterior;
	double _clientSilenceFramesCountMs;
	double _clientSilenceProbability;
	long long _eagerResultEndTime;

}

@property (assign,nonatomic) long long wordCount;                            //@synthesize wordCount=_wordCount - In the implementation block
@property (assign,nonatomic) long long trailingSilenceDuration;              //@synthesize trailingSilenceDuration=_trailingSilenceDuration - In the implementation block
@property (assign,nonatomic) double endOfSentenceLikelihood;                 //@synthesize endOfSentenceLikelihood=_endOfSentenceLikelihood - In the implementation block
@property (nonatomic,copy) NSArray * pauseCounts;                            //@synthesize pauseCounts=_pauseCounts - In the implementation block
@property (assign,nonatomic) double silencePosterior;                        //@synthesize silencePosterior=_silencePosterior - In the implementation block
@property (assign,nonatomic) double clientSilenceFramesCountMs;              //@synthesize clientSilenceFramesCountMs=_clientSilenceFramesCountMs - In the implementation block
@property (assign,nonatomic) double clientSilenceProbability;                //@synthesize clientSilenceProbability=_clientSilenceProbability - In the implementation block
@property (assign,nonatomic) float silencePosteriorNF;                       //@synthesize silencePosteriorNF=_silencePosteriorNF - In the implementation block
@property (assign,nonatomic) float serverFeaturesLatency;                    //@synthesize serverFeaturesLatency=_serverFeaturesLatency - In the implementation block
@property (assign,nonatomic) long long eagerResultEndTime;                   //@synthesize eagerResultEndTime=_eagerResultEndTime - In the implementation block
-(NSArray *)pauseCounts;
-(void)setPauseCounts:(NSArray *)arg1 ;
-(long long)trailingSilenceDuration;
-(void)setTrailingSilenceDuration:(long long)arg1 ;
-(void)setEndOfSentenceLikelihood:(double)arg1 ;
-(double)clientSilenceFramesCountMs;
-(void)setClientSilenceFramesCountMs:(double)arg1 ;
-(double)clientSilenceProbability;
-(void)setClientSilenceProbability:(double)arg1 ;
-(float)silencePosteriorNF;
-(void)setSilencePosteriorNF:(float)arg1 ;
-(float)serverFeaturesLatency;
-(void)setServerFeaturesLatency:(float)arg1 ;
-(long long)eagerResultEndTime;
-(void)setEagerResultEndTime:(long long)arg1 ;
-(long long)wordCount;
-(void)setWordCount:(long long)arg1 ;
-(double)silencePosterior;
-(void)setSilencePosterior:(double)arg1 ;
-(id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 clientSilenceFramesCountMs:(double)arg6 clientSilenceProbability:(double)arg7 silencePosteriorNF:(float)arg8 serverFeaturesLatency:(float)arg9 eagerResultEndTime:(long long)arg10 ;
-(double)endOfSentenceLikelihood;
-(id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 clientSilenceFramesCountMs:(double)arg6 clientSilenceProbability:(double)arg7 silencePosteriorNF:(float)arg8 serverFeaturesLatency:(float)arg9 ;
-(id)description;
@end

