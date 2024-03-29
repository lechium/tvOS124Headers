/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSDictionary, NSArray;

@interface FudPersonalizationRequest : NSObject {

	BOOL _cproSet;
	BOOL _csecSet;
	BOOL _globalSigning;
	BOOL _productionMode;
	BOOL _securityMode;
	BOOL _enableMixMatch;
	unsigned short _responseAlignment;
	int _responseFormat;
	unsigned _boardID;
	unsigned _chipID;
	unsigned _securityDomain;
	unsigned _chipEpoch;
	NSString* _requestName;
	NSString* _requestPrefix;
	unsigned long long _ecID;
	NSData* _nonceHash;
	NSDictionary* _customManifestProperties;
	NSArray* _objectList;
	NSData* _payload;

}

@property (nonatomic,copy,readonly) NSString * requestName;                        //@synthesize requestName=_requestName - In the implementation block
@property (nonatomic,retain) NSString * requestPrefix;                             //@synthesize requestPrefix=_requestPrefix - In the implementation block
@property (assign,nonatomic) int responseFormat;                                   //@synthesize responseFormat=_responseFormat - In the implementation block
@property (assign,nonatomic) unsigned boardID;                                     //@synthesize boardID=_boardID - In the implementation block
@property (assign,nonatomic) unsigned chipID;                                      //@synthesize chipID=_chipID - In the implementation block
@property (assign,nonatomic) unsigned long long ecID;                              //@synthesize ecID=_ecID - In the implementation block
@property (assign,nonatomic) BOOL globalSigning;                                   //@synthesize globalSigning=_globalSigning - In the implementation block
@property (assign,nonatomic) unsigned securityDomain;                              //@synthesize securityDomain=_securityDomain - In the implementation block
@property (assign,nonatomic) BOOL productionMode;                                  //@synthesize productionMode=_productionMode - In the implementation block
@property (assign,nonatomic) BOOL securityMode;                                    //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,retain) NSData * nonceHash;                                   //@synthesize nonceHash=_nonceHash - In the implementation block
@property (assign,nonatomic) unsigned chipEpoch;                                   //@synthesize chipEpoch=_chipEpoch - In the implementation block
@property (nonatomic,retain) NSDictionary * customManifestProperties;              //@synthesize customManifestProperties=_customManifestProperties - In the implementation block
@property (assign,nonatomic) BOOL enableMixMatch;                                  //@synthesize enableMixMatch=_enableMixMatch - In the implementation block
@property (nonatomic,retain) NSArray * objectList;                                 //@synthesize objectList=_objectList - In the implementation block
@property (nonatomic,retain) NSData * payload;                                     //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned short responseAlignment;                     //@synthesize responseAlignment=_responseAlignment - In the implementation block
-(NSString *)requestName;
-(unsigned)chipID;
-(void)setChipID:(unsigned)arg1 ;
-(BOOL)securityMode;
-(void)setSecurityMode:(BOOL)arg1 ;
-(void)setResponseFormat:(int)arg1 ;
-(int)responseFormat;
-(void)setResponseAlignment:(unsigned short)arg1 ;
-(void)setBoardID:(unsigned)arg1 ;
-(void)setEcID:(unsigned long long)arg1 ;
-(void)setGlobalSigning:(BOOL)arg1 ;
-(void)setSecurityDomain:(unsigned)arg1 ;
-(void)setProductionMode:(BOOL)arg1 ;
-(void)setNonceHash:(NSData *)arg1 ;
-(void)setChipEpoch:(unsigned)arg1 ;
-(void)setEnableMixMatch:(BOOL)arg1 ;
-(void)setRequestPrefix:(NSString *)arg1 ;
-(NSString *)requestPrefix;
-(BOOL)productionMode;
-(BOOL)isSecurityModeSet;
-(void)setObjectList:(NSArray *)arg1 ;
-(BOOL)isProductionModeSet;
-(unsigned)boardID;
-(unsigned long long)ecID;
-(BOOL)globalSigning;
-(unsigned)securityDomain;
-(NSData *)nonceHash;
-(unsigned)chipEpoch;
-(NSDictionary *)customManifestProperties;
-(void)setCustomManifestProperties:(NSDictionary *)arg1 ;
-(BOOL)enableMixMatch;
-(NSArray *)objectList;
-(unsigned short)responseAlignment;
-(void)dealloc;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(id)initWithName:(id)arg1 ;
@end

