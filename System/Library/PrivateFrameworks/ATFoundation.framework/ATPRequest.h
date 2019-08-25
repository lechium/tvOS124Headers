/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATPRequest : PBRequest <NSCopying> {

	NSString* _command;
	NSString* _dataClass;

}

@property (nonatomic,readonly) BOOL hasCommand; 
@property (nonatomic,retain) NSString * command;                //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasDataClass; 
@property (nonatomic,retain) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)dataClass;
-(BOOL)hasDataClass;
-(void)setDataClass:(NSString *)arg1 ;
-(NSString *)command;
-(void)setCommand:(NSString *)arg1 ;
-(BOOL)hasCommand;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

