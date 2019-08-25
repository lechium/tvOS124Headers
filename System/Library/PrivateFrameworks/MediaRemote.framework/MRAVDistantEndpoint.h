/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSArray, MRAVDistantOutputDevice, MRDistantExternalDevice, NSXPCListenerEndpoint;

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding> {

	BOOL _canModifyGroupMembership;
	long long _connectionType;
	NSString* _localizedName;
	NSString* _uniqueIdentifier;
	NSObject*<OS_dispatch_queue> _externalDeviceQueue;
	NSArray* _distantOutputDevices;
	MRAVDistantOutputDevice* _distantGroupLeader;
	MRDistantExternalDevice* _distantExternalDevice;
	NSXPCListenerEndpoint* _externalDeviceListenerEndpoint;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalDeviceQueue;                    //@synthesize externalDeviceQueue=_externalDeviceQueue - In the implementation block
@property (nonatomic,copy) NSArray * distantOutputDevices;                                        //@synthesize distantOutputDevices=_distantOutputDevices - In the implementation block
@property (nonatomic,retain) MRAVDistantOutputDevice * distantGroupLeader;                        //@synthesize distantGroupLeader=_distantGroupLeader - In the implementation block
@property (nonatomic,retain) MRDistantExternalDevice * distantExternalDevice;                     //@synthesize distantExternalDevice=_distantExternalDevice - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * externalDeviceListenerEndpoint;              //@synthesize externalDeviceListenerEndpoint=_externalDeviceListenerEndpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)connectionType;
-(void)setUniqueIdentifier:(id)arg1 ;
-(void)setLocalizedName:(id)arg1 ;
-(void)setDistantExternalDevice:(MRDistantExternalDevice *)arg1 ;
-(id)designatedGroupLeader;
-(NSArray *)distantOutputDevices;
-(void)setDistantOutputDevices:(NSArray *)arg1 ;
-(NSXPCListenerEndpoint *)externalDeviceListenerEndpoint;
-(void)setExternalDeviceListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSObject*<OS_dispatch_queue>)externalDeviceQueue;
-(void)setExternalDeviceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MRAVDistantOutputDevice *)distantGroupLeader;
-(void)setDistantGroupLeader:(MRAVDistantOutputDevice *)arg1 ;
-(MRDistantExternalDevice *)distantExternalDevice;
-(id)outputDevices;
-(BOOL)isProxyGroupPlayer;
-(BOOL)canModifyGroupMembership;
-(id)externalDevice;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)localizedName;
-(id)uniqueIdentifier;
-(id)initWithDescriptor:(id)arg1 ;
@end

