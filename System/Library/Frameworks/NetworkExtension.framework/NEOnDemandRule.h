/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSURL;

@interface NEOnDemandRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	long long _action;
	NSArray* _DNSSearchDomainMatch;
	NSArray* _DNSServerAddressMatch;
	long long _interfaceTypeMatch;
	NSArray* _SSIDMatch;
	NSURL* _probeURL;

}

@property (readonly) long long action;                             //@synthesize action=_action - In the implementation block
@property (copy) NSArray * DNSSearchDomainMatch;                   //@synthesize DNSSearchDomainMatch=_DNSSearchDomainMatch - In the implementation block
@property (copy) NSArray * DNSServerAddressMatch;                  //@synthesize DNSServerAddressMatch=_DNSServerAddressMatch - In the implementation block
@property (assign) long long interfaceTypeMatch;                   //@synthesize interfaceTypeMatch=_interfaceTypeMatch - In the implementation block
@property (setter=SIDMatch,copy) NSArray * SSIDMatch;              //@synthesize SSIDMatch=_SSIDMatch - In the implementation block
@property (copy) NSURL * probeURL;                                 //@synthesize probeURL=_probeURL - In the implementation block
+(id)createOnDemandRulesFromLegacyDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSArray *)DNSSearchDomainMatch;
-(NSArray *)DNSServerAddressMatch;
-(long long)interfaceTypeMatch;
-(NSArray *)SSIDMatch;
-(NSURL *)probeURL;
-(void)setDNSSearchDomainMatch:(NSArray *)arg1 ;
-(void)setDNSServerAddressMatch:(NSArray *)arg1 ;
-(void)setInterfaceTypeMatch:(long long)arg1 ;
-(void)setSSIDMatch:(NSArray *)arg1 ;
-(void)setProbeURL:(NSURL *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)action;
-(id)initWithAction:(long long)arg1 ;
@end

