/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject {

	IMDoubleLinkedListNode* _first;
	IMDoubleLinkedListNode* _last;
	unsigned long long _count;

}

@property (retain) IMDoubleLinkedListNode * first;              //@synthesize first=_first - In the implementation block
@property (retain) IMDoubleLinkedListNode * last;               //@synthesize last=_last - In the implementation block
@property (readonly) unsigned long long count;                  //@synthesize count=_count - In the implementation block
-(void)pushObject:(id)arg1 ;
-(id)popObject;
-(void)appendObject:(id)arg1 ;
-(IMDoubleLinkedListNode *)first;
-(void)removeLinkedListNode:(id)arg1 ;
-(void)pushLinkedListNode:(id)arg1 ;
-(void)appendLinkedListNode:(id)arg1 ;
-(IMDoubleLinkedListNode *)last;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)allObjects;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 ;
-(void)setFirst:(IMDoubleLinkedListNode *)arg1 ;
-(void)setLast:(IMDoubleLinkedListNode *)arg1 ;
@end

