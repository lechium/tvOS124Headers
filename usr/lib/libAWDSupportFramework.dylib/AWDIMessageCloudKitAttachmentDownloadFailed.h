/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageCloudKitAttachmentDownloadFailed : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _attachmentGuid;
	unsigned _attachmentSize;
	unsigned _connectionType;
	int _errorCode;
	NSString* _errorDomain;
	int _linkQuality;
	NSString* _messageGuid;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageGuid; 
@property (nonatomic,retain) NSString * messageGuid;                    //@synthesize messageGuid=_messageGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasAttachmentGuid; 
@property (nonatomic,retain) NSString * attachmentGuid;                 //@synthesize attachmentGuid=_attachmentGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                           //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasAttachmentSize; 
@property (assign,nonatomic) unsigned attachmentSize;                   //@synthesize attachmentSize=_attachmentSize - In the implementation block
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(int)linkQuality;
-(void)setAttachmentSize:(unsigned)arg1 ;
-(void)setHasAttachmentSize:(BOOL)arg1 ;
-(BOOL)hasAttachmentSize;
-(unsigned)attachmentSize;
-(void)setMessageGuid:(NSString *)arg1 ;
-(void)setAttachmentGuid:(NSString *)arg1 ;
-(BOOL)hasMessageGuid;
-(BOOL)hasAttachmentGuid;
-(NSString *)messageGuid;
-(NSString *)attachmentGuid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)hasErrorDomain;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(NSString *)errorDomain;
-(int)errorCode;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

