/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVServices/TVServices-Structs.h>
@class NSString;

@interface TVSNetworkInterface : NSObject {

	SCNetworkServiceRef _serviceRef;
	SCNetworkInterfaceRef _interfaceRef;
	BOOL _active;
	BOOL _hasChanges;
	NSString* _name;
	NSString* _IPAddress;
	NSString* _hardwareAddress;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * hardwareAddress;                   //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,copy,readonly) NSString * IPAddress;                //@synthesize IPAddress=_IPAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges;                          //@synthesize hasChanges=_hasChanges - In the implementation block
+(BOOL)_supportsInterface:(SCNetworkInterfaceRef)arg1 ;
+(id)_interfaceType;
+(id)preferredInterface;
-(BOOL)hasChanges;
-(void)_setNeedsUpdate;
-(id)_initWithServiceRef:(SCNetworkServiceRef)arg1 interfaceRef:(SCNetworkInterfaceRef)arg2 ;
-(NSString *)hardwareAddress;
-(void)_updateWithServiceRef:(SCNetworkServiceRef)arg1 interfaceRef:(SCNetworkInterfaceRef)arg2 ;
-(BOOL)_commitChangesWithServiceRef:(SCNetworkServiceRef)arg1 ;
-(void)_objectDidChange;
-(void)setHardwareAddress:(NSString *)arg1 ;
-(void)_discardChanges;
-(void)commitChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)discardChanges;
-(NSString *)IPAddress;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isActive;
@end

