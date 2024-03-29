/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, SSDoubleLinkedList, SSLogConfig;

@interface SSLRUCache : NSObject {

	unsigned long long _maxSize;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _backingDictionary;
	SSDoubleLinkedList* _backingList;
	SSLogConfig* _logConfig;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backingDictionary;               //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedList * backingList;                      //@synthesize backingList=_backingList - In the implementation block
@property (nonatomic,retain) SSLogConfig * logConfig;                               //@synthesize logConfig=_logConfig - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long maxSize;                          //@synthesize maxSize=_maxSize - In the implementation block
-(SSLogConfig *)logConfig;
-(void)setLogConfig:(SSLogConfig *)arg1 ;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)_count;
-(NSMutableDictionary *)backingDictionary;
-(SSDoubleLinkedList *)backingList;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)_addObject:(id)arg1 forKey:(id)arg2 ;
-(id)allObjectsAndKeys;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(void)setBackingList:(SSDoubleLinkedList *)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)description;
-(void)removeAllObjects;
-(unsigned long long)maxSize;
@end

