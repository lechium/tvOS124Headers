/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSXPCListenerEndpoint;

@interface ICDelegateAccountStoreOptions : NSObject <NSCopying, NSSecureCoding> {

	NSString* _databasePath;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSString* _serviceName;
	BOOL _singleWriter;

}

@property (nonatomic,copy) NSString * databasePath;                                //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,getter=isSingleWriter,nonatomic) BOOL singleWriter;              //@synthesize singleWriter=_singleWriter - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * XPCEndpoint;                  //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) NSString * XPCServiceName;                              //@synthesize serviceName=_serviceName - In the implementation block
+(id)defaultOptionsWithServiceEndpoint:(id)arg1 ;
+(id)defaultOptionsWithServiceName:(id)arg1 ;
+(id)singleWriterOptionsWithDatabasePath:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setDatabasePath:(NSString *)arg1 ;
-(NSString *)databasePath;
-(NSString *)XPCServiceName;
-(BOOL)isSingleWriter;
-(void)setSingleWriter:(BOOL)arg1 ;
-(NSXPCListenerEndpoint *)XPCEndpoint;
-(void)setXPCEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setXPCServiceName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

