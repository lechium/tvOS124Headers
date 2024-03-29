/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface _CDPeopleSuggesterSettings : NSObject <NSCopying> {

	BOOL _useFuture;
	BOOL _aggregateByIdentifier;
	BOOL _requireOutgoingInteraction;
	BOOL _useTitleToContrainKeywords;
	unsigned long long _maxNumberOfPeopleSuggested;
	NSSet* _constrainMechanisms;
	NSSet* _constrainBundleIds;
	NSSet* _constrainAccounts;
	NSSet* _constrainDomainIdentifiers;
	NSSet* _constrainIdentifiers;
	NSSet* _constrainPersonIds;
	NSSet* _constrainPersonIdType;
	unsigned long long _constrainMaxRecipientCount;
	NSSet* _ignoreContactIdentifiers;

}

@property (assign) unsigned long long maxNumberOfPeopleSuggested;              //@synthesize maxNumberOfPeopleSuggested=_maxNumberOfPeopleSuggested - In the implementation block
@property (retain) NSSet * constrainMechanisms;                                //@synthesize constrainMechanisms=_constrainMechanisms - In the implementation block
@property (retain) NSSet * constrainBundleIds;                                 //@synthesize constrainBundleIds=_constrainBundleIds - In the implementation block
@property (retain) NSSet * constrainAccounts;                                  //@synthesize constrainAccounts=_constrainAccounts - In the implementation block
@property (retain) NSSet * constrainDomainIdentifiers;                         //@synthesize constrainDomainIdentifiers=_constrainDomainIdentifiers - In the implementation block
@property (retain) NSSet * constrainIdentifiers;                               //@synthesize constrainIdentifiers=_constrainIdentifiers - In the implementation block
@property (retain) NSSet * constrainPersonIds;                                 //@synthesize constrainPersonIds=_constrainPersonIds - In the implementation block
@property (retain) NSSet * constrainPersonIdType;                              //@synthesize constrainPersonIdType=_constrainPersonIdType - In the implementation block
@property (assign) unsigned long long constrainMaxRecipientCount;              //@synthesize constrainMaxRecipientCount=_constrainMaxRecipientCount - In the implementation block
@property (assign) BOOL useFuture;                                             //@synthesize useFuture=_useFuture - In the implementation block
@property (assign) BOOL aggregateByIdentifier;                                 //@synthesize aggregateByIdentifier=_aggregateByIdentifier - In the implementation block
@property (assign) BOOL requireOutgoingInteraction;                            //@synthesize requireOutgoingInteraction=_requireOutgoingInteraction - In the implementation block
@property (assign) BOOL useTitleToContrainKeywords;                            //@synthesize useTitleToContrainKeywords=_useTitleToContrainKeywords - In the implementation block
@property (retain) NSSet * ignoreContactIdentifiers;                           //@synthesize ignoreContactIdentifiers=_ignoreContactIdentifiers - In the implementation block
+(id)defaultSettings;
-(NSSet *)constrainAccounts;
-(BOOL)requireOutgoingInteraction;
-(void)setRequireOutgoingInteraction:(BOOL)arg1 ;
-(NSSet *)constrainMechanisms;
-(NSSet *)constrainPersonIds;
-(NSSet *)constrainIdentifiers;
-(void)setConstrainMaxRecipientCount:(unsigned long long)arg1 ;
-(NSSet *)constrainPersonIdType;
-(BOOL)useFuture;
-(NSSet *)ignoreContactIdentifiers;
-(BOOL)aggregateByIdentifier;
-(void)setConstrainAccounts:(NSSet *)arg1 ;
-(NSSet *)constrainBundleIds;
-(void)setConstrainBundleIds:(NSSet *)arg1 ;
-(NSSet *)constrainDomainIdentifiers;
-(void)setConstrainDomainIdentifiers:(NSSet *)arg1 ;
-(void)setIgnoreContactIdentifiers:(NSSet *)arg1 ;
-(void)setUseFuture:(BOOL)arg1 ;
-(unsigned long long)constrainMaxRecipientCount;
-(BOOL)useTitleToContrainKeywords;
-(void)setUseTitleToContrainKeywords:(BOOL)arg1 ;
-(void)setConstrainPersonIdType:(NSSet *)arg1 ;
-(void)setConstrainPersonIds:(NSSet *)arg1 ;
-(unsigned long long)maxNumberOfPeopleSuggested;
-(void)setMaxNumberOfPeopleSuggested:(unsigned long long)arg1 ;
-(void)setAggregateByIdentifier:(BOOL)arg1 ;
-(void)setConstrainMechanisms:(NSSet *)arg1 ;
-(void)setConstrainIdentifiers:(NSSet *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

