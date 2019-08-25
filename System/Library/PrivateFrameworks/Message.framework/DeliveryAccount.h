/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFAccount.h>

@interface DeliveryAccount : MFAccount
+(id)newDefaultInstance;
+(id)accountTypeIdentifier;
+(id)existingAccountForUniqueID:(id)arg1 ;
+(id)accountWithUniqueId:(id)arg1 ;
+(id)existingAccountWithIdentifier:(id)arg1 ;
+(void)_postDeliveryAccountsHaveChanged;
+(id)deliveryAccounts;
+(id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(BOOL)arg3 ;
+(id)existingAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(void)addDeliveryAccount:(id)arg1 ;
+(void)reloadDeliveryAccounts;
+(void)removeDeliveryAccount:(id)arg1 ;
+(id)accountWithHostname:(id)arg1 username:(id)arg2 ;
+(id)carrierDeliveryAccount;
+(id)accountWithIdentifier:(id)arg1 ;
-(void)_setAccountProperties:(id)arg1 ;
-(BOOL)hasEnoughInformationForEasySetup;
-(id)newDeliveryWithMessage:(id)arg1 ;
-(id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
-(id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2 ;
-(Class)deliveryClass;
-(void)setShouldUseAuthentication:(BOOL)arg1 ;
-(unsigned long long)maximumMessageBytes;
-(BOOL)shouldUseAuthentication;
-(void)setMaximumMessageBytes:(unsigned long long)arg1 ;
-(id)mailAccountIfAvailable;
-(BOOL)hasNoReferences;
-(id)displayHostname;
-(BOOL)canBeFallbackAccount;
-(BOOL)supportsOutboxCopy;
-(BOOL)shouldUseSaveSentForAccount:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(id)identifier;
@end

