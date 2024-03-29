/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestinationProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (getter=isGuest,nonatomic,readonly) BOOL guest; 
@property (getter=isDevice,nonatomic,readonly) BOOL device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)destinationWithDevice:(id)arg1 ;
+(id)destinationWithRapportPublicIdentifier:(id)arg1 ;
+(id)destinationWithStrings:(id)arg1 ;
+(id)destinationWithAlias:(id)arg1 pushToken:(id)arg2 ;
+(id)destinationWithString:(id)arg1 ;
+(id)destinationWithGroup:(id)arg1 ;
+(id)defaultPairedDeviceDestination;
+(id)sentinelSelfAliasDestination;
+(id)destinationWithRapportPublicIdentifierURI:(id)arg1 ;
+(id)destinationWithDestinations:(id)arg1 ;
+(id)destinationWithDeviceURI:(id)arg1 ;
+(id)destinationWithURI:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)destinationURIs;
-(BOOL)isEqualToDestination:(id)arg1 ;
-(BOOL)isDevice;
-(BOOL)isGuest;
-(id)groupID;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
@end

