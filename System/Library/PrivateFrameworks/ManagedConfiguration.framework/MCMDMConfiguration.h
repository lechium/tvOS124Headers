/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class NSObject, NSString, NSURL, NSDictionary;

@interface MCMDMConfiguration : NSObject {

	BOOL _memberQueueUseDevelopmentAPNS;
	BOOL _memberQueueSignMessage;
	int _memberQueueAccessRights;
	NSObject*<OS_dispatch_queue> _memberQueue;
	NSString* _memberQueueManagingProfileIdentifier;
	SecIdentityRef _memberQueueIdentity;
	NSString* _memberQueueTopic;
	NSURL* _memberQueueServerURL;
	NSURL* _memberQueueCheckInURL;
	NSDictionary* _memberQueueOrganizationInfo;
	NSDictionary* _memberQueueMDMOptions;
	NSString* _memberQueuePushMagic;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                     //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSString * memberQueueManagingProfileIdentifier;              //@synthesize memberQueueManagingProfileIdentifier=_memberQueueManagingProfileIdentifier - In the implementation block
@property (assign,nonatomic) SecIdentityRef memberQueueIdentity;                           //@synthesize memberQueueIdentity=_memberQueueIdentity - In the implementation block
@property (nonatomic,retain) NSString * memberQueueTopic;                                  //@synthesize memberQueueTopic=_memberQueueTopic - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueServerURL;                                 //@synthesize memberQueueServerURL=_memberQueueServerURL - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueCheckInURL;                                //@synthesize memberQueueCheckInURL=_memberQueueCheckInURL - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueOrganizationInfo;                   //@synthesize memberQueueOrganizationInfo=_memberQueueOrganizationInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueMDMOptions;                         //@synthesize memberQueueMDMOptions=_memberQueueMDMOptions - In the implementation block
@property (assign,nonatomic) int memberQueueAccessRights;                                  //@synthesize memberQueueAccessRights=_memberQueueAccessRights - In the implementation block
@property (assign,nonatomic) BOOL memberQueueUseDevelopmentAPNS;                           //@synthesize memberQueueUseDevelopmentAPNS=_memberQueueUseDevelopmentAPNS - In the implementation block
@property (nonatomic,retain) NSString * memberQueuePushMagic;                              //@synthesize memberQueuePushMagic=_memberQueuePushMagic - In the implementation block
@property (assign,nonatomic) BOOL memberQueueSignMessage;                                  //@synthesize memberQueueSignMessage=_memberQueueSignMessage - In the implementation block
+(id)sharedConfiguration;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)refreshDetailsFromDisk;
-(BOOL)readConfigurationOutError:(id*)arg1 ;
-(void)memberQueueForgetCurrentConfiguration;
-(void)setMemberQueueIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)memberQueueIdentity;
-(void)setMemberQueueManagingProfileIdentifier:(NSString *)arg1 ;
-(NSString *)memberQueueManagingProfileIdentifier;
-(void)setMemberQueueTopic:(NSString *)arg1 ;
-(NSString *)memberQueueTopic;
-(void)setMemberQueueServerURL:(NSURL *)arg1 ;
-(void)setMemberQueueCheckInURL:(NSURL *)arg1 ;
-(NSURL *)memberQueueServerURL;
-(void)setMemberQueueAccessRights:(int)arg1 ;
-(void)setMemberQueueUseDevelopmentAPNS:(BOOL)arg1 ;
-(void)setMemberQueueSignMessage:(BOOL)arg1 ;
-(void)setMemberQueuePushMagic:(NSString *)arg1 ;
-(NSString *)memberQueuePushMagic;
-(void)setMemberQueueOrganizationInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)memberQueueOrganizationInfo;
-(void)setMemberQueueMDMOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)memberQueueMDMOptions;
-(NSURL *)memberQueueCheckInURL;
-(int)memberQueueAccessRights;
-(BOOL)memberQueueUseDevelopmentAPNS;
-(BOOL)memberQueueSignMessage;
-(id)init;
@end

