/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSURLHostNameAddressInfo : NSObject {

	double timestamp;
	addrinfo* addressInfo;

}
+(id)addressInfoForHost:(id)arg1 ;
+(void)asyncResolveWithCallbackClient:(id)arg1 ;
-(double)_timestamp;
-(id)_initWithAddressInfo:(addrinfo*)arg1 ;
-(addrinfo*)addrinfo;
-(void)dealloc;
@end

