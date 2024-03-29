/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDDataStreamTransportCommand, HMDDataStreamTransportTransportType, NSData;

@interface HMDDataStreamTransportSetup : NSObject <NSCopying> {

	HMDDataStreamTransportCommand* _command;
	HMDDataStreamTransportTransportType* _transportType;
	NSData* _controllerKeySalt;

}

@property (nonatomic,retain) HMDDataStreamTransportCommand * command;                          //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) HMDDataStreamTransportTransportType * transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSData * controllerKeySalt;                                       //@synthesize controllerKeySalt=_controllerKeySalt - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(HMDDataStreamTransportTransportType *)transportType;
-(void)setTransportType:(HMDDataStreamTransportTransportType *)arg1 ;
-(HMDDataStreamTransportCommand *)command;
-(void)setCommand:(HMDDataStreamTransportCommand *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setControllerKeySalt:(NSData *)arg1 ;
-(NSData *)controllerKeySalt;
-(id)initWithCommand:(id)arg1 transportType:(id)arg2 controllerKeySalt:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

