/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFMailboxPredictionMailbox.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MFWeakReferenceHolder, NSMutableArray, MailAccount, MFMessageCriterion, NSArray, NSNumber, NSMutableDictionary, MFInvocationQueue;

@interface MFMailboxUid : NSObject <MFMailboxPredictionMailbox, NSCopying> {

	NSString* uniqueId;
	unsigned _mailboxID;
	MFWeakReferenceHolder* _account;
	NSString* _pathComponent;
	unsigned _attributes;
	MFWeakReferenceHolder* _parent;
	NSMutableArray* _children;
	MailAccount* _representedAccount;
	MFMessageCriterion* _criterion;
	BOOL allCriteriaMustBeSatisfied;
	NSString* _realFullPath;
	NSArray* _extraAttributes;
	NSNumber* _pendingLevel;
	int _type;
	NSMutableDictionary* _userInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MFInvocationQueue * attachmentDownloadQueue; 
@property (nonatomic,retain) NSArray * extraAttributes;                                                 //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (nonatomic,readonly) unsigned long long suggestionsLostMessageSearchResultCount; 
@property (nonatomic,readonly) double suggestionsLostMessageSearchTimestamp; 
+(id)specialNameForType:(int)arg1 ;
+(BOOL)isStandardizedMailboxUidType:(int)arg1 ;
+(BOOL)isSentMailboxType:(int)arg1 ;
+(BOOL)isOutgoingMailboxType:(int)arg1 ;
+(BOOL)isDraftsMailboxType:(int)arg1 ;
-(void)setExtraAttributes:(NSArray *)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(id)userInfoObjectForKey:(id)arg1 ;
-(void)saveUserInfo;
-(id)fullPath;
-(id)initWithAccount:(id)arg1 ;
-(NSArray *)extraAttributes;
-(id)persistentID;
-(unsigned long long)numberOfChildren;
-(BOOL)isContainer;
-(id)accountRelativePath;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(unsigned long long)unreadCount;
-(id)representedAccount;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(id)lastViewedMessageID;
-(id)lastViewedMessageDate;
-(unsigned long long)unreadCountMatchingCriterion:(id)arg1 ;
-(id)tildeAbbreviatedPath;
-(id)mutableCopyOfChildren;
-(BOOL)isStandardizedMailboxUid;
-(BOOL)isStore;
-(double)suggestionsLostMessageSearchTimestamp;
-(unsigned long long)suggestionsLostMessageSearchResultCount;
-(id)depthFirstEnumerator;
-(void)flushCriteria;
-(id)childWithName:(id)arg1 ;
-(id)childWithExtraAttribute:(id)arg1 ;
-(void)setRepresentedAccount:(id)arg1 ;
-(id)initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4 ;
-(id)pathRelativeToMailbox:(id)arg1 ;
-(id)_initWithName:(id)arg1 attributes:(unsigned)arg2 forAccount:(id)arg3 ;
-(id)_mutableChildren;
-(id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1 ;
-(unsigned long long)numberOfDescendants;
-(id)URLStringNonNil;
-(id)fullPathNonNil;
-(id)topMailbox;
-(id)rootMailbox;
-(id)ancestralAccount;
-(id)criterion;
-(id)_loadUserInfo;
-(BOOL)mergeWithUserInfo:(id)arg1 ;
-(id)URLStringWithAccount:(id)arg1 ;
-(void)addToPostOrderTraversal:(id)arg1 ;
-(id)displayNameUsingSpecialNames;
-(id)accountDisplayName;
-(unsigned long long)nonDeletedCount;
-(long long)statusCountDelta;
-(void)updateMostRecentStatusCount:(unsigned long long)arg1 ;
-(BOOL)shouldUseNonDeletedForUnreadCount;
-(BOOL)hasChildren;
-(id)childEnumerator;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfChild:(id)arg1 ;
-(id)descendantWithExtraAttribute:(id)arg1 ;
-(void)sortChildren;
-(BOOL)isSpecialMailboxUid;
-(BOOL)isSentMailboxUid;
-(BOOL)isOutgoingMailboxUid;
-(BOOL)isNotesMailboxUid;
-(id)realFullPath;
-(id)pathRelativeToMailboxForDisplay:(id)arg1 ;
-(id)oldURLString;
-(unsigned)mailboxID;
-(long long)compareWithMailboxUid:(id)arg1 ;
-(long long)indexToInsertChildMailboxUid:(id)arg1 ;
-(BOOL)isDescendantOfMailbox:(id)arg1 ;
-(BOOL)userInfoBoolForKey:(id)arg1 ;
-(void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)userInfoDictionary;
-(void)setUserInfoWithDictionary:(id)arg1 ;
-(id)userInfoForSerialization;
-(void)setCriterion:(id)arg1 ;
-(BOOL)isShared;
-(BOOL)alwaysWriteFullMessageFile;
-(void)setLastViewedMessageID:(id)arg1 ;
-(void)updateSuggestionsLostMessageSearchResultCount:(unsigned long long)arg1 ;
-(MFInvocationQueue *)attachmentDownloadQueue;
-(id)store;
-(id)account;
-(void)setParent:(id)arg1 ;
-(BOOL)setChildren:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)name;
-(void)setName:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isVisible;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)invalidate;
-(unsigned)attributes;
-(void)setAttributes:(unsigned)arg1 ;
-(id)URL;
-(id)uniqueId;
-(id)displayName;
-(BOOL)isValid;
-(id)dictionaryRepresentation;
-(id)parent;
-(void)removeChild:(id)arg1 ;
-(id)children;
-(id)URLString;
@end

