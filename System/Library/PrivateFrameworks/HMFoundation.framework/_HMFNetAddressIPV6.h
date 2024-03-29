/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFNetAddressInternal.h>

@interface _HMFNetAddressIPV6 : HMFNetAddressInternal {

	sockaddr_in6* _internal;

}

@property (nonatomic,readonly) sockaddr_in6* internal;              //@synthesize internal=_internal - In the implementation block
-(id)addressString;
-(unsigned long long)addressFamily;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
-(sockaddr_in6*)internal;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

