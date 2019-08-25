/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactsLogger;
#import <Contacts/Contacts-Structs.h>
@interface CNTCC : NSObject {

	BOOL _simulateAccessPrompt;
	BOOL _simulateAccessPromptGranted;
	id<CNContactsLogger> _logger;
	long long _simulateType;
	double _simulateAccessPromptDelay;

}

@property (nonatomic,readonly) id<CNContactsLogger> logger;                 //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) long long simulateType;                        //@synthesize simulateType=_simulateType - In the implementation block
@property (assign,nonatomic) BOOL simulateAccessPrompt;                     //@synthesize simulateAccessPrompt=_simulateAccessPrompt - In the implementation block
@property (assign,nonatomic) BOOL simulateAccessPromptGranted;              //@synthesize simulateAccessPromptGranted=_simulateAccessPromptGranted - In the implementation block
@property (assign,nonatomic) double simulateAccessPromptDelay;              //@synthesize simulateAccessPromptDelay=_simulateAccessPromptDelay - In the implementation block
+(id)sharedInstance;
-(id)_simulateQueue;
-(BOOL)simulateAccessPrompt;
-(void)setSimulateAccessPrompt:(BOOL)arg1 ;
-(double)simulateAccessPromptDelay;
-(BOOL)simulateAccessPromptGranted;
-(void)setSimulateType:(long long)arg1 ;
-(long long)simulateType;
-(int)accessPreflight;
-(unsigned char)isAccessRestricted;
-(void)accessRequestWithCompletion:(/*^block*/id)arg1 ;
-(unsigned char)checkAuditToken:(SCD_Struct_CN1)arg1 ;
-(void)simulate:(long long)arg1 ;
-(void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)arg1 withDelay:(double)arg2 ;
-(void)setSimulateAccessPromptGranted:(BOOL)arg1 ;
-(void)setSimulateAccessPromptDelay:(double)arg1 ;
-(id<CNContactsLogger>)logger;
-(id)init;
-(id)initWithEnvironment:(id)arg1 ;
@end

