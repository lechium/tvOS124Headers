/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/Security-Structs.h>
#import <Security/TKTokenRefImpl.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface TKTokenRefCtkd : TKTokenRefImpl {

	NSObject*<OS_xpc_object> _ctkdConnection;
	NSObject*<OS_xpc_object> _driverConnection;
	NSString* _tokenID;
	NSString* _slotName;

}
-(id)requestForOperation:(long long)arg1 ;
-(BOOL)transactOperation:(long long)arg1 objectID:(id)arg2 input:(/*^block*/id)arg3 output:(/*^block*/id)arg4 error:(id*)arg5 ;
-(id)certificateOfItems:(id)arg1 forKey:(_SecKey*)arg2 ;
-(id)identitiesOfItems:(id)arg1 ;
-(BOOL)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 error:(id*)arg3 ;
-(id)accessControlOfObject:(id)arg1 error:(id*)arg2 ;
-(id)createOrUpdateObject:(id)arg1 attributes:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteObject:(id)arg1 error:(id*)arg2 ;
-(id)dataOfObject:(id)arg1 error:(id*)arg2 ;
-(id)publicKeyOfObject:(id)arg1 error:(id*)arg2 ;
-(id)keyOperation:(long long)arg1 onObject:(id)arg2 algorithm:(id)arg3 mode:(long long)arg4 in1:(id)arg5 in2:(id)arg6 error:(id*)arg7 ;
-(id)controlWithAttributes:(id)arg1 error:(id*)arg2 ;
-(id)itemsWithError:(id*)arg1 ;
-(id)initWithAttributes:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
-(id)slotName;
-(void)dealloc;
-(id)description;
@end

