/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSObject;

@interface ML3StatementCacheNode : NSObject {

	NSObject*<NSCopying> _dictionaryKey;
	ML3StatementCacheNode* _next;

}

@property (nonatomic,copy) NSObject*<NSCopying> dictionaryKey;              //@synthesize dictionaryKey=_dictionaryKey - In the implementation block
@property (nonatomic,retain) ML3StatementCacheNode * next;                  //@synthesize next=_next - In the implementation block
-(void)setNext:(ML3StatementCacheNode *)arg1 ;
-(id)initWithDictionaryKey:(id)arg1 ;
-(NSObject*<NSCopying>)dictionaryKey;
-(void)setDictionaryKey:(NSObject*<NSCopying>)arg1 ;
-(ML3StatementCacheNode *)next;
-(id)description;
@end

