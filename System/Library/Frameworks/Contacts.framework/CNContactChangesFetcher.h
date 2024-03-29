/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CNContactChangesFetcher : NSObject {

	BOOL _unify;
	NSSet* _identifiers;
	NSSet* _keysToFetch;

}

@property (nonatomic,retain) NSSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSSet * keysToFetch;              //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL unify;                       //@synthesize unify=_unify - In the implementation block
-(NSSet *)identifiers;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(BOOL)unify;
-(void)setUnify:(BOOL)arg1 ;
-(NSSet *)keysToFetch;
-(void)setKeysToFetch:(NSSet *)arg1 ;
@end

