/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface REDependencyGraphNode : NSObject {

	id _item;
	NSHashTable* _connections;

}

@property (nonatomic,readonly) id item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSHashTable * connections;              //@synthesize connections=_connections - In the implementation block
-(NSHashTable *)connections;
-(id)initWithItem:(id)arg1 ;
-(void)setConnections:(NSHashTable *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)item;
@end

