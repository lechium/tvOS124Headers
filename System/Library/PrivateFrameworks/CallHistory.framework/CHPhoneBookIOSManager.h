/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHPhoneBookManagerProtocol.h>

@class CNContactStore, NSString;

@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol> {

	CNContactStore* _fContactsStore;

}

@property (nonatomic,retain) CNContactStore * fContactsStore;              //@synthesize fContactsStore=_fContactsStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)get;
-(id)fetchCNContactsMatchingPredicate:(id)arg1 keysToKetch:(id)arg2 error:(id*)arg3 ;
-(id)fetchCNContact:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3 ;
-(CNContactStore *)fContactsStore;
-(id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3 ;
-(id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(BOOL)arg2 ;
-(id)getPersonsNameForContact:(id)arg1 ;
-(id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3 ;
-(BOOL)isABContactASuggestion;
-(void)setFContactsStore:(CNContactStore *)arg1 ;
-(id)init;
@end

