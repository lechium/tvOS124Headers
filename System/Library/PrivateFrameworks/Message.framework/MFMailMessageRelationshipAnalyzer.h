/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MFMailMessageRelationshipAnalyzer : NSObject {

	NSArray* _messages;
	NSArray* _relationships;

}
+(id)myEmailAddresses;
+(id)analyzeMessages:(id)arg1 myEmailAddresses:(id)arg2 ;
+(id)sendersOfMessage:(id)arg1 ;
+(unsigned long long)relationOfMessage:(id)arg1 toMessage:(id)arg2 previousSenders:(id)arg3 myEmailAddresses:(id)arg4 ;
+(BOOL)isMessage:(id)arg1 responseToMessage:(id)arg2 previousSenders:(id)arg3 myEmailAddresses:(id)arg4 ;
+(BOOL)isMessageDraft:(id)arg1 ;
+(BOOL)isMessage:(id)arg1 forwardOfMessage:(id)arg2 myEmailAddresses:(id)arg3 ;
+(BOOL)isMessage:(id)arg1 sentByAddress:(id)arg2 ;
+(BOOL)isMessage:(id)arg1 addressedToPreviousSender:(id)arg2 ;
+(BOOL)isMessage:(id)arg1 addressedToMailingListForMessage:(id)arg2 ;
+(id)recipientsOfMessage:(id)arg1 ;
+(id)analysisOfConversation:(id)arg1 ;
+(unsigned long long)relationOfMessage:(id)arg1 toMessage:(id)arg2 ;
-(id)initWithMessages:(id)arg1 relationships:(id)arg2 ;
-(unsigned long long)relationOfMessage:(id)arg1 ;
-(void)dealloc;
@end

