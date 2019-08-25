/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString, NSNumber, NSArray, SASmsGroupName;

@interface SASmsSearch : SADomainCommand

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * senders; 
@property (nonatomic,retain) SASmsGroupName * smsGroup; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSNumber * unread; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSNumber *)outgoing;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(NSArray *)senders;
-(void)setSenders:(NSArray *)arg1 ;
-(SASmsGroupName *)smsGroup;
-(void)setSmsGroup:(SASmsGroupName *)arg1 ;
-(NSNumber *)unread;
-(void)setUnread:(NSNumber *)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSDate *)start;
-(void)setStart:(NSDate *)arg1 ;
-(NSDate *)end;
-(void)setEnd:(NSDate *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
@end

