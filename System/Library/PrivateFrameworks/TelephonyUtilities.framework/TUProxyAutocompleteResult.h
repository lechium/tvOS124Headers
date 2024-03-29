/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUSearchResult.h>

@class CNAutocompleteResult, NSString, CNContact, NSArray;

@interface TUProxyAutocompleteResult : NSObject <TUSearchResult> {

	CNAutocompleteResult* _autocompleteResult;

}

@property (nonatomic,retain) CNAutocompleteResult * autocompleteResult;              //@synthesize autocompleteResult=_autocompleteResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * displayName; 
@property (readonly) NSString * callerId; 
@property (readonly) CNContact * backingContact; 
@property (readonly) NSString * backingContactId; 
@property (readonly) NSString * backingContactIdentifier; 
@property (readonly) NSString * destinationId; 
@property (readonly) NSString * isoCountryCode; 
@property (readonly) NSArray * handles; 
@property (readonly) long long mostRecentCallType; 
@property (readonly) BOOL mostRecentCallWasMissed; 
@property (readonly) NSString * idsCanonicalDestination; 
@property (readonly) NSArray * idsCanonicalDestinations; 
-(void)setAutocompleteResult:(CNAutocompleteResult *)arg1 ;
-(CNAutocompleteResult *)autocompleteResult;
-(NSString *)isoCountryCode;
-(NSString *)callerId;
-(CNContact *)backingContact;
-(long long)mostRecentCallType;
-(NSString *)destinationId;
-(NSString *)backingContactId;
-(NSString *)backingContactIdentifier;
-(BOOL)mostRecentCallWasMissed;
-(NSString *)idsCanonicalDestination;
-(NSArray *)idsCanonicalDestinations;
-(id)initWithAutocompleteResult:(id)arg1 ;
-(id)init;
-(NSString *)displayName;
-(NSArray *)handles;
@end

