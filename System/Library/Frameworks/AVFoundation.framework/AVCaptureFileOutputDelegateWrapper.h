/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray, AVWeakReferencingDelegateStorage;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {

	BOOL _recording;
	BOOL _paused;
	long long _settingsID;
	NSURL* _outputFileURL;
	NSArray* _metadata;
	AVWeakReferencingDelegateStorage* _delegateStorage;
	NSArray* _connections;

}

@property (readonly) long long settingsID;                                            //@synthesize settingsID=_settingsID - In the implementation block
@property (readonly) NSURL * outputFileURL;                                           //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (retain) NSArray * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (readonly) AVWeakReferencingDelegateStorage * delegateStorage;              //@synthesize delegateStorage=_delegateStorage - In the implementation block
@property (readonly) NSArray * connections;                                           //@synthesize connections=_connections - In the implementation block
@property (assign,getter=isRecording,nonatomic) BOOL recording;                       //@synthesize recording=_recording - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                             //@synthesize paused=_paused - In the implementation block
+(id)wrapperWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4 ;
-(long long)settingsID;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4 ;
-(NSURL *)outputFileURL;
-(BOOL)isRecording;
-(void)setRecording:(BOOL)arg1 ;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)connections;
-(void)dealloc;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
@end

