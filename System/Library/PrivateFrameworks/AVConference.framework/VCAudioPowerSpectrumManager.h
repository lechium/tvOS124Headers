/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCAudioPowerSpectrumMeterDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, AVConferenceXPCClient, NSObject, NSString;

@interface VCAudioPowerSpectrumManager : NSObject <VCAudioPowerSpectrumMeterDelegate> {

	NSMutableArray* _meters;
	NSMutableDictionary* _sources;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}

@property (nonatomic,readonly) NSMutableArray * meters;                    //@synthesize meters=_meters - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sources;              //@synthesize sources=_sources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSMutableDictionary *)sources;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(NSMutableArray *)meters;
-(void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2 ;
-(void)registerAudioPowerMeterSource:(id)arg1 ;
-(void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

