/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAIntentGroupBatchSlotResolutionResult, SAIntentGroupConfirmIntentCompleted, SAIntentGroupHandleIntentCompleted, NSString;

@interface SAIntentGroupProcessIntentCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAIntentGroupBatchSlotResolutionResult * batchSlotResolutionResult; 
@property (nonatomic,retain) SAIntentGroupConfirmIntentCompleted * confirmIntentCompleted; 
@property (nonatomic,retain) SAIntentGroupHandleIntentCompleted * handleIntentCompleted; 
@property (nonatomic,copy) NSString * lastAttemptedStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)processIntentCompleted;
+(id)processIntentCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAIntentGroupBatchSlotResolutionResult *)batchSlotResolutionResult;
-(SAIntentGroupConfirmIntentCompleted *)confirmIntentCompleted;
-(SAIntentGroupHandleIntentCompleted *)handleIntentCompleted;
-(void)setBatchSlotResolutionResult:(SAIntentGroupBatchSlotResolutionResult *)arg1 ;
-(void)setConfirmIntentCompleted:(SAIntentGroupConfirmIntentCompleted *)arg1 ;
-(void)setHandleIntentCompleted:(SAIntentGroupHandleIntentCompleted *)arg1 ;
-(NSString *)lastAttemptedStep;
-(void)setLastAttemptedStep:(NSString *)arg1 ;
@end

