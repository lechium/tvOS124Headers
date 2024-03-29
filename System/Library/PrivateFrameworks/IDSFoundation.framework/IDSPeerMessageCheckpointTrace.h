/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class NSString, CUTCheckpointRange, NSMutableArray;

@interface IDSPeerMessageCheckpointTrace : CUTCheckpointTrace {

	NSString* _guid;
	CUTCheckpointRange* _IDQuery;
	CUTCheckpointRange* _messageOnQueue;
	NSMutableArray* _mutableEncryptionCheckpoints;
	NSMutableArray* _mutableAggregateMessageSendCheckpoints;

}

@property (nonatomic,retain) NSMutableArray * mutableEncryptionCheckpoints;                        //@synthesize mutableEncryptionCheckpoints=_mutableEncryptionCheckpoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableAggregateMessageSendCheckpoints;              //@synthesize mutableAggregateMessageSendCheckpoints=_mutableAggregateMessageSendCheckpoints - In the implementation block
@property (nonatomic,readonly) NSString * guid;                                                    //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * IDQuery;                                       //@synthesize IDQuery=_IDQuery - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * messageOnQueue;                                //@synthesize messageOnQueue=_messageOnQueue - In the implementation block
-(NSString *)guid;
-(id)initWithGuid:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(NSMutableArray *)mutableEncryptionCheckpoints;
-(NSMutableArray *)mutableAggregateMessageSendCheckpoints;
-(id)checkpoints;
-(id)checkpointByAppendingEncryptionCheckpoint;
-(id)checkpointByAppendingAggregateMessageSendCheckpoint;
-(id)encryptionCheckpoints;
-(id)aggregateMessageSendCheckpoints;
-(CUTCheckpointRange *)IDQuery;
-(CUTCheckpointRange *)messageOnQueue;
-(void)setMutableEncryptionCheckpoints:(NSMutableArray *)arg1 ;
-(void)setMutableAggregateMessageSendCheckpoints:(NSMutableArray *)arg1 ;
@end

