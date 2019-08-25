/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSDictionary;

@interface SAUILaunchAppWithParameters : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,copy) NSDictionary * parameters; 
+(id)launchAppWithParameters;
+(id)launchAppWithParametersWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
@end

