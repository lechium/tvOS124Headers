/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFFetchScriptResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * flowScripts; 
+(id)fetchScriptResponse;
+(id)fetchScriptResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)flowScripts;
-(void)setFlowScripts:(NSArray *)arg1 ;
@end

