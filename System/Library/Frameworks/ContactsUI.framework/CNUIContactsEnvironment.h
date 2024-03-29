/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNSchedulerProvider, CNUIPRLikenessProviderCache;
@class CNUIContactsEnvironmentServicesProvider, CNUIAccountsFacade, CNUIFMFFacade, _DECConsumer, PRPersonaStore, CNContactStore, CNUIMeMonitor, CNContactsEnvironment;

@interface CNUIContactsEnvironment : NSObject {

	long long _duetConsumer_once;
	long long _accountsFacade_once;
	long long _fmfFacade_once;
	long long _personaStore_once;
	long long _contactStore_once;
	long long _defaultSchedulerProvider_once;
	long long _likenessProviderCache_once;
	long long _meMonitor_once;
	CNUIContactsEnvironmentServicesProvider* _servicesProvider;
	CNUIAccountsFacade* _accountsFacade;
	CNUIFMFFacade* _fmfFacade;
	_DECConsumer* _duetConsumer;
	PRPersonaStore* _personaStore;
	id<CNSchedulerProvider> _defaultSchedulerProvider;
	CNContactStore* _contactStore;
	id<CNUIPRLikenessProviderCache> _likenessProviderCache;
	CNUIMeMonitor* _meMonitor;
	CNContactsEnvironment* _cnEnvironment;

}

@property (nonatomic,readonly) CNUIContactsEnvironmentServicesProvider * servicesProvider;              //@synthesize servicesProvider=_servicesProvider - In the implementation block
@property (nonatomic,retain) CNUIAccountsFacade * accountsFacade;                                       //@synthesize accountsFacade=_accountsFacade - In the implementation block
@property (nonatomic,retain) CNUIFMFFacade * fmfFacade;                                                 //@synthesize fmfFacade=_fmfFacade - In the implementation block
@property (nonatomic,retain) _DECConsumer * duetConsumer;                                               //@synthesize duetConsumer=_duetConsumer - In the implementation block
@property (nonatomic,retain) PRPersonaStore * personaStore;                                             //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> defaultSchedulerProvider;                          //@synthesize defaultSchedulerProvider=_defaultSchedulerProvider - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                             //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) id<CNUIPRLikenessProviderCache> likenessProviderCache;                     //@synthesize likenessProviderCache=_likenessProviderCache - In the implementation block
@property (nonatomic,retain) CNUIMeMonitor * meMonitor;                                                 //@synthesize meMonitor=_meMonitor - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * cnEnvironment;                                   //@synthesize cnEnvironment=_cnEnvironment - In the implementation block
+(id)currentEnvironment;
-(PRPersonaStore *)personaStore;
-(_DECConsumer *)duetConsumer;
-(void)setDuetConsumer:(_DECConsumer *)arg1 ;
-(CNUIMeMonitor *)meMonitor;
-(id<CNSchedulerProvider>)defaultSchedulerProvider;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(void)setMeMonitor:(CNUIMeMonitor *)arg1 ;
-(CNUIFMFFacade *)fmfFacade;
-(void)setFmfFacade:(CNUIFMFFacade *)arg1 ;
-(id)initWithContactsEnvironment:(id)arg1 ;
-(CNUIContactsEnvironmentServicesProvider *)servicesProvider;
-(CNUIAccountsFacade *)accountsFacade;
-(CNContactsEnvironment *)cnEnvironment;
-(id<CNUIPRLikenessProviderCache>)likenessProviderCache;
-(void)setAccountsFacade:(CNUIAccountsFacade *)arg1 ;
-(void)setDefaultSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(void)setLikenessProviderCache:(id<CNUIPRLikenessProviderCache>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)init;
@end

