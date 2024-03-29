/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSService.h>

@interface MSMailDefaultService : MSService {

	BOOL _shouldLaunch;

}

@property (assign,nonatomic) BOOL shouldLaunchMobileMail;              //@synthesize shouldLaunch=_shouldLaunch - In the implementation block
-(BOOL)_launchMobileMailSuspendedError:(id*)arg1 ;
-(id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4 ;
-(id)_createServiceOnQueue:(id)arg1 ;
-(BOOL)shouldLaunchMobileMail;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
-(id)init;
@end

