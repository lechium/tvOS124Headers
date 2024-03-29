/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/TestProbe.h>

@protocol BonjourProbeDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface BonjourProbe : TestProbe {

	BonjourBrowserRef bonjourManagerRef;
	BOOL _includeAWDL;
	id<BonjourProbeDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _scanQueue;
	NSMutableDictionary* _currentlyDiscoveredServices;
	NSMutableDictionary* _allDiscoveredServices;
	NSMutableDictionary* _resolvers;
	NSObject*<OS_dispatch_source> _bonjourBrowserTimer;
	double _bonjourBrowserTimerDuration;
	DNSServiceRef_tRef _dnsRef;

}

@property (nonatomic,retain) NSMutableDictionary * resolvers;                                //@synthesize resolvers=_resolvers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> bonjourBrowserTimer;              //@synthesize bonjourBrowserTimer=_bonjourBrowserTimer - In the implementation block
@property (assign,nonatomic) double bonjourBrowserTimerDuration;                             //@synthesize bonjourBrowserTimerDuration=_bonjourBrowserTimerDuration - In the implementation block
@property (assign,nonatomic) DNSServiceRef_tRef dnsRef;                                      //@synthesize dnsRef=_dnsRef - In the implementation block
@property (retain) id<BonjourProbeDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> scanQueue;                         //@synthesize scanQueue=_scanQueue - In the implementation block
@property (assign) BOOL includeAWDL;                                                         //@synthesize includeAWDL=_includeAWDL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentlyDiscoveredServices;              //@synthesize currentlyDiscoveredServices=_currentlyDiscoveredServices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allDiscoveredServices;                    //@synthesize allDiscoveredServices=_allDiscoveredServices - In the implementation block
-(void)stopTest;
-(void)cancelTest:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)allDiscoveredServices;
-(BOOL)loadBonjourSymbols;
-(NSObject*<OS_dispatch_queue>)scanQueue;
-(void)setBonjourBrowserTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)bonjourBrowserTimer;
-(void)stopAllResolvers;
-(NSMutableDictionary *)resolvers;
-(NSMutableDictionary *)currentlyDiscoveredServices;
-(void)startBonjourScanForService:(id)arg1 onInterfaceNamed:(id)arg2 ;
-(void)dnsResolver:(id)arg1 encounteredDNSError:(int)arg2 ;
-(void)setScanQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)includeAWDL;
-(void)setIncludeAWDL:(BOOL)arg1 ;
-(void)setCurrentlyDiscoveredServices:(NSMutableDictionary *)arg1 ;
-(void)setAllDiscoveredServices:(NSMutableDictionary *)arg1 ;
-(void)setResolvers:(NSMutableDictionary *)arg1 ;
-(double)bonjourBrowserTimerDuration;
-(void)setBonjourBrowserTimerDuration:(double)arg1 ;
-(DNSServiceRef_tRef)dnsRef;
-(void)setDnsRef:(DNSServiceRef_tRef)arg1 ;
-(void)setDelegate:(id<BonjourProbeDelegate>)arg1 ;
-(id<BonjourProbeDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
@end

