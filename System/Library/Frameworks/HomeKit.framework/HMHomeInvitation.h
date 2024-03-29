/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFUnfairLock, HMHome, NSURL, _HMContext, HMHomeInvitationData, NSUUID, NSDate, NSString;

@interface HMHomeInvitation : NSObject <HMObjectMerge, NSSecureCoding> {

	HMFUnfairLock* _lock;
	HMHome* _home;
	NSURL* _homeObjectURL;
	_HMContext* _context;
	HMHomeInvitationData* _invitationData;

}

@property (nonatomic,retain) _HMContext * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HMHomeInvitationData * invitationData;              //@synthesize invitationData=_invitationData - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                               //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long invitationState; 
@property (nonatomic,readonly) NSURL * homeObjectURL;                            //@synthesize homeObjectURL=_homeObjectURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(long long)invitationState;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_updateInvitationState:(long long)arg1 ;
-(id)initWithInvitationData:(id)arg1 home:(id)arg2 ;
-(NSURL *)homeObjectURL;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 invitationData:(id)arg2 ;
-(HMHomeInvitationData *)invitationData;
-(void)setInvitationData:(HMHomeInvitationData *)arg1 ;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
@end

