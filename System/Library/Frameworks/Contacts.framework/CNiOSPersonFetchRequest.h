/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNiOSContactPredicate;
@class NSArray, CNManagedConfiguration;

@interface CNiOSPersonFetchRequest : NSObject {

	id<CNiOSContactPredicate> _predicate;
	BOOL _shouldSort;
	unsigned _sortOrder;
	unsigned long long _options;
	BOOL _unifiedFetch;
	NSArray* _keysToFetch;
	unsigned long long _batchSize;
	CNManagedConfiguration* _managedConfiguration;

}

@property (readonly) id<CNiOSContactPredicate> predicate;                        //@synthesize predicate=_predicate - In the implementation block
@property (readonly) BOOL shouldSort;                                            //@synthesize shouldSort=_shouldSort - In the implementation block
@property (readonly) unsigned long long options;                                 //@synthesize options=_options - In the implementation block
@property (readonly) unsigned sortOrder;                                         //@synthesize sortOrder=_sortOrder - In the implementation block
@property (readonly) unsigned sortOrderIncludingNone; 
@property (readonly) NSArray * keysToFetch;                                      //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (readonly) BOOL unifiedFetch;                                          //@synthesize unifiedFetch=_unifiedFetch - In the implementation block
@property (readonly) unsigned long long batchSize;                               //@synthesize batchSize=_batchSize - In the implementation block
@property (readonly) CNManagedConfiguration * managedConfiguration;              //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
+(id)validatePredicate:(id)arg1 error:(id*)arg2 ;
+(id)fetchRequestFromCNFetchRequest:(id)arg1 managedConfiguration:(id)arg2 error:(id*)arg3 ;
+(long long)resolvedSortOrderFromContactSortOrder:(long long)arg1 ;
+(id)effectivePredicate:(id)arg1 ;
-(unsigned)sortOrder;
-(BOOL)unifiedFetch;
-(unsigned)sortOrderIncludingNone;
-(BOOL)shouldSort;
-(id)initWithPredicate:(id)arg1 keysToFetch:(id)arg2 shouldSort:(BOOL)arg3 sortOrder:(unsigned)arg4 unifiedFetch:(BOOL)arg5 batchSize:(unsigned long long)arg6 managedConfiguration:(id)arg7 options:(unsigned long long)arg8 ;
-(unsigned long long)batchSize;
-(NSArray *)keysToFetch;
-(CNManagedConfiguration *)managedConfiguration;
-(unsigned long long)options;
-(id<CNiOSContactPredicate>)predicate;
@end

