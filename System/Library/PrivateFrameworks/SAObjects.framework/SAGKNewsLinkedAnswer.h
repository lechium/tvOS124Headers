/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKLinkedAnswer.h>

@class NSDate, NSString;

@interface SAGKNewsLinkedAnswer : SAGKLinkedAnswer

@property (nonatomic,copy) NSDate * publicationDate; 
@property (nonatomic,copy) NSString * source; 
+(id)newsLinkedAnswer;
+(id)newsLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(NSDate *)publicationDate;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
@end
