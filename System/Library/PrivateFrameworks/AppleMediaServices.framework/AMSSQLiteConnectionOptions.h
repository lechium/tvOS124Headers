/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AMSSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _readOnly;
	NSString* _databasePath;
	long long _cacheSize;
	NSString* _protectionType;

}

@property (nonatomic,copy) NSString * databasePath;                        //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) long long cacheSize;                          //@synthesize cacheSize=_cacheSize - In the implementation block
@property (nonatomic,copy) NSString * protectionType;                      //@synthesize protectionType=_protectionType - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;              //@synthesize readOnly=_readOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDatabasePath:(NSString *)arg1 ;
-(BOOL)isReadOnly;
-(NSString *)databasePath;
-(id)initWithDatabasePath:(id)arg1 ;
-(void)setCacheSizeWithNumberOfKilobytes:(long long)arg1 ;
-(void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1 ;
-(int)applyToDatabase:(sqlite3Ref)arg1 ;
-(NSString *)protectionType;
-(void)setProtectionType:(NSString *)arg1 ;
-(void)setCacheSize:(long long)arg1 ;
-(long long)cacheSize;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

