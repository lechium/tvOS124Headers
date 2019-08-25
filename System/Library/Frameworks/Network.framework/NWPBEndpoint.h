/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWPBAddressEndpoint, NWPBHostEndpoint, NWPBInterface, NWPBServiceEndpoint, NSData;

@interface NWPBEndpoint : PBCodable <NSCopying> {

	NWPBAddressEndpoint* _address;
	NWPBHostEndpoint* _host;
	NWPBInterface* _interface;
	NWPBServiceEndpoint* _service;
	NSData* _txtRecord;

}

@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) NWPBAddressEndpoint * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasHost; 
@property (nonatomic,retain) NWPBHostEndpoint * host;                    //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NWPBServiceEndpoint * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL hasInterface; 
@property (nonatomic,retain) NWPBInterface * interface;                  //@synthesize interface=_interface - In the implementation block
@property (nonatomic,readonly) BOOL hasTxtRecord; 
@property (nonatomic,retain) NSData * txtRecord;                         //@synthesize txtRecord=_txtRecord - In the implementation block
-(BOOL)hasService;
-(BOOL)hasInterface;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAddress:(NWPBAddressEndpoint *)arg1 ;
-(BOOL)hasAddress;
-(NWPBAddressEndpoint *)address;
-(void)setHost:(NWPBHostEndpoint *)arg1 ;
-(NWPBServiceEndpoint *)service;
-(void)setService:(NWPBServiceEndpoint *)arg1 ;
-(BOOL)hasHost;
-(NSData *)txtRecord;
-(BOOL)hasTxtRecord;
-(void)setTxtRecord:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NWPBHostEndpoint *)host;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NWPBInterface *)interface;
-(void)setInterface:(NWPBInterface *)arg1 ;
@end

