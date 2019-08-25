/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (assign,nonatomic) long long displayNameOrder; 
@property (assign,nonatomic) long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) BOOL shortNameFormatPrefersNicknames; 
@property (nonatomic,readonly) long long sortOrder; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
+(void)flushSharedInstance;
+(id)sharedDefaults;
-(long long)shortNameFormat;
-(void)setShortNameFormat:(long long)arg1 ;
-(NSString *)countryCode;
-(long long)sortOrder;
-(long long)newContactDisplayNameOrder;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(BOOL)shortNameFormatPrefersNicknames;
-(long long)displayNameOrder;
-(id)filteredGroupAndContainerIDs;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
-(id)init;
@end
