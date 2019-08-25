/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAFetchLanguageSettings : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * idiom; 
@property (nonatomic,copy) NSString * systemBuildPrefix; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)fetchLanguageSettings;
+(id)fetchLanguageSettingsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)systemBuildPrefix;
-(void)setSystemBuildPrefix:(NSString *)arg1 ;
-(NSString *)idiom;
-(void)setIdiom:(NSString *)arg1 ;
@end

