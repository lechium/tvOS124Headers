/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DMFReportingRequirements;

@interface DMFConfigurationSource : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _displayName;
	NSString* _organizationIdentifier;
	NSString* _machServiceName;
	DMFReportingRequirements* _reportingRequirements;

}

@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;                               //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                      //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,retain) DMFReportingRequirements * reportingRequirements;              //@synthesize reportingRequirements=_reportingRequirements - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)machServiceName;
-(NSString *)organizationIdentifier;
-(DMFReportingRequirements *)reportingRequirements;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)setReportingRequirements:(DMFReportingRequirements *)arg1 ;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(id)init;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
@end

