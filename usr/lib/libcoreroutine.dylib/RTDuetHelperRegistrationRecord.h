/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _CDContextualChangeRegistration;

@interface RTDuetHelperRegistrationRecord : NSObject {

	NSString* _registrationIdentifier;
	_CDContextualChangeRegistration* _registration;
	/*^block*/id _eventReceivedBlock;
	/*^block*/id _contextChangeBlock;

}

@property (nonatomic,retain) NSString * registrationIdentifier;                           //@synthesize registrationIdentifier=_registrationIdentifier - In the implementation block
@property (nonatomic,retain) _CDContextualChangeRegistration * registration;              //@synthesize registration=_registration - In the implementation block
@property (nonatomic,copy) id eventReceivedBlock;                                         //@synthesize eventReceivedBlock=_eventReceivedBlock - In the implementation block
@property (nonatomic,copy) id contextChangeBlock;                                         //@synthesize contextChangeBlock=_contextChangeBlock - In the implementation block
+(id)contextStoreRegistrationIdentifierForNotificationName:(id)arg1 ;
-(id)initWithRegistrationIdentifier:(id)arg1 contextStoreRegistration:(id)arg2 contextChangeBlock:(/*^block*/id)arg3 eventReceivedBlock:(/*^block*/id)arg4 ;
-(NSString *)registrationIdentifier;
-(void)setRegistrationIdentifier:(NSString *)arg1 ;
-(_CDContextualChangeRegistration *)registration;
-(void)setRegistration:(_CDContextualChangeRegistration *)arg1 ;
-(id)eventReceivedBlock;
-(void)setEventReceivedBlock:(id)arg1 ;
-(id)contextChangeBlock;
-(void)setContextChangeBlock:(id)arg1 ;
@end

