/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNSchedulerProvider, SGSuggestionsServiceContactsProtocol, CNContactsLoggerProvider;
@class CNiOSAddressBook, NSURL, CNiOSABPredicateRunner;

@interface CNContactsEnvironment : NSObject {

	CNiOSAddressBook* _addressBook;
	id<CNSchedulerProvider> _schedulerProvider;
	NSURL* _baseURL;
	id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
	CNiOSABPredicateRunner* _abPredicateRunner;
	id<CNContactsLoggerProvider> _loggerProvider;

}

@property (nonatomic,retain) CNiOSABPredicateRunner * abPredicateRunner;                               //@synthesize abPredicateRunner=_abPredicateRunner - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNContactsLoggerProvider> loggerProvider;                            //@synthesize loggerProvider=_loggerProvider - In the implementation block
@property (nonatomic,readonly) CNiOSAddressBook * addressBook; 
@property (nonatomic,copy) NSURL * baseURL;                                                            //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) id<SGSuggestionsServiceContactsProtocol> suggestionsService;              //@synthesize suggestionsService=_suggestionsService - In the implementation block
@property (nonatomic,readonly) BOOL useInMemoryStores; 
+(id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
+(id)inMemoryURL;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3 ;
+(id)baseURLWithDataLocationName:(id)arg1 ;
+(id)unitTestingEnvironment;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 ;
+(id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)currentEnvironment;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSURL *)baseURL;
-(id<CNContactsLoggerProvider>)loggerProvider;
-(BOOL)useInMemoryStores;
-(CNiOSABPredicateRunner *)abPredicateRunner;
-(id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<SGSuggestionsServiceContactsProtocol>)suggestionsService;
-(void)setSuggestionsService:(id<SGSuggestionsServiceContactsProtocol>)arg1 ;
-(void)setAbPredicateRunner:(CNiOSABPredicateRunner *)arg1 ;
-(CNiOSAddressBook *)addressBook;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

