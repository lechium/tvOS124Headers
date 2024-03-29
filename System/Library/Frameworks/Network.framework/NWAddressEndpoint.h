/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <Network/NWHostEndpoint.h>

@class NSString, NSData;

@interface NWAddressEndpoint : NWHostEndpoint

@property (nonatomic,readonly) NSString * addressString; 
@property (nonatomic,readonly) NSString * addressStringNoPort; 
@property (nonatomic,readonly) NSData * addressData; 
@property (nonatomic,readonly) const sockaddr* address; 
@property (nonatomic,readonly) unsigned long long addressFamily; 
+(id)endpointWithHostname:(id)arg1 port:(id)arg2 ;
+(id)endpointWithAddress:(const sockaddr*)arg1 ;
+(unsigned)endpointType;
-(const sockaddr*)address;
-(NSString *)addressString;
-(NSData *)addressData;
-(unsigned long long)addressFamily;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)addressStringNoPort;
@end

