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

@interface AWDIMessageAttachmentUpload : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _attachmentSize;
	unsigned _connectionType;
	int _firstLevelMMCSError;
	NSString* _firstLevelMMCSErrorDomain;
	int _fourthLevelMMCSError;
	NSString* _fourthLevelMMCSErrorDomain;
	int _fzError;
	int _genericError;
	NSString* _guid;
	unsigned _lastPrewarmDuration;
	int _linkQuality;
	unsigned _messageError;
	int _secondLevelMMCSError;
	NSString* _secondLevelMMCSErrorDomain;
	int _thirdLevelMMCSError;
	NSString* _thirdLevelMMCSErrorDomain;
	unsigned _timeFromLastPrewarm;
	unsigned _tokenError;
	unsigned _uploadDuration;
	SCD_Struct_AW20 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                    //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFzError; 
@property (assign,nonatomic) int fzError;                                        //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) BOOL hasMessageError; 
@property (assign,nonatomic) unsigned messageError;                              //@synthesize messageError=_messageError - In the implementation block
@property (assign,nonatomic) BOOL hasTokenError; 
@property (assign,nonatomic) unsigned tokenError;                                //@synthesize tokenError=_tokenError - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                                   //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) BOOL hasUploadDuration; 
@property (assign,nonatomic) unsigned uploadDuration;                            //@synthesize uploadDuration=_uploadDuration - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                    //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                            //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasAttachmentSize; 
@property (assign,nonatomic) unsigned attachmentSize;                            //@synthesize attachmentSize=_attachmentSize - In the implementation block
@property (assign,nonatomic) BOOL hasTimeFromLastPrewarm; 
@property (assign,nonatomic) unsigned timeFromLastPrewarm;                       //@synthesize timeFromLastPrewarm=_timeFromLastPrewarm - In the implementation block
@property (assign,nonatomic) BOOL hasLastPrewarmDuration; 
@property (assign,nonatomic) unsigned lastPrewarmDuration;                       //@synthesize lastPrewarmDuration=_lastPrewarmDuration - In the implementation block
@property (assign,nonatomic) BOOL hasFirstLevelMMCSError; 
@property (assign,nonatomic) int firstLevelMMCSError;                            //@synthesize firstLevelMMCSError=_firstLevelMMCSError - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstLevelMMCSErrorDomain; 
@property (nonatomic,retain) NSString * firstLevelMMCSErrorDomain;               //@synthesize firstLevelMMCSErrorDomain=_firstLevelMMCSErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasSecondLevelMMCSError; 
@property (assign,nonatomic) int secondLevelMMCSError;                           //@synthesize secondLevelMMCSError=_secondLevelMMCSError - In the implementation block
@property (nonatomic,readonly) BOOL hasSecondLevelMMCSErrorDomain; 
@property (nonatomic,retain) NSString * secondLevelMMCSErrorDomain;              //@synthesize secondLevelMMCSErrorDomain=_secondLevelMMCSErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasThirdLevelMMCSError; 
@property (assign,nonatomic) int thirdLevelMMCSError;                            //@synthesize thirdLevelMMCSError=_thirdLevelMMCSError - In the implementation block
@property (nonatomic,readonly) BOOL hasThirdLevelMMCSErrorDomain; 
@property (nonatomic,retain) NSString * thirdLevelMMCSErrorDomain;               //@synthesize thirdLevelMMCSErrorDomain=_thirdLevelMMCSErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasFourthLevelMMCSError; 
@property (assign,nonatomic) int fourthLevelMMCSError;                           //@synthesize fourthLevelMMCSError=_fourthLevelMMCSError - In the implementation block
@property (nonatomic,readonly) BOOL hasFourthLevelMMCSErrorDomain; 
@property (nonatomic,retain) NSString * fourthLevelMMCSErrorDomain;              //@synthesize fourthLevelMMCSErrorDomain=_fourthLevelMMCSErrorDomain - In the implementation block
-(void)setGenericError:(int)arg1 ;
-(void)setHasGenericError:(BOOL)arg1 ;
-(BOOL)hasGenericError;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(int)genericError;
-(int)linkQuality;
-(void)setFirstLevelMMCSErrorDomain:(NSString *)arg1 ;
-(void)setSecondLevelMMCSErrorDomain:(NSString *)arg1 ;
-(void)setThirdLevelMMCSErrorDomain:(NSString *)arg1 ;
-(void)setFourthLevelMMCSErrorDomain:(NSString *)arg1 ;
-(void)setFzError:(int)arg1 ;
-(void)setHasFzError:(BOOL)arg1 ;
-(BOOL)hasFzError;
-(void)setMessageError:(unsigned)arg1 ;
-(void)setHasMessageError:(BOOL)arg1 ;
-(BOOL)hasMessageError;
-(void)setTokenError:(unsigned)arg1 ;
-(void)setHasTokenError:(BOOL)arg1 ;
-(BOOL)hasTokenError;
-(void)setAttachmentSize:(unsigned)arg1 ;
-(void)setHasAttachmentSize:(BOOL)arg1 ;
-(BOOL)hasAttachmentSize;
-(void)setFirstLevelMMCSError:(int)arg1 ;
-(void)setHasFirstLevelMMCSError:(BOOL)arg1 ;
-(BOOL)hasFirstLevelMMCSError;
-(BOOL)hasFirstLevelMMCSErrorDomain;
-(void)setSecondLevelMMCSError:(int)arg1 ;
-(void)setHasSecondLevelMMCSError:(BOOL)arg1 ;
-(BOOL)hasSecondLevelMMCSError;
-(BOOL)hasSecondLevelMMCSErrorDomain;
-(void)setThirdLevelMMCSError:(int)arg1 ;
-(void)setHasThirdLevelMMCSError:(BOOL)arg1 ;
-(BOOL)hasThirdLevelMMCSError;
-(BOOL)hasThirdLevelMMCSErrorDomain;
-(void)setFourthLevelMMCSError:(int)arg1 ;
-(void)setHasFourthLevelMMCSError:(BOOL)arg1 ;
-(BOOL)hasFourthLevelMMCSError;
-(BOOL)hasFourthLevelMMCSErrorDomain;
-(int)fzError;
-(unsigned)messageError;
-(unsigned)tokenError;
-(unsigned)attachmentSize;
-(int)firstLevelMMCSError;
-(NSString *)firstLevelMMCSErrorDomain;
-(int)secondLevelMMCSError;
-(NSString *)secondLevelMMCSErrorDomain;
-(int)thirdLevelMMCSError;
-(NSString *)thirdLevelMMCSErrorDomain;
-(int)fourthLevelMMCSError;
-(NSString *)fourthLevelMMCSErrorDomain;
-(void)setUploadDuration:(unsigned)arg1 ;
-(void)setHasUploadDuration:(BOOL)arg1 ;
-(BOOL)hasUploadDuration;
-(void)setTimeFromLastPrewarm:(unsigned)arg1 ;
-(void)setHasTimeFromLastPrewarm:(BOOL)arg1 ;
-(BOOL)hasTimeFromLastPrewarm;
-(void)setLastPrewarmDuration:(unsigned)arg1 ;
-(void)setHasLastPrewarmDuration:(BOOL)arg1 ;
-(BOOL)hasLastPrewarmDuration;
-(unsigned)uploadDuration;
-(unsigned)timeFromLastPrewarm;
-(unsigned)lastPrewarmDuration;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
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

