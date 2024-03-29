/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _DKEventData : NSObject {

	unsigned long long _version;
	NSData* _event;
	unsigned long long _uncompressedLength;

}

@property (nonatomic,readonly) unsigned long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSData * event;                                     //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) unsigned long long uncompressedLength;              //@synthesize uncompressedLength=_uncompressedLength - In the implementation block
+(id)fromPBCodable:(id)arg1 ;
+(id)createFromData:(id)arg1 ;
-(id)toPBCodable;
-(id)asData;
-(unsigned long long)uncompressedLength;
-(id)initWithCompressedData:(id)arg1 uncompressedLength:(unsigned long long)arg2 version:(unsigned long long)arg3 ;
-(id)initWithData:(id)arg1 version:(unsigned long long)arg2 ;
-(unsigned long long)version;
-(NSData *)event;
@end

