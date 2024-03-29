/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/TTSSpeechRequestDelegate.h>

@protocol TTSSpeechConnectionDelegate, TTSSpeechService;
@class TTSSpeechRequest, NSString;

@interface TTSSpeechRequestOwner : NSObject <TTSSpeechRequestDelegate> {

	id<TTSSpeechConnectionDelegate> _delegate;
	TTSSpeechRequest* _request;
	id<TTSSpeechService> _speechService;

}

@property (assign,nonatomic,__weak) id<TTSSpeechService> speechService;                    //@synthesize speechService=_speechService - In the implementation block
@property (assign,nonatomic,__weak) id<TTSSpeechConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TTSSpeechRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSystemSpeaking;
-(void)startSpeechRequest:(id)arg1 ;
-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(void)continueCurrentSpeechRequest;
-(id)availableVoicesForLanguageCode:(id)arg1 ;
-(oneway void)speechRequestDidStart:(id)arg1 forService:(id)arg2 ;
-(oneway void)speechRequestDidPause:(id)arg1 forService:(id)arg2 ;
-(oneway void)speechRequestDidContinue:(id)arg1 forService:(id)arg2 ;
-(oneway void)speechRequest:(id)arg1 withMark:(long long)arg2 didStartForRange:(NSRange)arg3 forService:(id)arg4 ;
-(oneway void)speechRequest:(id)arg1 didStopWithSuccess:(BOOL)arg2 phonemesSpoken:(id)arg3 forService:(id)arg4 error:(id)arg5 ;
-(id)initWithSpeechService:(id)arg1 ;
-(void)stopCurrentSpeechRequestAtMark:(long long)arg1 waitUntilStopped:(BOOL)arg2 ;
-(void)pauseCurrentSpeechRequestAtMark:(long long)arg1 waitUntilPaused:(BOOL)arg2 ;
-(void)setSpeechService:(id<TTSSpeechService>)arg1 ;
-(id<TTSSpeechService>)speechService;
-(void)_setRequest:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<TTSSpeechConnectionDelegate>)arg1 ;
-(id<TTSSpeechConnectionDelegate>)delegate;
-(TTSSpeechRequest *)request;
@end

