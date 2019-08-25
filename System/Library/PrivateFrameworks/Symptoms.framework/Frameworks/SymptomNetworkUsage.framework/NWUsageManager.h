/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWUsageManagerDelegate, OS_dispatch_source, OS_dispatch_queue;
#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
@class NWUsageMonitor, NSObject, NSMutableDictionary, NSMutableSet;

@interface NWUsageManager : NSObject {

	int _interfaceTraceFd;
	unsigned _continuationCount;
	char* _iftracebuf;
	BOOL _configured;
	BOOL _invalidated;
	int _sockfd;
	id<NWUsageManagerDelegate> _delegate;
	NWUsageMonitor* _usageMonitor;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableDictionary* _currentQueries;
	NSMutableDictionary* __internalSources;
	NSMutableSet* _interfaceSources;
	unsigned long long _currentQueryAllReference;
	unsigned long long _querySequenceNumber;
	char* _readBuffer;

}

@property (retain) NSObject*<OS_dispatch_source> readSource;                          //@synthesize readSource=_readSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> internalQueue;                        //@synthesize internalQueue=_internalQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign) int sockfd;                                                        //@synthesize sockfd=_sockfd - In the implementation block
@property (retain) NSMutableDictionary * currentQueries;                              //@synthesize currentQueries=_currentQueries - In the implementation block
@property (retain) NSMutableDictionary * _internalSources;                            //@synthesize _internalSources=__internalSources - In the implementation block
@property (retain) NSMutableSet * interfaceSources;                                   //@synthesize interfaceSources=_interfaceSources - In the implementation block
@property (retain) NWUsageMonitor * usageMonitor;                                     //@synthesize usageMonitor=_usageMonitor - In the implementation block
@property (assign) unsigned long long currentQueryAllReference;                       //@synthesize currentQueryAllReference=_currentQueryAllReference - In the implementation block
@property (assign) unsigned long long querySequenceNumber;                            //@synthesize querySequenceNumber=_querySequenceNumber - In the implementation block
@property (assign) char* readBuffer;                                                  //@synthesize readBuffer=_readBuffer - In the implementation block
@property (assign) BOOL configured;                                                   //@synthesize configured=_configured - In the implementation block
@property (getter=isInvalidated) BOOL invalidated;                                    //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic,__weak) id<NWUsageManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)configured;
-(void)setConfigured:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)reconfigure:(id)arg1 ;
-(char*)readBuffer;
-(void)setReadBuffer:(char*)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)configure:(id)arg1 ;
-(void)traceMemoryBuf:(char*)arg1 length:(long long)arg2 tag:(char*)arg3 ;
-(int)sockfd;
-(BOOL)handleCompletion:(unsigned long long)arg1 message:(nstat_msg_hdr*)arg2 length:(unsigned)arg3 ;
-(NSMutableDictionary *)_internalSources;
-(void)sendRemoveSource:(unsigned long long)arg1 ;
-(BOOL)sendMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(void)handleCounts:(nstat_msg_src_counts*)arg1 ;
-(void)sendRequestMessage:(int)arg1 sourceRef:(unsigned long long)arg2 ;
-(void)removeSourceInternal:(unsigned long long)arg1 ;
-(void)noteInterfaceSrcRef:(unsigned long long)arg1 forInterface:(unsigned)arg2 threshold:(unsigned long long)arg3 ;
-(NWUsageMonitor *)usageMonitor;
-(void)handleUpdateForSource:(id)arg1 message:(nstat_msg_src_update_convenient*)arg2 ;
-(void)handleInitialUpdateForSource:(id)arg1 ;
-(BOOL)handleCompletionMessage:(nstat_msg_hdr*)arg1 length:(unsigned)arg2 ;
-(void)handleMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(void)handleRemoveForSource:(id)arg1 ;
-(NSMutableSet *)interfaceSources;
-(void)setThreshold:(unsigned long long)arg1 onInterface:(unsigned)arg2 ;
-(void)setCurrentQueryAllReference:(unsigned long long)arg1 ;
-(void)set_internalSources:(NSMutableDictionary *)arg1 ;
-(void)handleReadEvent;
-(void)_setInterfaceTraceFd:(int)arg1 ;
-(BOOL)addAllForProvider:(int)arg1 filter:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(BOOL)setThresholds:(id)arg1 ;
-(BOOL)initialConfigure:(id)arg1 ;
-(id)_stage2InitWithQueue:(id)arg1 ;
-(void)performQueryAll:(id)arg1 ;
-(void)_enumerateAllFlowsCheckingChange:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(id)stateDictionary;
-(void)refreshAllFlows;
-(void)refreshAllFlowsSync;
-(void)enumerateAllFlowsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChangedFlowsUsingBlock:(/*^block*/id)arg1 ;
-(void)setUsageMonitor:(NWUsageMonitor *)arg1 ;
-(void)setSockfd:(int)arg1 ;
-(NSMutableDictionary *)currentQueries;
-(void)setCurrentQueries:(NSMutableDictionary *)arg1 ;
-(void)setInterfaceSources:(NSMutableSet *)arg1 ;
-(unsigned long long)currentQueryAllReference;
-(unsigned long long)querySequenceNumber;
-(void)setQuerySequenceNumber:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)readSource;
-(void)setReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)trace:(char*)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<NWUsageManagerDelegate>)arg1 ;
-(id<NWUsageManagerDelegate>)delegate;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)isInvalidated;
-(void)setInvalidated:(BOOL)arg1 ;
@end

