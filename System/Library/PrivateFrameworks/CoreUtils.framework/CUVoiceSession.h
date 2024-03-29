/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/VSSpeechSynthesizerDelegate.h>

@protocol OS_dispatch_queue;
@class CUVoiceRequest, VSSpeechSynthesizer, NSObject, NSString;

@interface CUVoiceSession : NSObject <VSSpeechSynthesizerDelegate> {

	CUVoiceRequest* _currentRequest;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	unsigned _invalidateFlags;
	NSMutableArray* _requests;
	VSSpeechSynthesizer* _speechSynthesizer;
	LogCategory* _ucat;
	NSMutableArray* _voiceRequests;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)speakText:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)_speakText:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidated;
-(void)invalidateWithFlags:(unsigned)arg1 ;
-(void)stopSpeaking;
-(void)_completeRequest:(id)arg1 error:(id)arg2 ;
-(void)_completeAllRequestsWithError:(id)arg1 ;
-(void)_processQueuedRequests;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError2:(id)arg4 ;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
@end

