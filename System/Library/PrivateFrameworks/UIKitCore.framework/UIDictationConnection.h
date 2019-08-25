/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFDictationDelegate.h>

@protocol UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, OS_dispatch_queue;
@class AFDictationConnection, NSObject, NSString;

@interface UIDictationConnection : NSObject <AFDictationDelegate> {

	BOOL _offlineOnly;
	id<UIDictationConnectionDelegate> _delegate;
	id<UIDictationConnectionTokenFilterProtocol> _tokenFilter;
	AFDictationConnection* _connection;
	NSObject*<OS_dispatch_queue> _analyticsQueue;

}

@property (nonatomic,retain) AFDictationConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL offlineOnly;                                                             //@synthesize offlineOnly=_offlineOnly - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> analyticsQueue;                                  //@synthesize analyticsQueue=_analyticsQueue - In the implementation block
@property (assign,nonatomic,__weak) id<UIDictationConnectionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIDictationConnectionTokenFilterProtocol> tokenFilter;              //@synthesize tokenFilter=_tokenFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)analytics;
+(BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(void)_updateFromGlobalOptions:(id)arg1 ;
+(id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(/*^block*/id)arg3 ;
+(BOOL)isDictationAvailable;
+(void)cacheSupportedDictationLanguages;
+(BOOL)dictationRestricted;
+(void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5 ;
-(void)setDelegate:(id<UIDictationConnectionDelegate>)arg1 ;
-(id<UIDictationConnectionDelegate>)delegate;
-(void)start;
-(BOOL)dictationIsAvailableForLanguage:(id)arg1 ;
-(AFDictationConnection *)connection;
-(void)beginAvailabilityMonitoring;
-(void)cancelAvailabilityMonitoring;
-(void)restartDictation;
-(void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2 ;
-(float)averagePower;
-(void)endSession;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5 ;
-(id)languageDetectionUserContext;
-(long long)speechEventTypeForDictationActivationType:(unsigned long long)arg1 ;
-(id)_createConnectionOptions;
-(id)_initializeWithOptions:(id)arg1 ;
-(void)_startWithOptions:(id)arg1 ;
-(id)_dictationOptions:(id)arg1 ;
-(id)_speechOptions:(id)arg1 ;
-(void)cancelSpeech;
-(void)preheat;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingWillBegin:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1 ;
-(void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2 ;
-(void)stopSpeech:(id)arg1 activationType:(unsigned long long)arg2 result:(id)arg3 suppressAlert:(BOOL)arg4 ;
-(void)logDidShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 ;
-(void)logDidSelectAlternative:(id)arg1 correctionIdentifier:(id)arg2 ;
-(void)logDidAcceptDictationResult:(id)arg1 reason:(id)arg2 result:(id)arg3 correctionIdentifier:(id)arg4 ;
-(id<UIDictationConnectionTokenFilterProtocol>)tokenFilter;
-(void)setTokenFilter:(id<UIDictationConnectionTokenFilterProtocol>)arg1 ;
-(void)setConnection:(AFDictationConnection *)arg1 ;
-(BOOL)offlineOnly;
-(void)setOfflineOnly:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)analyticsQueue;
-(void)setAnalyticsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

