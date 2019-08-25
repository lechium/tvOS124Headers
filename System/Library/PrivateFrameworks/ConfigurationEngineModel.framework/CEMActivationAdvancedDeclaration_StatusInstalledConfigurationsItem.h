/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMActivationAdvancedDeclaration_StatusInstalledConfigurationsItem : CEMPayloadBase {

	NSString* _statusIdentifier;
	NSString* _statusServerHash;

}

@property (nonatomic,copy) NSString * statusIdentifier;              //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusServerHash;              //@synthesize statusServerHash=_statusServerHash - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 withServerHash:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withServerHash:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(void)setStatusServerHash:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(NSString *)statusServerHash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

