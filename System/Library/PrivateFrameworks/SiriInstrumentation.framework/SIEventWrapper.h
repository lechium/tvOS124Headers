/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaClientEventMetadata, SISchemaClientAnyEvent;

@interface SIEventWrapper : PBCodable {

	SISchemaClientEventMetadata* _metadata;
	SISchemaClientAnyEvent* _wrappedEvent;

}

@property (nonatomic,retain) SISchemaClientEventMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) SISchemaClientAnyEvent * wrappedEvent;               //@synthesize wrappedEvent=_wrappedEvent - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SISchemaClientEventMetadata *)metadata;
-(void)setMetadata:(SISchemaClientEventMetadata *)arg1 ;
-(id)initWithTimestamp:(long long)arg1 timestampReferenceID:(id)arg2 eventType:(int)arg3 eventBody:(id)arg4 ;
-(SISchemaClientAnyEvent *)wrappedEvent;
-(void)setWrappedEvent:(SISchemaClientAnyEvent *)arg1 ;
-(id)dictionaryRepresentation;
@end
