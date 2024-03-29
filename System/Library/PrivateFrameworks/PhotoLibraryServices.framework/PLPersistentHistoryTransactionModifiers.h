/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPersistentHistoryTransactionModifiers : NSObject {

	BOOL _syncChangeMarker;
	int _changeSource;

}

@property (assign,nonatomic) BOOL syncChangeMarker;              //@synthesize syncChangeMarker=_syncChangeMarker - In the implementation block
@property (assign,nonatomic) int changeSource;                   //@synthesize changeSource=_changeSource - In the implementation block
@property (nonatomic,readonly) BOOL isSyncable; 
+(id)transactionAuthorFromChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2 ;
+(id)transactionModifiersFromTransactionAuthor:(id)arg1 ;
-(BOOL)updateFromTransactionAuthor:(id)arg1 ;
-(id)initWithChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2 ;
-(id)_descriptionWithBuilder:(id)arg1 ;
-(id)encodeAsTransactionAuthor;
-(BOOL)isSyncable;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(BOOL)syncChangeMarker;
-(void)setSyncChangeMarker:(BOOL)arg1 ;
-(int)changeSource;
-(void)setChangeSource:(int)arg1 ;
-(id)init;
-(id)description;
@end

