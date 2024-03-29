/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface _MFLibrarySearchableIndexPendingRemovals : NSObject {

	NSMutableDictionary* _reasonsByIdentifier;

}

@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * identifiers; 
@property (nonatomic,readonly) NSArray * purgedIdentifiers; 
@property (nonatomic,readonly) NSArray * deletedIdentifiers; 
-(NSArray *)identifiers;
-(void)removeIdentifier:(id)arg1 ;
-(void)addIdentifiers:(id)arg1 withReasons:(id)arg2 ;
-(void)removeAllIdentifiers;
-(id)_identifiersPassingReasonsTest:(/*^block*/id)arg1 ;
-(NSArray *)purgedIdentifiers;
-(NSArray *)deletedIdentifiers;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
@end

