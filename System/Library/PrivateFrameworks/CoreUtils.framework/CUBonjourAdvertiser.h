/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString, NSDictionary;

@interface CUBonjourAdvertiser : NSObject {

	BOOL _activated;
	BonjourAdvertiserPrivateRef _bonjourAdvertiser;
	BOOL _invalidateCalled;
	BOOL _started;
	LogCategory* _ucat;
	BOOL _updatePending;
	BOOL _advertiseFlagsChanged;
	BOOL _domainChanged;
	BOOL _interfaceIndexChanged;
	BOOL _interfaceNameChanged;
	BOOL _nameChanged;
	BOOL _portChanged;
	BOOL _serviceTypeChanged;
	BOOL _txtDictionaryChanged;
	unsigned _interfaceIndex;
	int _port;
	unsigned long long _advertiseFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _domain;
	NSString* _interfaceName;
	NSString* _label;
	NSString* _name;
	NSString* _serviceType;
	NSDictionary* _txtDictionary;

}

@property (assign,nonatomic) unsigned long long advertiseFlags;                       //@synthesize advertiseFlags=_advertiseFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * domain;                                         //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) unsigned interfaceIndex;                                 //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                  //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int port;                                                //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSDictionary * txtDictionary;                              //@synthesize txtDictionary=_txtDictionary - In the implementation block
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceIndex:(unsigned)arg1 ;
-(unsigned)interfaceIndex;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setAdvertiseFlags:(unsigned long long)arg1 ;
-(unsigned long long)advertiseFlags;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_activateLocked;
-(void)_activateSafeInvokeBlock:(/*^block*/id)arg1 ;
-(void)_updateLocked;
-(void)_updateTXTDictionary;
-(void)setDomain:(NSString *)arg1 ;
-(NSDictionary *)txtDictionary;
-(void)setTxtDictionary:(NSDictionary *)arg1 ;
-(void)setPort:(int)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)invalidate;
-(void)activate;
-(NSString *)domain;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(int)port;
@end

