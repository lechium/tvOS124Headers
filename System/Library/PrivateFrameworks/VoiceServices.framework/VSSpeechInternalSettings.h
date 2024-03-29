/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface VSSpeechInternalSettings : NSObject {

	BOOL _internalBuild;
	BOOL _isInternalBuild;
	NSUserDefaults* _internalDefaults;

}

@property (assign,nonatomic) BOOL isInternalBuild;                           //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (nonatomic,retain) NSUserDefaults * internalDefaults;              //@synthesize internalDefaults=_internalDefaults - In the implementation block
@property (nonatomic,readonly) BOOL internalBuild;                           //@synthesize internalBuild=_internalBuild - In the implementation block
@property (assign,nonatomic) BOOL enableAudioDump; 
@property (assign,nonatomic) BOOL disableCache; 
@property (assign,nonatomic) BOOL disableAssetCleaning; 
@property (assign,nonatomic) BOOL enableLocalVoices; 
@property (assign,nonatomic) BOOL enableHomePodSimulation; 
@property (assign,nonatomic) float serverTTSTimeout; 
@property (assign,nonatomic) BOOL disableServerTimeoutFallback; 
@property (assign,nonatomic) BOOL forceServerTTS; 
@property (assign,nonatomic) BOOL disableNewBackend; 
+(id)standardInstance;
-(BOOL)internalBuild;
-(BOOL)disableAssetCleaning;
-(BOOL)enableLocalVoices;
-(BOOL)enableAudioDump;
-(void)setEnableAudioDump:(BOOL)arg1 ;
-(BOOL)disableCache;
-(void)setDisableCache:(BOOL)arg1 ;
-(void)setDisableAssetCleaning:(BOOL)arg1 ;
-(void)setEnableLocalVoices:(BOOL)arg1 ;
-(BOOL)enableHomePodSimulation;
-(void)setEnableHomePodSimulation:(BOOL)arg1 ;
-(float)serverTTSTimeout;
-(void)setServerTTSTimeout:(float)arg1 ;
-(BOOL)forceServerTTS;
-(void)setForceServerTTS:(BOOL)arg1 ;
-(BOOL)disableServerTimeoutFallback;
-(void)setDisableServerTimeoutFallback:(BOOL)arg1 ;
-(BOOL)disableNewBackend;
-(void)setDisableNewBackend:(BOOL)arg1 ;
-(void)setIsInternalBuild:(BOOL)arg1 ;
-(void)setInternalDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)internalDefaults;
-(BOOL)isInternalBuild;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

