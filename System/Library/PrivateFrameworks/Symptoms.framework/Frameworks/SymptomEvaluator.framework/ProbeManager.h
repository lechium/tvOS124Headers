/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BonjourProbeDelegate.h>
#import <libobjc.A.dylib/ICMPPingProbeDelegate.h>
#import <libobjc.A.dylib/AWDLPeerProbeDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyDumpProbeDelegate.h>

@protocol ProbeManagerDelegate, OS_dispatch_queue;
@class NSMutableDictionary, CoreTelephonyDumpProbe, NSObject, NSString;

@interface ProbeManager : NSObject <BonjourProbeDelegate, ICMPPingProbeDelegate, AWDLPeerProbeDelegate, CoreTelephonyDumpProbeDelegate> {

	unsigned long long probeSequenceNumber;
	BOOL _isInternalBuild;
	BOOL _isCarrierSeedBuild;
	id<ProbeManagerDelegate> _delegate;
	NSMutableDictionary* _probes;
	id _probeDetails;
	CoreTelephonyDumpProbe* _ctDumpProbe;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id probeDetails;                                   //@synthesize probeDetails=_probeDetails - In the implementation block
@property (nonatomic,retain) CoreTelephonyDumpProbe * ctDumpProbe;              //@synthesize ctDumpProbe=_ctDumpProbe - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<ProbeManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * probes;                    //@synthesize probes=_probes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)finalizeCoreTelephonyDumps;
-(void)initializeCoreTelephonyDumps;
-(void)cancelAllProbes;
-(id)probeCallbackFunctions;
-(void)coreTelephonyDumpProbeCompleted:(id)arg1 success:(BOOL)arg2 ;
-(void)awdlPeerPollProbe:(id)arg1 serviceAdded:(id)arg2 ;
-(void)awdlPeerPollProbe:(id)arg1 serviceUpdated:(id)arg2 ;
-(void)awdlPeerPollProbe:(id)arg1 serviceRemoved:(id)arg2 ;
-(void)awdlPeerPollProbeIsComplete:(id)arg1 ;
-(void)icmpPingProbe:(id)arg1 completedIterations:(unsigned long long)arg2 successfulCount:(unsigned long long)arg3 withError:(id)arg4 ;
-(void)icmpPingProbe:(id)arg1 echoRequestSent:(id)arg2 success:(BOOL)arg3 ;
-(void)icmpPingProbe:(id)arg1 echoResponseReceived:(id)arg2 success:(BOOL)arg3 ;
-(NSMutableDictionary *)probes;
-(CoreTelephonyDumpProbe *)ctDumpProbe;
-(void)setCtDumpProbe:(CoreTelephonyDumpProbe *)arg1 ;
-(void)bonjourServiceAdded:(id)arg1 isUpdatedService:(BOOL)arg2 ;
-(void)bonjourServiceRemoved:(id)arg1 ;
-(void)bonjourProbeComplete:(id)arg1 status:(unsigned)arg2 ;
-(void)startTestTCPConnectionForDiagSession:(id)arg1 url:(id)arg2 host:(id)arg3 port:(id)arg4 interfaceName:(id)arg5 timeout:(id)arg6 ;
-(void)startTestHTTPForDiagSession:(id)arg1 url:(id)arg2 timeout:(id)arg3 interfaceName:(id)arg4 userAgent:(id)arg5 ;
-(void)startTCPDumpForDiagSession:(id)arg1 duration:(id)arg2 ;
-(void)stopTCPDump;
-(void)startGetNetworkInfo:(id)arg1 ;
-(void)startAirDropBonjourScan:(id)arg1 duration:(id)arg2 ;
-(void)startICMPPingForDiagSession:(id)arg1 hostName:(id)arg2 ipAddress:(id)arg3 interface:(id)arg4 pingCount:(id)arg5 interPingInterval:(id)arg6 burstCount:(id)arg7 interBurstInterval:(id)arg8 timeout:(id)arg9 ;
-(void)startAWDLPeerPollingWithDiagSession:(id)arg1 services:(id)arg2 count:(id)arg3 interval:(id)arg4 ;
-(void)startCoreTelephonyDumpProbeForDiagSession:(id)arg1 previousDumpTimestamp:(id)arg2 previousDumpFolderPath:(id)arg3 previousDumpFolderPrefix:(id)arg4 timeout:(id)arg5 startNewDump:(id)arg6 maximumSingleFileSize:(id)arg7 dumpReason:(id)arg8 ;
-(void)fetchCoreTelephonyLoggingEnabledStatus;
-(id)probeDetails;
-(void)setProbeDetails:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ProbeManagerDelegate>)arg1 ;
-(id<ProbeManagerDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

