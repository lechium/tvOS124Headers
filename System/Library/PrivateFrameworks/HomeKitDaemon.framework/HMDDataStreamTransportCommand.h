/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDDataStreamTransportCommand : NSObject <NSCopying> {

	long long _command;

}

@property (assign,nonatomic) long long command;              //@synthesize command=_command - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(long long)command;
-(void)setCommand:(long long)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithCommand:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

