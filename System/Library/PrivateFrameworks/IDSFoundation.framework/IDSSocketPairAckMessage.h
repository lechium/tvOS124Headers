/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@interface IDSSocketPairAckMessage : IDSSocketPairMessage {

	unsigned _sequenceNumber;

}

@property (nonatomic,readonly) unsigned sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(unsigned)sequenceNumber;
-(id)initWithSequenceNumber:(unsigned)arg1 ;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(unsigned char)command;
@end

