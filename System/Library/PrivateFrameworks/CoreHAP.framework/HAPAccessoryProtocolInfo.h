/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, HMFVersion, NSData;

@interface HAPAccessoryProtocolInfo : HMFObject {

	unsigned char _featureFlags;
	unsigned char _statusFlags;
	unsigned short _categoryIdentifier;
	NSString* _deviceIdentifer;
	NSNumber* _currentStateNumber;
	NSNumber* _currentConfigNumber;
	NSString* _modelName;
	HMFVersion* _protocolVersion;
	NSData* _setupHash;

}

@property (nonatomic,readonly) NSString * deviceIdentifer;                     //@synthesize deviceIdentifer=_deviceIdentifer - In the implementation block
@property (nonatomic,readonly) NSNumber * currentStateNumber;                  //@synthesize currentStateNumber=_currentStateNumber - In the implementation block
@property (nonatomic,readonly) NSNumber * currentConfigNumber;                 //@synthesize currentConfigNumber=_currentConfigNumber - In the implementation block
@property (nonatomic,readonly) NSString * modelName;                           //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) HMFVersion * protocolVersion;                   //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) unsigned char featureFlags;                     //@synthesize featureFlags=_featureFlags - In the implementation block
@property (nonatomic,readonly) unsigned char statusFlags;                      //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,readonly) unsigned short categoryIdentifier;              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * setupHash;                             //@synthesize setupHash=_setupHash - In the implementation block
-(HMFVersion *)protocolVersion;
-(unsigned char)statusFlags;
-(NSString *)deviceIdentifer;
-(unsigned char)featureFlags;
-(id)initWithIdentifier:(id)arg1 currentStateNumber:(id)arg2 currentConfigNumber:(id)arg3 modelName:(id)arg4 protocolVersion:(id)arg5 authMethods:(unsigned char)arg6 statusFlags:(unsigned char)arg7 categoryIdentifier:(unsigned short)arg8 setupHash:(id)arg9 ;
-(NSNumber *)currentStateNumber;
-(NSNumber *)currentConfigNumber;
-(NSData *)setupHash;
-(NSString *)modelName;
-(unsigned short)categoryIdentifier;
@end

