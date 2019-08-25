/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMCoreOrganizationSettings.h>

@class RMiCloudOrganization, NSString;

@interface RMiCloudOrganizationSettings : RMCoreOrganizationSettings

@property (nonatomic,retain) RMiCloudOrganization * organization; 
@property (nonatomic,copy) NSString * passcode; 
-(void)setPasscode:(NSString *)arg1 ;
-(id)computeUniqueIdentifier;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

