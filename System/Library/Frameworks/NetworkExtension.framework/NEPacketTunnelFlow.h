/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSObject, NSFileHandle, NSMutableDictionary;

@interface NEPacketTunnelFlow : NSObject {

	BOOL _handlerSetup;
	NSObject*<OS_dispatch_queue> _queue;
	NSFileHandle* _socket;
	NSMutableDictionary* _uuidMappings;
	/*^block*/id _packetHandler;
	/*^block*/id _packetObjectHandler;
	char** _packetDataArray;
	unsigned* _packetProtocols;
	unsigned long long* _packetLengths;
	unsigned long long _buffersSize;
	long long _interfaceType;
	NEVirtualInterface_sRef _interface;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL handlerSetup;                                //@synthesize handlerSetup=_handlerSetup - In the implementation block
@property (retain) NSFileHandle * socket;                            //@synthesize socket=_socket - In the implementation block
@property (retain) NSMutableDictionary * uuidMappings;               //@synthesize uuidMappings=_uuidMappings - In the implementation block
@property (copy) id packetHandler;                                   //@synthesize packetHandler=_packetHandler - In the implementation block
@property (copy) id packetObjectHandler;                             //@synthesize packetObjectHandler=_packetObjectHandler - In the implementation block
@property (assign) char** packetDataArray;                           //@synthesize packetDataArray=_packetDataArray - In the implementation block
@property (assign) unsigned* packetProtocols;                        //@synthesize packetProtocols=_packetProtocols - In the implementation block
@property (assign) unsigned long long* packetLengths;                //@synthesize packetLengths=_packetLengths - In the implementation block
@property (assign) unsigned long long buffersSize;                   //@synthesize buffersSize=_buffersSize - In the implementation block
@property (readonly) long long interfaceType;                        //@synthesize interfaceType=_interfaceType - In the implementation block
@property (readonly) NEVirtualInterface_sRef interface;              //@synthesize interface=_interface - In the implementation block
-(long long)interfaceType;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)setVirtualInterfaceSocket:(id)arg1 ;
-(void)closeVirtualInterface;
-(void)setHandlerSetup:(BOOL)arg1 ;
-(void)setPacketHandler:(id)arg1 ;
-(char**)packetDataArray;
-(void)setPacketDataArray:(char**)arg1 ;
-(unsigned*)packetProtocols;
-(void)setPacketProtocols:(unsigned*)arg1 ;
-(unsigned long long*)packetLengths;
-(void)setPacketLengths:(unsigned long long*)arg1 ;
-(id)packetHandler;
-(BOOL)handlerSetup;
-(NSMutableDictionary *)uuidMappings;
-(void)setUuidMappings:(NSMutableDictionary *)arg1 ;
-(id)packetObjectHandler;
-(void)setPacketObjectHandler:(id)arg1 ;
-(id)signingIdentifierForUUID:(id)arg1 ;
-(unsigned long long)buffersSize;
-(void)setBuffersSize:(unsigned long long)arg1 ;
-(id)initWithVirtualInterfaceType:(long long)arg1 ;
-(void)resetReadHandler;
-(void)readPacketsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)readPacketObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)writePackets:(id)arg1 withProtocols:(id)arg2 ;
-(BOOL)writePacketObjects:(id)arg1 ;
-(void)setSocket:(NSFileHandle *)arg1 ;
-(NSFileHandle *)socket;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NEVirtualInterface_sRef)interface;
@end

