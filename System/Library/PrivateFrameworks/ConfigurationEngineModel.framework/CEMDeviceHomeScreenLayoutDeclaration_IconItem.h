/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface CEMDeviceHomeScreenLayoutDeclaration_IconItem : CEMPayloadBase {

	NSString* _payloadType;
	NSString* _payloadDisplayName;
	NSString* _payloadBundleID;
	NSArray* _payloadPages;
	NSString* _payloadURL;

}

@property (nonatomic,copy) NSString * payloadType;                     //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,copy) NSString * payloadDisplayName;              //@synthesize payloadDisplayName=_payloadDisplayName - In the implementation block
@property (nonatomic,copy) NSString * payloadBundleID;                 //@synthesize payloadBundleID=_payloadBundleID - In the implementation block
@property (nonatomic,copy) NSArray * payloadPages;                     //@synthesize payloadPages=_payloadPages - In the implementation block
@property (nonatomic,copy) NSString * payloadURL;                      //@synthesize payloadURL=_payloadURL - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithType:(id)arg1 ;
+(id)buildWithType:(id)arg1 withDisplayName:(id)arg2 withBundleID:(id)arg3 withPages:(id)arg4 withURL:(id)arg5 ;
-(void)setPayloadType:(NSString *)arg1 ;
-(NSString *)payloadType;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadURL:(NSString *)arg1 ;
-(NSString *)payloadURL;
-(void)setPayloadPages:(NSArray *)arg1 ;
-(NSArray *)payloadPages;
-(void)setPayloadDisplayName:(NSString *)arg1 ;
-(void)setPayloadBundleID:(NSString *)arg1 ;
-(NSString *)payloadDisplayName;
-(NSString *)payloadBundleID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

