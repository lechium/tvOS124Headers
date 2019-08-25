/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DASearchQuery.h>

@class NSString, NSDate;

@interface DAMailboxSearchQuery : DASearchQuery {

	BOOL _allOrNone;
	BOOL _deepTraversal;
	BOOL _rebuildResults;
	int _bodyType;
	int _MIMESupport;
	NSString* _collectionID;
	long long _truncationSize;
	NSDate* _priorToDate;

}

@property (nonatomic,retain) NSString * collectionID;               //@synthesize collectionID=_collectionID - In the implementation block
@property (assign,nonatomic) int bodyType;                          //@synthesize bodyType=_bodyType - In the implementation block
@property (assign,nonatomic) long long truncationSize;              //@synthesize truncationSize=_truncationSize - In the implementation block
@property (assign,nonatomic) BOOL allOrNone;                        //@synthesize allOrNone=_allOrNone - In the implementation block
@property (nonatomic,retain) NSDate * priorToDate;                  //@synthesize priorToDate=_priorToDate - In the implementation block
@property (assign,nonatomic) int MIMESupport;                       //@synthesize MIMESupport=_MIMESupport - In the implementation block
@property (assign,nonatomic) BOOL deepTraversal;                    //@synthesize deepTraversal=_deepTraversal - In the implementation block
@property (assign,nonatomic) BOOL rebuildResults;                   //@synthesize rebuildResults=_rebuildResults - In the implementation block
+(id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2 ;
+(id)mailboxSearchQueryWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3 ;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(void)setAllOrNone:(BOOL)arg1 ;
-(void)setRebuildResults:(BOOL)arg1 ;
-(void)setBodyType:(int)arg1 ;
-(void)setCollectionID:(NSString *)arg1 ;
-(void)setMIMESupport:(int)arg1 ;
-(void)setTruncationSize:(long long)arg1 ;
-(void)setPriorToDate:(NSDate *)arg1 ;
-(void)setDeepTraversal:(BOOL)arg1 ;
-(int)bodyType;
-(NSDate *)priorToDate;
-(long long)truncationSize;
-(BOOL)allOrNone;
-(int)MIMESupport;
-(BOOL)deepTraversal;
-(BOOL)rebuildResults;
-(NSString *)collectionID;
-(id)dictionaryRepresentation;
@end

