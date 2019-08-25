/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, IMDoubleLinkedList;

@interface IMOrderedMutableDictionary : NSObject {

	NSMutableDictionary* _dictionary;
	IMDoubleLinkedList* _linkedList;

}
-(BOOL)containsKey:(id)arg1 ;
-(void)setOrderedObject:(id)arg1 forKey:(id)arg2 ;
-(id)orderedObjectForKey:(id)arg1 ;
-(void)removeOrderedObjectForKey:(id)arg1 ;
-(id)orderedObjects;
-(BOOL)containsOrderedObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

