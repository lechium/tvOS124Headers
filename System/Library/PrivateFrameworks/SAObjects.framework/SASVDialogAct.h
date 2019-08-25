/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASVDialogNode;

@interface SASVDialogAct : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SASVDialogNode * parametersRoot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dialogAct;
+(id)dialogActWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SASVDialogNode *)parametersRoot;
-(void)setParametersRoot:(SASVDialogNode *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

