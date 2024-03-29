/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class NSDictionary, NSError, NSMutableArray, TVHSMediaServerIdentifier, NSOperation;

@interface TVHKDAAPMediaItemSaveOperation : TVHSAsynchronousOperation {

	BOOL _success;
	NSDictionary* _changedAttributeValues;
	NSError* _error;
	unsigned long long _itemID;
	unsigned long long _databaseID;
	NSMutableArray* _remainingAttributeCodes;
	TVHSMediaServerIdentifier* _mediaServerIdentifier;
	NSOperation* _currentSubOperation;

}

@property (assign,nonatomic) unsigned long long itemID;                                      //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;                                  //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,retain) NSMutableArray * remainingAttributeCodes;                       //@synthesize remainingAttributeCodes=_remainingAttributeCodes - In the implementation block
@property (nonatomic,retain) TVHSMediaServerIdentifier * mediaServerIdentifier;              //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,retain) NSOperation * currentSubOperation;                              //@synthesize currentSubOperation=_currentSubOperation - In the implementation block
@property (assign,nonatomic) BOOL success;                                                   //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSDictionary * changedAttributeValues;                            //@synthesize changedAttributeValues=_changedAttributeValues - In the implementation block
-(void)setSuccess:(BOOL)arg1 ;
-(unsigned long long)databaseID;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(unsigned long long)itemID;
-(BOOL)success;
-(void)setItemID:(unsigned long long)arg1 ;
-(NSDictionary *)changedAttributeValues;
-(TVHSMediaServerIdentifier *)mediaServerIdentifier;
-(void)setMediaServerIdentifier:(TVHSMediaServerIdentifier *)arg1 ;
-(void)_saveNextAttribute;
-(NSMutableArray *)remainingAttributeCodes;
-(id)_requestForAttributeCode:(id)arg1 ;
-(id)initWithMediaServerIdentifier:(id)arg1 mediaItemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 ;
-(void)setChangedAttributeValues:(NSDictionary *)arg1 ;
-(void)setRemainingAttributeCodes:(NSMutableArray *)arg1 ;
-(id)init;
-(void)cancel;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)executionDidBegin;
-(NSOperation *)currentSubOperation;
-(void)setCurrentSubOperation:(NSOperation *)arg1 ;
@end

