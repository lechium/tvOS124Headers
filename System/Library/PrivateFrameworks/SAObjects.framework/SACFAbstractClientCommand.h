/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray;

@interface SACFAbstractClientCommand : SADomainCommand

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSArray * jsLibraries; 
@property (nonatomic,copy) NSString * jsParameters; 
@property (nonatomic,copy) NSString * jsScript; 
@property (assign,nonatomic) BOOL shouldCacheScript; 
+(id)abstractClientCommand;
+(id)abstractClientCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)jsScript;
-(void)setJsScript:(NSString *)arg1 ;
-(BOOL)shouldCacheScript;
-(void)setShouldCacheScript:(BOOL)arg1 ;
-(NSArray *)jsLibraries;
-(void)setJsLibraries:(NSArray *)arg1 ;
-(NSString *)jsParameters;
-(void)setJsParameters:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
@end
