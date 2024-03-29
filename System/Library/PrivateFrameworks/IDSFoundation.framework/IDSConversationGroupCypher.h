/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ENCypher.h>

@class NSString, IDSMPConversationGroup, NSArray, IDSDeviceIdentity;

@interface IDSConversationGroupCypher : NSObject <ENCypher> {

	IDSMPConversationGroup* _conversationGroup;
	NSArray* _participants;
	IDSDeviceIdentity* _deviceIdentity;

}

@property (nonatomic,retain) IDSMPConversationGroup * conversationGroup;              //@synthesize conversationGroup=_conversationGroup - In the implementation block
@property (nonatomic,retain) NSArray * participants;                                  //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) IDSDeviceIdentity * deviceIdentity;                    //@synthesize deviceIdentity=_deviceIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
+(BOOL)supportsSecureCoding;
-(id)initWithConversationGroup:(id)arg1 deviceIdentity:(id)arg2 participants:(id)arg3 ;
-(IDSMPConversationGroup *)conversationGroup;
-(IDSDeviceIdentity *)deviceIdentity;
-(id)_memberList;
-(id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5 ;
-(void)setConversationGroup:(IDSMPConversationGroup *)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

