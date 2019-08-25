/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class NSString, NSArray, NSNumber;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand>

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * metricsContext; 
@property (nonatomic,copy) NSNumber * usefulnessScore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)baseClientBoundCommand;
+(id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAppId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)usefulnessScore;
-(void)setUsefulnessScore:(NSNumber *)arg1 ;
-(BOOL)mutatingCommand;
-(NSString *)metricsContext;
-(void)setMetricsContext:(NSString *)arg1 ;
-(NSArray *)callbacks;
-(void)setCallbacks:(NSArray *)arg1 ;
-(NSString *)appId;
@end

