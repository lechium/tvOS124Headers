/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_path;
@class NSObject, NSArray, NSString, NWInterface, NSUUID, NWParameters, NWEndpoint, NWBrowseDescriptor;

@interface NWPath : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_path> _internalPath;

}

@property (readonly) NSObject*<OS_nw_path> internalPath;                                                 //@synthesize internalPath=_internalPath - In the implementation block
@property (nonatomic,readonly) unsigned fallbackInterfaceIndex; 
@property (nonatomic,readonly) BOOL fallbackIsWeak; 
@property (nonatomic,readonly) BOOL fallbackEligible; 
@property (nonatomic,readonly) NSArray * dnsServersAsStrings; 
@property (nonatomic,readonly) NSArray * flows; 
@property (nonatomic,readonly) NSString * statusAsString; 
@property (nonatomic,readonly) NWInterface * connectedInterface; 
@property (getter=isListener,nonatomic,readonly) BOOL listener; 
@property (getter=isViable,nonatomic,readonly) BOOL viable; 
@property (nonatomic,readonly) NSUUID * clientID; 
@property (nonatomic,readonly) NWInterface * interface; 
@property (nonatomic,readonly) NWInterface * scopedInterface; 
@property (nonatomic,readonly) NWInterface * fallbackInterface; 
@property (getter=isFlowDivert,nonatomic,readonly) BOOL flowDivert; 
@property (nonatomic,readonly) unsigned flowDivertControlUnit; 
@property (getter=isFiltered,nonatomic,readonly) BOOL filtered; 
@property (nonatomic,readonly) unsigned filterControlUnit; 
@property (nonatomic,readonly) int dnsServiceID; 
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (getter=isDirect,nonatomic,readonly) BOOL direct; 
@property (nonatomic,readonly) unsigned policyID; 
@property (getter=isRoaming,nonatomic,readonly) BOOL roaming; 
@property (nonatomic,readonly) long long mtu; 
@property (nonatomic,readonly) long long maximumDatagramSize; 
@property (nonatomic,readonly) unsigned long long secondsSinceInterfaceChange; 
@property (nonatomic,readonly) long long reason; 
@property (nonatomic,readonly) NSString * reasonDescription; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) NWParameters * derivedParameters; 
@property (nonatomic,readonly) BOOL supportsIPv4; 
@property (nonatomic,readonly) BOOL supportsIPv6; 
@property (nonatomic,readonly) BOOL supportsDNS; 
@property (getter=isEligibleForCrazyIvan46,nonatomic,readonly) BOOL eligibleForCrazyIvan46; 
@property (nonatomic,readonly) NWEndpoint * endpoint; 
@property (nonatomic,readonly) NWParameters * parameters; 
@property (nonatomic,readonly) NWEndpoint * effectiveLocalEndpoint; 
@property (nonatomic,readonly) NWEndpoint * effectiveRemoteEndpoint; 
@property (nonatomic,readonly) NSArray * proxySettings; 
@property (nonatomic,readonly) NSArray * dnsServers; 
@property (nonatomic,readonly) NSArray * dnsSearchDomains; 
@property (nonatomic,readonly) BOOL hasBrowseDescriptor; 
@property (nonatomic,readonly) NWBrowseDescriptor * browseDescriptor; 
@property (nonatomic,readonly) long long status; 
@property (getter=isExpensive,nonatomic,readonly) BOOL expensive; 
+(id)pathForClientID:(id)arg1 ;
+(id)createStringFromStatus:(long long)arg1 ;
+(id)allClientIDs;
+(id)pathWithProtocolBufferData:(id)arg1 ;
-(BOOL)isDirect;
-(BOOL)fallbackEligible;
-(unsigned long long)secondsSinceInterfaceChange;
-(NSUUID *)clientID;
-(NSString *)reasonDescription;
-(NSArray *)proxySettings;
-(unsigned)flowDivertControlUnit;
-(BOOL)hasBrowseDescriptor;
-(NWBrowseDescriptor *)browseDescriptor;
-(unsigned)filterControlUnit;
-(NWInterface *)scopedInterface;
-(NSArray *)flows;
-(id)networkAgentsOfType:(Class)arg1 ;
-(BOOL)usesNetworkAgentType:(Class)arg1 ;
-(BOOL)isFiltered;
-(NSArray *)dnsSearchDomains;
-(long long)mtu;
-(NSString *)privateDescription;
-(NSArray *)dnsServers;
-(BOOL)supportsIPv4;
-(BOOL)supportsIPv6;
-(BOOL)usesInterfaceType:(long long)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(BOOL)isViable;
-(NSObject*<OS_nw_path>)internalPath;
-(id)createProtocolBufferObject;
-(NSString *)statusAsString;
-(BOOL)isEqualToPath:(id)arg1 ;
-(BOOL)isExpensive;
-(BOOL)isListener;
-(BOOL)shouldProbeConnectivity;
-(BOOL)isLinkQualityAbort;
-(BOOL)usesNetworkAgent:(id)arg1 ;
-(id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2 ;
-(id)inactiveNetworkAgentUUIDsOnlyVoluntary:(BOOL)arg1 ;
-(id)delegateInterface;
-(NWInterface *)fallbackInterface;
-(NSArray *)dnsServersAsStrings;
-(long long)maximumDatagramSize;
-(BOOL)isFlowDivert;
-(id)copyFlowDivertToken;
-(BOOL)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(BOOL*)arg2 ;
-(BOOL)hasUnsatisfiedFallbackAgent;
-(int)dnsServiceID;
-(unsigned)policyID;
-(BOOL)isRoaming;
-(NWEndpoint *)effectiveLocalEndpoint;
-(NWEndpoint *)effectiveRemoteEndpoint;
-(NWInterface *)connectedInterface;
-(NWParameters *)derivedParameters;
-(unsigned)fallbackInterfaceIndex;
-(BOOL)fallbackIsWeak;
-(BOOL)supportsDNS;
-(BOOL)isEligibleForCrazyIvan46;
-(id)init;
-(id)description;
-(long long)reason;
-(id)initWithPath:(id)arg1 ;
-(long long)status;
-(BOOL)isLocal;
-(NWParameters *)parameters;
-(NWInterface *)interface;
-(NWEndpoint *)endpoint;
@end

