/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Rapport/RPEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSDictionary;

@interface RPCompanionLinkDevice : RPEndpoint <NSSecureCoding> {

	BOOL _personal;
	BOOL _changed;
	BOOL _daemon;
	BOOL _uiTriggered;
	unsigned _flags;
	int _mediaSystemRole;
	int _mediaSystemState;
	int _personalDeviceState;
	int _personalRequestsState;
	int _mediaSystemRoleEffective;
	int _serversChangedState;
	NSString* _deviceColor;
	NSUUID* _homeKitIdentifier;
	NSString* _idsPersonalDeviceIdentifier;
	NSUUID* _mediaSystemIdentifier;
	NSString* _mediaSystemName;
	NSString* _publicIdentifier;
	NSString* _roomName;
	NSDictionary* _siriInfo;
	NSString* _role;
	NSUUID* _mediaSystemIdentifierEffective;
	NSUUID* _pairingIdentifier;
	NSString* _password;

}

@property (assign,nonatomic) BOOL changed;                                       //@synthesize changed=_changed - In the implementation block
@property (assign,nonatomic) BOOL daemon;                                        //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,copy) NSString * deviceColor;                               //@synthesize deviceColor=_deviceColor - In the implementation block
@property (assign,nonatomic) unsigned flags;                                     //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSUUID * homeKitIdentifier;                           //@synthesize homeKitIdentifier=_homeKitIdentifier - In the implementation block
@property (nonatomic,copy) NSString * idsPersonalDeviceIdentifier;               //@synthesize idsPersonalDeviceIdentifier=_idsPersonalDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * mediaSystemIdentifier;                       //@synthesize mediaSystemIdentifier=_mediaSystemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaSystemName;                           //@synthesize mediaSystemName=_mediaSystemName - In the implementation block
@property (nonatomic,copy) NSUUID * mediaSystemIdentifierEffective;              //@synthesize mediaSystemIdentifierEffective=_mediaSystemIdentifierEffective - In the implementation block
@property (assign,nonatomic) int mediaSystemRole;                                //@synthesize mediaSystemRole=_mediaSystemRole - In the implementation block
@property (assign,nonatomic) int mediaSystemRoleEffective;                       //@synthesize mediaSystemRoleEffective=_mediaSystemRoleEffective - In the implementation block
@property (assign,nonatomic) int mediaSystemState;                               //@synthesize mediaSystemState=_mediaSystemState - In the implementation block
@property (nonatomic,copy) NSUUID * pairingIdentifier;                           //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,copy) NSString * password;                                  //@synthesize password=_password - In the implementation block
@property (assign,getter=isPersonal,nonatomic) BOOL personal;                    //@synthesize personal=_personal - In the implementation block
@property (assign,nonatomic) int personalDeviceState;                            //@synthesize personalDeviceState=_personalDeviceState - In the implementation block
@property (assign,nonatomic) int personalRequestsState;                          //@synthesize personalRequestsState=_personalRequestsState - In the implementation block
@property (nonatomic,copy) NSString * publicIdentifier;                          //@synthesize publicIdentifier=_publicIdentifier - In the implementation block
@property (nonatomic,copy) NSString * role;                                      //@synthesize role=_role - In the implementation block
@property (nonatomic,copy) NSString * roomName;                                  //@synthesize roomName=_roomName - In the implementation block
@property (assign,nonatomic) int serversChangedState;                            //@synthesize serversChangedState=_serversChangedState - In the implementation block
@property (nonatomic,copy) NSDictionary * siriInfo;                              //@synthesize siriInfo=_siriInfo - In the implementation block
@property (assign,nonatomic) BOOL uiTriggered;                                   //@synthesize uiTriggered=_uiTriggered - In the implementation block
@property (nonatomic,copy,readonly) NSString * effectiveIdentifier; 
+(BOOL)supportsSecureCoding;
-(unsigned)flags;
-(void)setDaemon:(BOOL)arg1 ;
-(BOOL)daemon;
-(id)descriptionWithLevel:(int)arg1 ;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(void)setChanged:(BOOL)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setPairingIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)pairingIdentifier;
-(void)setFlags:(unsigned)arg1 ;
-(int)mediaSystemState;
-(NSUUID *)homeKitIdentifier;
-(NSString *)publicIdentifier;
-(BOOL)isPersonal;
-(void)setSiriInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)siriInfo;
-(unsigned)updateWithSFDevice:(id)arg1 ;
-(NSString *)effectiveIdentifier;
-(void)setHomeKitIdentifier:(NSUUID *)arg1 ;
-(NSString *)idsPersonalDeviceIdentifier;
-(void)setIdsPersonalDeviceIdentifier:(NSString *)arg1 ;
-(NSUUID *)mediaSystemIdentifier;
-(void)setMediaSystemIdentifier:(NSUUID *)arg1 ;
-(NSString *)mediaSystemName;
-(void)setMediaSystemName:(NSString *)arg1 ;
-(int)mediaSystemRole;
-(void)setMediaSystemRole:(int)arg1 ;
-(void)setMediaSystemState:(int)arg1 ;
-(void)setPersonal:(BOOL)arg1 ;
-(int)personalDeviceState;
-(void)setPersonalDeviceState:(int)arg1 ;
-(int)personalRequestsState;
-(void)setPersonalRequestsState:(int)arg1 ;
-(void)setPublicIdentifier:(NSString *)arg1 ;
-(NSUUID *)mediaSystemIdentifierEffective;
-(void)setMediaSystemIdentifierEffective:(NSUUID *)arg1 ;
-(int)mediaSystemRoleEffective;
-(void)setMediaSystemRoleEffective:(int)arg1 ;
-(int)serversChangedState;
-(void)setServersChangedState:(int)arg1 ;
-(BOOL)uiTriggered;
-(void)setUiTriggered:(BOOL)arg1 ;
-(void)setRole:(NSString *)arg1 ;
-(NSString *)role;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)roomName;
-(BOOL)changed;
-(void)setPassword:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)password;
@end

