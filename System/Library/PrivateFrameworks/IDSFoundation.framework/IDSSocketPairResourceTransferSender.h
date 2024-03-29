/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString, NSDictionary, NSDate;

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage {

	NSString* _resourcePath;
	NSDictionary* _metadata;
	NSDictionary* _resourceAttributes;
	BOOL _sentFirstMessage;
	unsigned long long _totalBytes;
	unsigned long long _nextByte;
	BOOL _done;
	int _fileDescriptor;
	unsigned _maxChunkSize;
	BOOL _resumeResourceTransfers;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _compressPayload;
	BOOL _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;
	NSDate* _expiryDate;

}

@property (nonatomic,readonly) BOOL sentFirstMessage;                      //@synthesize sentFirstMessage=_sentFirstMessage - In the implementation block
@property (nonatomic,readonly) BOOL isDone;                                //@synthesize done=_done - In the implementation block
@property (assign,nonatomic) unsigned maxChunkSize;                        //@synthesize maxChunkSize=_maxChunkSize - In the implementation block
@property (assign,nonatomic) BOOL resumeResourceTransfers;                 //@synthesize resumeResourceTransfers=_resumeResourceTransfers - In the implementation block
@property (assign,nonatomic) unsigned long long nextByte;                  //@synthesize nextByte=_nextByte - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBytes;              //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                      //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) NSString * messageUUID;                     //@synthesize messageUUID=_messageUUID - In the implementation block
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(NSString *)messageUUID;
-(void)closeFileAndMarkDone;
-(BOOL)readNextBytes:(id*)arg1 byteOffset:(unsigned long long*)arg2 ;
-(id)readNextBytes;
-(id)nextMessage_old;
-(id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(BOOL)arg5 wantsAppAck:(BOOL)arg6 compressPayload:(BOOL)arg7 compressed:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 expiryDate:(id)arg11 ;
-(BOOL)sentFirstMessage;
-(unsigned)maxChunkSize;
-(void)setMaxChunkSize:(unsigned)arg1 ;
-(BOOL)resumeResourceTransfers;
-(void)setResumeResourceTransfers:(BOOL)arg1 ;
-(void)setNextByte:(unsigned long long)arg1 ;
-(BOOL)isDone;
-(unsigned long long)totalBytes;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(unsigned long long)nextByte;
-(id)nextMessage;
-(unsigned char)command;
-(void)dealloc;
-(id)description;
-(void)reset;
@end

