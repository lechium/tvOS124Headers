/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSMapTable, NSString, PKPaymentPass, PKRemoteDevice, PKPaymentRequest, CNContact, PKShippingMethod, PKPayment, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPassLibrary, PKPaymentWebService, PKPeerPaymentService, PKPeerPaymentQuote, PKDisbursementApplicationInformation, PKBankAccountInformation, PKCurrencyAmount, PKPaymentApplication, PKPaymentInstructions, PKRemotePaymentInstrument, NSSet, NSDecimalNumber;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating> {

	NSMutableArray* _items;
	NSMutableDictionary* _typeToItemMap;
	unsigned long long _holdPendingUpdatesCount;
	BOOL _ignoreProximity;
	NSArray* _acceptedPasses;
	NSArray* _unavailablePasses;
	NSMapTable* _instrumentToDeviceMap;
	NSMutableDictionary* _remoteDeviceToAcceptedInstruments;
	NSArray* _allRemoteDevices;
	NSMutableDictionary* _statusForPass;
	NSMutableDictionary* _acceptedApplications;
	NSString* _paymentApplicationIdentifierForErrors;
	NSArray* _clientErrors;
	BOOL _shippingEditable;
	PKPaymentPass* _pass;
	PKRemoteDevice* _remoteDevice;
	long long _mode;
	PKPaymentRequest* _paymentRequest;
	NSArray* _paymentContentItems;
	NSString* _hostAppLocalizedName;
	NSString* _hostApplicationIdentifier;
	NSString* _bundleIdentifier;
	NSString* _teamIdentifier;
	CNContact* _shippingEmail;
	CNContact* _shippingPhone;
	CNContact* _shippingName;
	CNContact* _shippingAddress;
	PKShippingMethod* _shippingMethod;
	NSString* _shippingType;
	NSString* _shippingEditableMessage;
	CNContact* _billingAddress;
	NSArray* _paymentErrors;
	PKPayment* _payment;
	PKPaymentOptionsDefaults* _defaults;
	PKPaymentOptionsRecents* _recents;
	PKPassLibrary* _library;
	PKPaymentWebService* _paymentWebService;
	PKPeerPaymentService* _peerPaymentService;
	PKPaymentPass* _peerPaymentPass;
	NSArray* _pendingTransactions;
	/*^block*/id _updateHandler;
	PKPeerPaymentQuote* _peerPaymentQuote;
	PKDisbursementApplicationInformation* _disbursementApplicationInformation;
	PKBankAccountInformation* _bankAccount;
	PKCurrencyAmount* _peerPaymentBalanceForAccountPayment;
	PKPaymentApplication* _paymentApplication;
	PKPaymentInstructions* _instructions;
	PKRemotePaymentInstrument* _remotePaymentInstrument;
	PKRemotePaymentInstrument* _initialRemotePaymentInstrument;
	NSSet* _allAcceptedRemotePaymentInstruments;
	NSSet* _allUnavailableRemotePaymentInstruments;
	CNContact* _cachedRecentAddress;

}

@property (nonatomic,retain) CNContact * cachedRecentAddress;                                                        //@synthesize cachedRecentAddress=_cachedRecentAddress - In the implementation block
@property (nonatomic,readonly) NSString * defaultPaymentPassUniqueIdentifier; 
@property (nonatomic,readonly) long long mode;                                                                       //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) PKPaymentRequest * paymentRequest;                                                      //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (nonatomic,retain) NSArray * paymentContentItems;                                                          //@synthesize paymentContentItems=_paymentContentItems - In the implementation block
@property (nonatomic,retain) NSString * hostAppLocalizedName;                                                        //@synthesize hostAppLocalizedName=_hostAppLocalizedName - In the implementation block
@property (nonatomic,retain) NSString * hostApplicationIdentifier;                                                   //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * teamIdentifier;                                                              //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,retain) CNContact * shippingEmail;                                                              //@synthesize shippingEmail=_shippingEmail - In the implementation block
@property (nonatomic,retain) CNContact * shippingPhone;                                                              //@synthesize shippingPhone=_shippingPhone - In the implementation block
@property (nonatomic,retain) CNContact * shippingName;                                                               //@synthesize shippingName=_shippingName - In the implementation block
@property (nonatomic,retain) CNContact * shippingAddress;                                                            //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,retain) PKShippingMethod * shippingMethod;                                                      //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,retain) NSString * shippingType;                                                                //@synthesize shippingType=_shippingType - In the implementation block
@property (assign,getter=isShippingEditable,nonatomic) BOOL shippingEditable;                                        //@synthesize shippingEditable=_shippingEditable - In the implementation block
@property (nonatomic,retain) NSString * shippingEditableMessage;                                                     //@synthesize shippingEditableMessage=_shippingEditableMessage - In the implementation block
@property (nonatomic,retain) CNContact * billingAddress;                                                             //@synthesize billingAddress=_billingAddress - In the implementation block
@property (nonatomic,retain) NSArray * paymentSummaryItems; 
@property (nonatomic,retain) NSArray * paymentErrors;                                                                //@synthesize paymentErrors=_paymentErrors - In the implementation block
@property (nonatomic,retain) PKPayment * payment;                                                                    //@synthesize payment=_payment - In the implementation block
@property (nonatomic,retain) PKPaymentOptionsDefaults * defaults;                                                    //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) PKPaymentOptionsRecents * recents;                                                      //@synthesize recents=_recents - In the implementation block
@property (nonatomic,retain) PKPassLibrary * library;                                                                //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                                                //@synthesize paymentWebService=_paymentWebService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentService * peerPaymentService;                                              //@synthesize peerPaymentService=_peerPaymentService - In the implementation block
@property (nonatomic,retain) PKPaymentPass * peerPaymentPass;                                                        //@synthesize peerPaymentPass=_peerPaymentPass - In the implementation block
@property (nonatomic,retain) NSArray * pendingTransactions;                                                          //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (nonatomic,copy) id updateHandler;                                                                         //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,readonly) NSString * merchantName; 
@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) NSDecimalNumber * transactionAmount; 
@property (nonatomic,readonly) NSArray * items;                                                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL pinRequired; 
@property (nonatomic,retain) PKRemoteDevice * remoteDevice;                                                          //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,retain) PKPeerPaymentQuote * peerPaymentQuote;                                                  //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
@property (nonatomic,retain) PKDisbursementApplicationInformation * disbursementApplicationInformation;              //@synthesize disbursementApplicationInformation=_disbursementApplicationInformation - In the implementation block
@property (nonatomic,retain) PKBankAccountInformation * bankAccount;                                                 //@synthesize bankAccount=_bankAccount - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalanceForAccountPayment;                                 //@synthesize peerPaymentBalanceForAccountPayment=_peerPaymentBalanceForAccountPayment - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;                                              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                                                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) NSArray * acceptedPasses; 
@property (nonatomic,readonly) NSArray * unavailablePasses; 
@property (nonatomic,readonly) BOOL wantsInstructions; 
@property (nonatomic,retain) PKPaymentInstructions * instructions;                                                   //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSArray * remoteDevices; 
@property (nonatomic,readonly) NSArray * allRemoteDevices;                                                           //@synthesize allRemoteDevices=_allRemoteDevices - In the implementation block
@property (nonatomic,readonly) NSArray * allNearbyRemoteDevices; 
@property (nonatomic,retain) PKRemotePaymentInstrument * remotePaymentInstrument;                                    //@synthesize remotePaymentInstrument=_remotePaymentInstrument - In the implementation block
@property (nonatomic,retain) PKRemotePaymentInstrument * initialRemotePaymentInstrument;                             //@synthesize initialRemotePaymentInstrument=_initialRemotePaymentInstrument - In the implementation block
@property (nonatomic,readonly) NSSet * allAcceptedRemotePaymentInstruments;                                          //@synthesize allAcceptedRemotePaymentInstruments=_allAcceptedRemotePaymentInstruments - In the implementation block
@property (nonatomic,readonly) NSSet * allUnavailableRemotePaymentInstruments;                                       //@synthesize allUnavailableRemotePaymentInstruments=_allUnavailableRemotePaymentInstruments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInstructions:(PKPaymentInstructions *)arg1 ;
-(PKPaymentInstructions *)instructions;
-(NSString *)merchantName;
-(NSString *)currencyCode;
-(PKPassLibrary *)library;
-(void)setLibrary:(PKPassLibrary *)arg1 ;
-(PKShippingMethod *)shippingMethod;
-(CNContact *)shippingAddress;
-(void)setShippingAddress:(CNContact *)arg1 ;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(NSString *)defaultPaymentPassUniqueIdentifier;
-(PKPaymentPass *)pass;
-(PKPaymentPass *)peerPaymentPass;
-(void)setPeerPaymentPass:(PKPaymentPass *)arg1 ;
-(void)setShippingMethod:(PKShippingMethod *)arg1 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(PKPaymentOptionsDefaults *)defaults;
-(void)_ensureItems;
-(void)_ensurePaymentContentItems;
-(void)_notifyModelChanged;
-(void)_ensureItemForClass:(Class)arg1 ;
-(BOOL)shouldUpdateContactDataItem;
-(void)_updatePeerPaymentPromotionAvailability;
-(void)updateBillingErrors;
-(id)itemForType:(long long)arg1 ;
-(NSArray *)paymentSummaryItems;
-(void)setPaymentSummaryItems:(NSArray *)arg1 ;
-(unsigned long long)_insertionIndexForItem:(id)arg1 ;
-(long long)_displayOrderForDataType:(long long)arg1 ;
-(PKPaymentRequest *)paymentRequest;
-(void)_ensurePlaceholderItems;
-(NSArray *)acceptedPasses;
-(id)automaticallyPresentedPassFromAcceptedPasses:(id)arg1 ;
-(id)defaultSelectedPaymentApplicationForPass:(id)arg1 ;
-(NSArray *)paymentContentItems;
-(void)setPaymentContentItems:(NSArray *)arg1 ;
-(NSString *)shippingType;
-(void)setShippingType:(NSString *)arg1 ;
-(BOOL)isShippingEditable;
-(void)setShippingEditable:(BOOL)arg1 ;
-(NSString *)shippingEditableMessage;
-(void)setShippingEditableMessage:(NSString *)arg1 ;
-(void)setBillingAddress:(CNContact *)arg1 ;
-(void)setShippingEmail:(CNContact *)arg1 ;
-(void)setShippingPhone:(CNContact *)arg1 ;
-(void)setShippingName:(CNContact *)arg1 ;
-(void)setPeerPaymentQuote:(PKPeerPaymentQuote *)arg1 ;
-(void)setPeerPaymentBalanceForAccountPayment:(PKCurrencyAmount *)arg1 ;
-(void)setBankAccount:(PKBankAccountInformation *)arg1 ;
-(void)setPaymentDateForPaymentRequest:(id)arg1 ;
-(void)_setDataItem:(id)arg1 ;
-(void)setStatus:(long long)arg1 forItemWithType:(long long)arg2 notify:(BOOL)arg3 ;
-(void)_setPaymentContentDataItems:(id)arg1 ;
-(id)_filterAndProcessPaymentPassesUsingConfiguration:(id)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)wantsInstructions;
-(void)setPass:(id)arg1 withSelectedPaymentApplication:(id)arg2 ;
-(id)defaultSelectedPaymentApplicationForRemoteInstrument:(id)arg1 ;
-(void)setRemotePaymentInstrument:(id)arg1 withSelectedPaymentApplication:(id)arg2 ;
-(void)updateRemoteDevices:(id)arg1 ignoreProximity:(BOOL)arg2 ;
-(id)_inAppPaymentPassesForPaymentRequest:(id)arg1 ;
-(id)_inAppPrivateLabelPaymentPasses;
-(id)_filterAndProcessPaymentApplicationsUsingConfiguration:(id)arg1 withPrimaryPaymentApplication:(id)arg2 ;
-(id)acceptedPaymentApplicationsForPass:(id)arg1 ;
-(id)_defaultSelectedPaymentApplicationForPaymentApplications:(id)arg1 ;
-(id)acceptedPaymentApplicationsForRemoteInstrument:(id)arg1 ;
-(NSDecimalNumber *)transactionAmount;
-(long long)_statusForPass:(id)arg1 ;
-(void)_setStatus:(long long)arg1 forPass:(id)arg2 ;
-(void)setPaymentRequest:(PKPaymentRequest *)arg1 ;
-(void)setShippingAddressErrors:(id)arg1 ;
-(void)setPaymentErrors:(NSArray *)arg1 ;
-(void)setDisbursementApplicationInformation:(PKDisbursementApplicationInformation *)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)paymentErrorsFromLegacyStatus:(long long)arg1 ;
-(void)setPaymentPassWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(NSArray *)remoteDevices;
-(NSArray *)allNearbyRemoteDevices;
-(void)setRemoteDevice:(PKRemoteDevice *)arg1 ;
-(void)setRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(void)updateRemoteDevices:(id)arg1 ;
-(id)unavailablePaymentApplicationsForPass:(id)arg1 ;
-(id)acceptedRemotePaymentInstrumentsForRemoteDevice:(id)arg1 ;
-(id)unavailablePaymentApplicationsForRemoteInstrument:(id)arg1 ;
-(NSArray *)unavailablePasses;
-(BOOL)pinRequired;
-(void)setStatus:(long long)arg1 forItemWithType:(long long)arg2 ;
-(void)fallbackToBypassMode;
-(NSString *)hostAppLocalizedName;
-(void)setHostAppLocalizedName:(NSString *)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(CNContact *)shippingEmail;
-(CNContact *)shippingPhone;
-(CNContact *)shippingName;
-(CNContact *)billingAddress;
-(NSArray *)paymentErrors;
-(PKPayment *)payment;
-(void)setPayment:(PKPayment *)arg1 ;
-(void)setDefaults:(PKPaymentOptionsDefaults *)arg1 ;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(PKPeerPaymentService *)peerPaymentService;
-(void)setPeerPaymentService:(PKPeerPaymentService *)arg1 ;
-(id)updateHandler;
-(PKDisbursementApplicationInformation *)disbursementApplicationInformation;
-(PKBankAccountInformation *)bankAccount;
-(PKCurrencyAmount *)peerPaymentBalanceForAccountPayment;
-(NSArray *)allRemoteDevices;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(PKRemotePaymentInstrument *)initialRemotePaymentInstrument;
-(void)setInitialRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(NSSet *)allAcceptedRemotePaymentInstruments;
-(NSSet *)allUnavailableRemotePaymentInstruments;
-(CNContact *)cachedRecentAddress;
-(void)setCachedRecentAddress:(CNContact *)arg1 ;
-(PKRemoteDevice *)remoteDevice;
-(NSString *)teamIdentifier;
-(NSArray *)pendingTransactions;
-(void)setPendingTransactions:(NSArray *)arg1 ;
-(id)init;
-(NSString *)bundleIdentifier;
-(NSArray *)items;
-(long long)mode;
-(PKPaymentOptionsRecents *)recents;
-(void)setRecents:(PKPaymentOptionsRecents *)arg1 ;
-(id)initWithMode:(long long)arg1 ;
-(void)beginUpdates;
-(void)endUpdates;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

