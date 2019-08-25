//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTRemoteSetPlaybackQueueUtil : NSObject
{
}

+ (id)_entityForFetchRequest:(id)arg1;	// IMP=0x000000010007fdc0
+ (void)_destinationForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007fc28
+ (long long)requestStatusForMediaRemoteStatus:(unsigned int)arg1;	// IMP=0x000000010007fba4
+ (void)insertPlayerItem:(id)arg1 intoPlaybackQueueAtPosition:(int)arg2;	// IMP=0x000000010007f8e4
+ (void)insertEpisode:(id)arg1 intoPlaybackQueueAtPosition:(int)arg2;	// IMP=0x000000010007f854
+ (void)decodeAndSetPlaybackQueueFromIdentifiers:(id)arg1 enqueuerDSID:(id)arg2 startPlayback:(_Bool)arg3 upNextQueueIntent:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010007f2f8
+ (void)pickRouteAndSwitchToLocalCard:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007f148
+ (void)convertActiveEndpointToBufferedAirPlayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010007f084
+ (void)modifyLocalContextForAirplayingToDevicesAtDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007eea4
+ (void)performRequestAsBufferedAirPlay:(id)arg1;	// IMP=0x000000010007ec0c
+ (void)promptBeforePerformingRequestAsBufferedAirPlay:(id)arg1 queueStatus:(unsigned long long)arg2;	// IMP=0x000000010007db44
+ (void)sendPlaybackQueueToLocalDestination:(struct _MRSystemAppPlaybackQueue *)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010007d8c0
+ (void)setRemotePlaybackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007cebc

@end
