/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_voucher;
@class NSObject, IMLocalObject;

@interface IMMessageContext : NSObject {

	NSObject*<OS_xpc_object> _xpcMessage;
	IMLocalObject* _localObject;
	id _context;
	BOOL _boost;
	NSObject*<OS_voucher> _voucher;

}

@property (retain) IMLocalObject * localObject;                      //@synthesize localObject=_localObject - In the implementation block
@property (retain) id context;                                       //@synthesize context=_context - In the implementation block
@property (assign) BOOL shouldBoost;                                 //@synthesize boost=_boost - In the implementation block
@property (retain) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
@property (retain) NSObject*<OS_voucher> voucher;                    //@synthesize voucher=_voucher - In the implementation block
-(BOOL)shouldBoost;
-(void)setShouldBoost:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_voucher>)voucher;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setContext:(id)arg1 ;
-(id)context;
-(IMLocalObject *)localObject;
-(void)setLocalObject:(IMLocalObject *)arg1 ;
@end

