/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGPersonResult.h>

@class NSString, NSDate;

@interface PGGraphPersonNode : PGGraphNode <PGPersonResult>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@property (nonatomic,readonly) NSString * keywordDescription; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) BOOL isInferredChild; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (readonly) BOOL personIsUserCreated; 
@property (readonly) NSString * localIdentifier; 
@property (readonly) NSString * contactIdentifier; 
@property (readonly) unsigned long long ageCategory; 
@property (readonly) NSDate * birthdayDate; 
-(BOOL)isVerified;
-(NSString *)contactIdentifier;
-(NSString *)localIdentifier;
-(BOOL)belongsToBestSocialGroups;
-(long long)compareToPerson:(id)arg1 ;
-(NSDate *)birthdayDate;
-(BOOL)isInferredChild;
-(BOOL)isMeNode;
-(void)personEnumerateHomeOrWorkAddressNodesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)ageCategory;
-(BOOL)_isLinkedWithEdgeLabel:(id)arg1 withMinimumConfidence:(float)arg2 ;
-(void)_personEnumerateNeighborNodesThroughEdgeWithLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)personEnumerateSocialGroupNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)personIsUserCreated;
-(id)personMomentNodes;
-(id)personSocialGroupNodes;
-(void)personEnumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isFamilyMember;
-(BOOL)isPartner;
-(BOOL)isChild;
-(BOOL)isCoworker;
-(BOOL)isFriend;
-(void)personEnumerateFamilyMembersUsingBlock:(/*^block*/id)arg1 ;
-(void)personEnumeratePartnersUsingBlock:(/*^block*/id)arg1 ;
-(void)personEnumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(void)personEnumerateParentsUsingBlock:(/*^block*/id)arg1 ;
-(void)personEnumerateCoworkersUsingBlock:(/*^block*/id)arg1 ;
-(void)personEnumerateFriendsUsingBlock:(/*^block*/id)arg1 ;
-(id)associatedNodesForRemoval;
-(id)stringDescription;
@end

