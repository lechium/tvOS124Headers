/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCConnectionProtocol.h>

@class NSUUID, NSString;

@interface VCConnectionLegacy : NSObject <VCConnectionProtocol> {

	unsigned _type;
	int _priority;
	BOOL _waitToBeNominated;
	tagCONNRESULT* _connectionResult;

}

@property (readonly) tagCONNRESULT* connectionResult;                   //@synthesize connectionResult=_connectionResult - In the implementation block
@property (assign) BOOL waitToBeNominated;                              //@synthesize waitToBeNominated=_waitToBeNominated - In the implementation block
@property (readonly) unsigned short relayChannelNumber; 
@property (readonly) BOOL isUpgraded; 
@property (readonly) BOOL isReplaceOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isLocalOnWiFi; 
@property (readonly) BOOL isRemoteOnWiFi; 
@property (readonly) BOOL isLocalOnCellular; 
@property (readonly) BOOL isRemoteOnCellular; 
@property (readonly) BOOL isIPv6; 
@property (assign) int connectionMTU; 
@property (readonly) int connectionId; 
@property (readonly) BOOL isRelay; 
@property (readonly) BOOL isVPN; 
@property (readonly) BOOL serverIsDegraded; 
@property (readonly) NSUUID * connectionUUID; 
@property (readonly) int localConnectionType; 
@property (readonly) int remoteConnectionType; 
@property (assign) int localCellTech; 
@property (assign) int remoteCellTech; 
@property (assign) int priority;                                        //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned type;                                     //@synthesize type=_type - In the implementation block
@property (readonly) NSString * localInterfaceTypeString; 
@property (readonly) NSString * remoteInterfaceTypeString; 
@property (assign) unsigned uplinkBitrateCap; 
@property (assign) unsigned downlinkBitrateCap; 
-(NSUUID *)connectionUUID;
-(int)localCellTech;
-(int)remoteCellTech;
-(id)initWithConnectionResult:(tagCONNRESULT*)arg1 type:(unsigned)arg2 ;
-(tagCONNRESULT*)connectionResult;
-(BOOL)waitToBeNominated;
-(BOOL)isLocalOnWiFi;
-(BOOL)isRemoteOnWiFi;
-(BOOL)isRelay;
-(id)ipportToString:(tagIPPORT*)arg1 ;
-(unsigned short)relayChannelNumber;
-(BOOL)isLocalOnCellular;
-(BOOL)isRemoteOnCellular;
-(BOOL)isRemoteIPPort:(tagIPPORT*)arg1 ;
-(BOOL)isSameAsConnection:(id)arg1 ;
-(BOOL)isOnSameInterfacesWithConnection:(id)arg1 ;
-(void)getSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(BOOL)matchesSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(int)connectionMTU;
-(void)setConnectionMTU:(int)arg1 ;
-(int)connectionId;
-(BOOL)isVPN;
-(BOOL)serverIsDegraded;
-(int)localConnectionType;
-(int)remoteConnectionType;
-(void)setLocalCellTech:(int)arg1 ;
-(void)setRemoteCellTech:(int)arg1 ;
-(NSString *)localInterfaceTypeString;
-(NSString *)remoteInterfaceTypeString;
-(unsigned)uplinkBitrateCap;
-(void)setUplinkBitrateCap:(unsigned)arg1 ;
-(unsigned)downlinkBitrateCap;
-(void)setDownlinkBitrateCap:(unsigned)arg1 ;
-(id)initWithCandidatePair:(tagCANDIDATEPAIR*)arg1 ;
-(BOOL)isLocalIPPort:(tagIPPORT*)arg1 ;
-(BOOL)isOnSameIPPortWithConnection:(id)arg1 ;
-(BOOL)isUpgraded;
-(BOOL)isReplaceOnly;
-(int)cellularMTU;
-(void)setWaitToBeNominated:(BOOL)arg1 ;
-(BOOL)isIPv6;
-(void)dealloc;
-(NSString *)description;
-(id)copy;
-(void)setPriority:(int)arg1 ;
-(unsigned)type;
-(int)priority;
@end

