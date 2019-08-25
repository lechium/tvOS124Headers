/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATRequest : ATMessage <NSSecureCoding> {

	NSString* _command;
	NSString* _dataClass;

}

@property (nonatomic,copy) NSString * command;                //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dataClass;
-(id)additionalDescription;
-(id)partialResponseWithParameters:(id)arg1 ;
-(id)initWithCommand:(id)arg1 dataClass:(id)arg2 parameters:(id)arg3 ;
-(id)responseWithError:(id)arg1 parameters:(id)arg2 ;
-(void)setDataClass:(NSString *)arg1 ;
-(NSString *)command;
-(void)setCommand:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

