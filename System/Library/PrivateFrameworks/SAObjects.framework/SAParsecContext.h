/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSData, NSDictionary, NSString;

@interface SAParsecContext : SADomainObject

@property (nonatomic,copy) NSData * httpBody; 
@property (nonatomic,copy) NSDictionary * httpHeaders; 
@property (nonatomic,copy) NSString * httpMethod; 
@property (nonatomic,copy) NSString * httpUrl; 
+(id)parsecContext;
+(id)parsecContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setHttpBody:(NSData *)arg1 ;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
-(NSString *)httpUrl;
-(void)setHttpUrl:(NSString *)arg1 ;
-(NSData *)httpBody;
-(NSString *)httpMethod;
@end
