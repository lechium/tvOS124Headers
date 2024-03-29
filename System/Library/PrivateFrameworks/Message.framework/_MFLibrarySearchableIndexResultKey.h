/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageCriterion, NSIndexSet;

@interface _MFLibrarySearchableIndexResultKey : NSObject {

	MFMessageCriterion* _criterion;
	NSIndexSet* _mailboxIDs;

}

@property (nonatomic,retain) MFMessageCriterion * criterion;              //@synthesize criterion=_criterion - In the implementation block
@property (nonatomic,copy) NSIndexSet * mailboxIDs;                       //@synthesize mailboxIDs=_mailboxIDs - In the implementation block
-(MFMessageCriterion *)criterion;
-(void)setCriterion:(MFMessageCriterion *)arg1 ;
-(NSIndexSet *)mailboxIDs;
-(void)setMailboxIDs:(NSIndexSet *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

