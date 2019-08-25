/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSDictionary;

@interface ACProtobufAccountCredential : PBCodable <NSCopying> {

	NSMutableArray* _credentialItems;
	NSString* _credentialType;
	NSMutableArray* _dirtyProperties;
	BOOL _requiresTouchID;

}

@property (nonatomic,copy) NSDictionary * credentialItemsDictionary; 
@property (nonatomic,retain) NSMutableArray * credentialItems;                    //@synthesize credentialItems=_credentialItems - In the implementation block
@property (nonatomic,retain) NSString * credentialType;                           //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,retain) NSMutableArray * dirtyProperties;                    //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (assign,nonatomic) BOOL requiresTouchID;                                //@synthesize requiresTouchID=_requiresTouchID - In the implementation block
+(Class)dirtyPropertiesType;
+(Class)credentialItemsType;
-(void)clearDirtyProperties;
-(NSMutableArray *)credentialItems;
-(void)setRequiresTouchID:(BOOL)arg1 ;
-(void)setCredentialItems:(NSMutableArray *)arg1 ;
-(void)addDirtyProperties:(id)arg1 ;
-(unsigned long long)dirtyPropertiesCount;
-(id)dirtyPropertiesAtIndex:(unsigned long long)arg1 ;
-(void)clearCredentialItems;
-(void)addCredentialItems:(id)arg1 ;
-(unsigned long long)credentialItemsCount;
-(void)setCredentialItemsDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)credentialItemsDictionary;
-(id)credentialItemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)requiresTouchID;
-(NSMutableArray *)dirtyProperties;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
-(void)setDirtyProperties:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

