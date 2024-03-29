/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMHomeInvitation.h>

@class HMMutableArray, HMUser, NSArray;

@interface HMOutgoingHomeInvitation : HMHomeInvitation {

	HMMutableArray* _accessoryInvitations;
	HMUser* _invitee;

}

@property (nonatomic,readonly) HMUser * invitee;                            //@synthesize invitee=_invitee - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryInvitations; 
+(id)homeInvitationsFromData:(id)arg1 home:(id)arg2 ;
+(id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(id)initWithInvitationData:(id)arg1 home:(id)arg2 ;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2 ;
-(HMUser *)invitee;
-(NSArray *)accessoryInvitations;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

