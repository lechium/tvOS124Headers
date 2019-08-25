/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface DAMailMessage : NSObject <NSCoding>
-(id)serverID;
-(id)clientID;
-(id)from;
-(id)to;
-(BOOL)read;
-(id)cc;
-(id)bcc;
-(BOOL)flagged;
-(id)remoteID;
-(id)folderID;
-(int)bodySize;
-(id)meetingRequestUUID;
-(id)longID;
-(BOOL)isDraft;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(BOOL)verbIsSet;
-(int)lastVerb;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(id)conversationId;
-(id)rfc822Data;
-(id)replyTo;
-(int)bodyType;
-(id)preview;
-(int)importance;
-(int)bodyTruncated;
-(id)displayTo;
-(id)threadTopic;
-(id)conversationIndex;
-(id)messageClass;
-(id)instanceID;
-(id)attachments;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)date;
-(id)sender;
-(id)body;
-(id)subject;
@end
