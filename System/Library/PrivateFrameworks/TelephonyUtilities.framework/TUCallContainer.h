/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallContainerPrivate.h>
#import <libobjc.A.dylib/TUCallContainer.h>
@class NSArray, TUCall;


@protocol TUCallContainer <NSObject>
@property (nonatomic,copy,readonly) NSArray * currentCalls; 
@property (nonatomic,copy,readonly) NSArray * currentVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * incomingCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * conferenceParticipantCalls; 
@property (nonatomic,copy,readonly) NSArray * callsHostedElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsWithAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsHostedOrAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsOnDefaultPairedDevice; 
@property (nonatomic,readonly) TUCall * incomingCall; 
@property (nonatomic,readonly) TUCall * incomingVideoCall; 
@property (nonatomic,readonly) TUCall * activeVideoCall; 
@property (nonatomic,readonly) TUCall * currentVideoCall; 
@property (nonatomic,readonly) unsigned long long currentCallCount; 
@property (nonatomic,readonly) unsigned long long currentVideoCallCount; 
@property (nonatomic,readonly) unsigned long long currentAudioAndVideoCallCount; 
@property (nonatomic,readonly) unsigned long long callCountOnDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL hasCurrentCalls; 
@property (nonatomic,readonly) BOOL hasCurrentAudioCalls; 
@property (nonatomic,readonly) BOOL hasCurrentVideoCalls; 
@property (nonatomic,readonly) BOOL anyCallIsHostedOnCurrentDevice; 
@property (nonatomic,readonly) BOOL anyCallIsEndpointOnCurrentDevice; 
@property (nonatomic,copy,readonly) NSArray * currentCallGroups; 
@property (nonatomic,copy,readonly) NSArray * callGroupsOnDefaultPairedDevice; 
@required
-(id)callsPassingTest:(/*^block*/id)arg1;
-(id)callPassingTest:(/*^block*/id)arg1;
-(TUCall *)incomingVideoCall;
-(TUCall *)activeVideoCall;
-(unsigned long long)currentCallCount;
-(TUCall *)incomingCall;
-(id)callWithStatus:(int)arg1;
-(unsigned long long)currentAudioAndVideoCallCount;
-(id)audioOrVideoCallWithStatus:(int)arg1;
-(unsigned long long)countOfCallsPassingTest:(/*^block*/id)arg1;
-(BOOL)anyCallPassesTest:(/*^block*/id)arg1;
-(BOOL)allCallsPassTest:(/*^block*/id)arg1;
-(NSArray *)currentAudioAndVideoCalls;
-(NSArray *)callsOnDefaultPairedDevice;
-(NSArray *)conferenceParticipantCalls;
-(id)callsWithStatus:(int)arg1;
-(id)audioAndVideoCallsWithStatus:(int)arg1;
-(id)callsWithGroupUUID:(id)arg1;
-(id)videoCallWithStatus:(int)arg1;
-(id)callWithUniqueProxyIdentifier:(id)arg1;
-(id)callWithCallUUID:(id)arg1;
-(id)displayedCallFromCalls:(id)arg1;
-(BOOL)allCallsAreOfService:(int)arg1;
-(NSArray *)incomingCalls;
-(NSArray *)displayedCalls;
-(NSArray *)displayedAudioAndVideoCalls;
-(NSArray *)callsHostedElsewhere;
-(NSArray *)callsWithAnEndpointElsewhere;
-(NSArray *)callsHostedOrAnEndpointElsewhere;
-(TUCall *)currentVideoCall;
-(unsigned long long)currentVideoCallCount;
-(unsigned long long)callCountOnDefaultPairedDevice;
-(BOOL)hasCurrentCalls;
-(BOOL)hasCurrentAudioCalls;
-(BOOL)hasCurrentVideoCalls;
-(BOOL)anyCallIsHostedOnCurrentDevice;
-(BOOL)anyCallIsEndpointOnCurrentDevice;
-(NSArray *)currentCallGroups;
-(NSArray *)callGroupsOnDefaultPairedDevice;
-(NSArray *)currentVideoCalls;
-(NSArray *)currentCalls;

@end


@class NSArray, TUCall, NSString;

@interface TUCallContainer : NSObject <TUCallContainerPrivate, TUCallContainer> {

	NSArray* _calls;

}

@property (nonatomic,copy) NSArray * calls;                                                    //@synthesize calls=_calls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * currentCalls; 
@property (nonatomic,copy,readonly) NSArray * currentVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * incomingCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * conferenceParticipantCalls; 
@property (nonatomic,copy,readonly) NSArray * callsHostedElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsWithAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsHostedOrAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsOnDefaultPairedDevice; 
@property (nonatomic,readonly) TUCall * incomingCall; 
@property (nonatomic,readonly) TUCall * incomingVideoCall; 
@property (nonatomic,readonly) TUCall * activeVideoCall; 
@property (nonatomic,readonly) TUCall * currentVideoCall; 
@property (nonatomic,readonly) unsigned long long currentCallCount; 
@property (nonatomic,readonly) unsigned long long currentVideoCallCount; 
@property (nonatomic,readonly) unsigned long long currentAudioAndVideoCallCount; 
@property (nonatomic,readonly) unsigned long long callCountOnDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL hasCurrentCalls; 
@property (nonatomic,readonly) BOOL hasCurrentAudioCalls; 
@property (nonatomic,readonly) BOOL hasCurrentVideoCalls; 
@property (nonatomic,readonly) BOOL anyCallIsHostedOnCurrentDevice; 
@property (nonatomic,readonly) BOOL anyCallIsEndpointOnCurrentDevice; 
@property (nonatomic,copy,readonly) NSArray * currentCallGroups; 
@property (nonatomic,copy,readonly) NSArray * callGroupsOnDefaultPairedDevice; 
@property (nonatomic,copy,readonly) NSArray * _allCalls; 
@property (nonatomic,readonly) TUCall * displayedCall; 
@property (nonatomic,readonly) TUCall * conferenceCall; 
@property (nonatomic,readonly) TUCall * frontmostCall; 
@property (nonatomic,retain,readonly) TUCall * frontmostAudioOrVideoCall; 
@property (nonatomic,readonly) BOOL existingCallsHaveMultipleProviders; 
-(NSArray *)calls;
-(void)setCalls:(NSArray *)arg1 ;
-(id)initWithCalls:(id)arg1 ;
-(void)enumerateCallsWithOptions:(unsigned long long)arg1 invokingBlock:(/*^block*/id)arg2 forCallsPassingTest:(/*^block*/id)arg3 ;
-(void)enumerateCallsInvokingBlock:(/*^block*/id)arg1 forCallsPassingTest:(/*^block*/id)arg2 ;
-(id)callsPassingTest:(/*^block*/id)arg1 ;
-(TUCall *)conferenceCall;
-(id)callPassingTest:(/*^block*/id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)callPassingTest:(/*^block*/id)arg1 ;
-(TUCall *)incomingVideoCall;
-(TUCall *)activeVideoCall;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2 ;
-(unsigned long long)currentCallCount;
-(TUCall *)incomingCall;
-(id)callWithStatus:(int)arg1 ;
-(unsigned long long)currentAudioAndVideoCallCount;
-(id)audioOrVideoCallWithStatus:(int)arg1 ;
-(unsigned long long)countOfCallsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)anyCallPassesTest:(/*^block*/id)arg1 ;
-(BOOL)allCallsPassTest:(/*^block*/id)arg1 ;
-(NSArray *)currentAudioAndVideoCalls;
-(id)_callGroupsFromCalls:(id)arg1 ;
-(NSArray *)callsOnDefaultPairedDevice;
-(NSArray *)conferenceParticipantCalls;
-(id)callsWithStatus:(int)arg1 ;
-(id)audioAndVideoCallsWithStatus:(int)arg1 ;
-(id)callsWithGroupUUID:(id)arg1 ;
-(id)videoCallWithStatus:(int)arg1 ;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(id)callWithCallUUID:(id)arg1 ;
-(id)displayedCallFromCalls:(id)arg1 ;
-(BOOL)allCallsAreOfService:(int)arg1 ;
-(NSArray *)incomingCalls;
-(NSArray *)displayedCalls;
-(NSArray *)displayedAudioAndVideoCalls;
-(NSArray *)callsHostedElsewhere;
-(NSArray *)callsWithAnEndpointElsewhere;
-(NSArray *)callsHostedOrAnEndpointElsewhere;
-(TUCall *)currentVideoCall;
-(unsigned long long)currentVideoCallCount;
-(unsigned long long)callCountOnDefaultPairedDevice;
-(BOOL)hasCurrentCalls;
-(BOOL)hasCurrentAudioCalls;
-(BOOL)hasCurrentVideoCalls;
-(BOOL)anyCallIsHostedOnCurrentDevice;
-(BOOL)anyCallIsEndpointOnCurrentDevice;
-(NSArray *)currentCallGroups;
-(NSArray *)callGroupsOnDefaultPairedDevice;
-(NSArray *)_allCalls;
-(TUCall *)displayedCall;
-(TUCall *)frontmostCall;
-(TUCall *)frontmostAudioOrVideoCall;
-(BOOL)existingCallsHaveMultipleProviders;
-(NSArray *)currentVideoCalls;
-(id)init;
-(NSArray *)currentCalls;
@end

