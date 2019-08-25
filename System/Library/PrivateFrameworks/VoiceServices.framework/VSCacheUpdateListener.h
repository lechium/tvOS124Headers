/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableArray, NSDictionary, NSTimer;

@interface VSCacheUpdateListener : NSObject {

	NSLock* _lock;
	NSMutableArray* _updateRequestQueue;
	NSDictionary* _dataProviders;
	NSTimer* _flushTimer;
	BOOL _isListening;

}
+(id)sharedListener;
+(id)sharedListenerIfExists;
-(id)_initShared;
-(void)_flush;
-(void)_spokenLanguageChanged:(id)arg1 ;
-(void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2 ;
-(void)_enqueueRequest:(id)arg1 ;
-(void)startListening;
-(void)stopListening;
-(id)init;
-(void)dealloc;
@end
