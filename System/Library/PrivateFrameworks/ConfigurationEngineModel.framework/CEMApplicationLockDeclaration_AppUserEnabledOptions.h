/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMApplicationLockDeclaration_AppUserEnabledOptions : CEMPayloadBase {

	NSNumber* _payloadVoiceOver;
	NSNumber* _payloadZoom;
	NSNumber* _payloadInvertColors;
	NSNumber* _payloadAssistiveTouch;

}

@property (nonatomic,copy) NSNumber * payloadVoiceOver;                   //@synthesize payloadVoiceOver=_payloadVoiceOver - In the implementation block
@property (nonatomic,copy) NSNumber * payloadZoom;                        //@synthesize payloadZoom=_payloadZoom - In the implementation block
@property (nonatomic,copy) NSNumber * payloadInvertColors;                //@synthesize payloadInvertColors=_payloadInvertColors - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAssistiveTouch;              //@synthesize payloadAssistiveTouch=_payloadAssistiveTouch - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithVoiceOver:(id)arg1 withZoom:(id)arg2 withInvertColors:(id)arg3 withAssistiveTouch:(id)arg4 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadVoiceOver:(NSNumber *)arg1 ;
-(void)setPayloadZoom:(NSNumber *)arg1 ;
-(void)setPayloadInvertColors:(NSNumber *)arg1 ;
-(void)setPayloadAssistiveTouch:(NSNumber *)arg1 ;
-(NSNumber *)payloadVoiceOver;
-(NSNumber *)payloadZoom;
-(NSNumber *)payloadInvertColors;
-(NSNumber *)payloadAssistiveTouch;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

