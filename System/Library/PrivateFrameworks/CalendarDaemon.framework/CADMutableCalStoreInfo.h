/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CADCalStoreInfo.h>

@class NSString;

@interface CADMutableCalStoreInfo : NSObject <CADCalStoreInfo> {

	BOOL _isLocalStore;
	BOOL _isEnabled;
	int _rowID;
	NSString* _storeName;
	NSString* _accountIdentifier;

}

@property (assign,nonatomic) int rowID;                               //@synthesize rowID=_rowID - In the implementation block
@property (assign,nonatomic) BOOL isLocalStore;                       //@synthesize isLocalStore=_isLocalStore - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                          //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,copy) NSString * storeName;                      //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
-(void)setStoreName:(NSString *)arg1 ;
-(void)setRowID:(int)arg1 ;
-(void)setIsLocalStore:(BOOL)arg1 ;
-(int)rowID;
-(BOOL)isLocalStore;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(NSString *)accountIdentifier;
-(NSString *)storeName;
-(BOOL)isEnabled;
@end

