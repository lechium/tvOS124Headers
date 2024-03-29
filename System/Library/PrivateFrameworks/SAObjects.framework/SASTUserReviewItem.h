/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * reviewDate; 
@property (nonatomic,retain) SAUIDecoratedText * reviewText; 
@property (nonatomic,retain) SAUIDecoratedText * reviewer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userReviewItem;
+(id)userReviewItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setReviewer:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)reviewer;
-(id)encodedClassName;
-(SAUIDecoratedText *)reviewDate;
-(void)setReviewDate:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)reviewText;
-(void)setReviewText:(SAUIDecoratedText *)arg1 ;
@end

