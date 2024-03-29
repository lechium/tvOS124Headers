/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSKernelClock.h>

@class NSArray;

@interface TSgPTPClock : TSKernelClock {

	NSArray* _gptpPath;
	unsigned long long _grandmasterIdentity;

}

@property (nonatomic,copy) NSArray * gptpPath;                                    //@synthesize gptpPath=_gptpPath - In the implementation block
@property (assign,nonatomic) unsigned long long grandmasterIdentity;              //@synthesize grandmasterIdentity=_grandmasterIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ports; 
@property (nonatomic,readonly) unsigned long long clockIdentity; 
@property (assign,nonatomic) unsigned char clockPriority1; 
@property (assign,nonatomic) unsigned char clockPriority2; 
@property (assign,nonatomic) unsigned char clockClass; 
@property (assign,nonatomic) unsigned char clockAccuracy; 
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)clockNameForClockIdentifier:(unsigned long long)arg1 ;
+(id)iokitInterfaceMatchingDictionaryForInterfaceName:(id)arg1 ;
+(id)diagnosticInfoForService:(unsigned)arg1 ;
+(id)availablegPTPClockIdentifiers;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 ;
+(unsigned long long)clockIdentifierForInterfaceName:(id)arg1 ;
-(NSArray *)ports;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(id)clockName;
-(id)_gptpPath;
-(unsigned long long)_grandmasterIdentity;
-(unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned)arg1 ;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3 ;
-(void)_handleInterestNotification:(unsigned)arg1 withArgument:(void*)arg2 ;
-(unsigned long long)grandmasterIdentity;
-(void)setGrandmasterIdentity:(unsigned long long)arg1 ;
-(NSArray *)gptpPath;
-(void)setGptpPath:(NSArray *)arg1 ;
-(void)_handleNotification:(unsigned)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3 ;
-(BOOL)addLinkLayerPortOnInterfaceNamed:(id)arg1 allocatedPortNumber:(unsigned short*)arg2 error:(id*)arg3 ;
-(BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned)arg1 withFlags:(unsigned*)arg2 ;
-(BOOL)convertFrom32BitASTime:(unsigned*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(id)gPTPTimeFromMachAbsoluteTime:(unsigned long long)arg1 ;
-(unsigned long long)machAbsoluteFromgPTPTime:(id)arg1 ;
-(SCD_Struct_TS0)convertFromMachAbsoluteTo128BitgPTPTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3 ;
-(unsigned long long)convertFrom128BitgPTPTimeToMachAbsoluteTime:(SCD_Struct_TS0)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3 ;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 ;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3 ;
-(BOOL)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 forGrandmasterIdentity:(unsigned long long*)arg5 portNumber:(unsigned short*)arg6 withError:(id*)arg7 ;
-(unsigned long long)clockIdentity;
-(void)setClockPriority1:(unsigned char)arg1 ;
-(unsigned char)clockPriority1;
-(void)setClockPriority2:(unsigned char)arg1 ;
-(unsigned char)clockPriority2;
-(void)setClockClass:(unsigned char)arg1 ;
-(unsigned char)clockClass;
-(void)setClockAccuracy:(unsigned char)arg1 ;
-(unsigned char)clockAccuracy;
-(BOOL)addLinkLayerPortOnInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeLinkLayerPortFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)addReverseSyncOnInterfaceNamed:(id)arg1 withDomainNumner:(unsigned char)arg2 syncInterval:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)removeReverseSyncFromInterfaceNamed:(id)arg1 withDomainNumner:(unsigned char)arg2 error:(id*)arg3 ;
-(id)portWithPortNumber:(unsigned short)arg1 ;
-(void)dealloc;
@end

