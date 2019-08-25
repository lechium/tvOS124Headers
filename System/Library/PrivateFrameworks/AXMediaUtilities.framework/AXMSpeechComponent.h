/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMOutputComponent.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@class AVSpeechSynthesizer, NSString;

@interface AXMSpeechComponent : AXMOutputComponent <AVSpeechSynthesizerDelegate> {

	AVSpeechSynthesizer* _synthesizer;
	/*^block*/id _currentRequestCompletionBlock;

}

@property (nonatomic,retain) AVSpeechSynthesizer * synthesizer;              //@synthesize synthesizer=_synthesizer - In the implementation block
@property (nonatomic,copy) id currentRequestCompletionBlock;                 //@synthesize currentRequestCompletionBlock=_currentRequestCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
-(void)setSynthesizer:(AVSpeechSynthesizer *)arg1 ;
-(AVSpeechSynthesizer *)synthesizer;
-(id)currentRequestCompletionBlock;
-(void)setCurrentRequestCompletionBlock:(id)arg1 ;
-(BOOL)canHandleRequest:(id)arg1 options:(id)arg2 ;
-(void)handleRequest:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopSpeakingImmediately;
-(void)stopSpeakingAtNextWord;
-(id)init;
@end

