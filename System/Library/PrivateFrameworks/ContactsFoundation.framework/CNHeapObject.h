/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNHeapObject : NSObject {

	NSString* _className;
	NSString* _binary;
	unsigned long long _count;
	unsigned long long _bytes;

}

@property (nonatomic,retain) NSString * className;                  //@synthesize className=_className - In the implementation block
@property (nonatomic,retain) NSString * binary;                     //@synthesize binary=_binary - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long bytes;              //@synthesize bytes=_bytes - In the implementation block
-(void)setBytes:(unsigned long long)arg1 ;
-(id)classAndBinaryKey;
-(void)setClassName:(NSString *)arg1 ;
-(NSString *)binary;
-(void)setBinary:(NSString *)arg1 ;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)bytes;
-(NSString *)className;
-(void)setCount:(unsigned long long)arg1 ;
@end

